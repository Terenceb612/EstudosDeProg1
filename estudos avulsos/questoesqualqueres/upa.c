#include <stdio.h>
#include <stdlib.h>

#define MAX_EVENTOS 200000

typedef struct {
    int tempo;
    int tipo;
} Evento;

Evento eventos[MAX_EVENTOS];
int n_eventos;

int comparar(const void *a, const void *b) {
    Evento *ea = (Evento *)a;
    Evento *eb = (Evento *)b;

    if (ea->tempo != eb->tempo) {
        return ea->tempo - eb->tempo;
    }
    return ea->tipo - eb->tipo;
}

int main() {
    int n;
    scanf("%d", &n);

    n_eventos = 0;
    for (int i = 0; i < n; i++) {
        int c, p;
        scanf("%d %d", &c, &p);

        eventos[n_eventos].tempo = c;
        eventos[n_eventos].tipo  = +1;
        n_eventos++;

        eventos[n_eventos].tempo = p;
        eventos[n_eventos].tipo  = -1;
        n_eventos++;
    }

    qsort(eventos, n_eventos, sizeof(Evento), comparar);

    int atual  = 0;
    int maximo = 0;

    for (int i = 0; i < n_eventos; i++) {
        atual += eventos[i].tipo;
        if (atual > maximo) {
            maximo = atual;
        }
    }

    printf("%d\n", maximo * 20);

    return 0;
}
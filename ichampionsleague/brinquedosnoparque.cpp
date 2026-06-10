#include <bits/stdc++.h>
using namespace std;

int main()
{
    int altura, idade;
    int brinquedos = 0;
    cin >> altura >> idade;


    if (altura >= 150 && idade >=12)
    {
        brinquedos ++;
    }
    if (altura >= 140 && idade >= 14)
    {
        brinquedos ++;
    }
    if (altura >= 170 || idade >= 16)
    {
        brinquedos ++;
    }

    cout << brinquedos<<"\n";

    return 0;
}
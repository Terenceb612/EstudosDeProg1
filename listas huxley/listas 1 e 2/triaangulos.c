    #include <stdio.h>

    int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a == b && b ==c)
    {
        printf("equilatero\n");
    } 
    else if (a != b && a !=c && b != c)
    {
        printf("escaleno\n");
    }
    else
    {
        printf("isosceles");
    }
    return 0;
}
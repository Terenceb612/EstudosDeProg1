int main() 
{
     double vmax, v, m;
    int p;
    scanf("%lf %lf", &vmax, &v);

    if(v<= vmax)
    {
        printf("0.00\n0");
        return 0;
    }

    else if(v<= (vmax * 1.2))
    {
        m = 85.13;
        p=4;
    }
    else if(v<=(vmax*1.5))
    {
        m=127.69;
        p=5;
    }
    else 
    {
        m=574.62;
        p=7;
    }
    printf("%.2f\n%d",m,p);

	return 0;
}
#include<stdio.h>

int main()
{
    int n, i, a, b, x, z, c=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        a=0;
        b=0;
        x=0;
        z=0;

        if(i>=1 && i<10)
            c++;

        else if(i>=10 && i<100)
        {
            a=i%10;
            b=i/10;
            if(a==b)
            {
                c++;
            }
        }
        else if(i>=100 && i<1000)
        {
            a=i%100;
            b=i/100;
            if(a==b)
            {
                c=c+10;
            }
        }
        else if(i>=1000 && i<10000)
        {
            a=i%10;
            i/=10;
            b=i%10;
            i/=10;
            x=i%10;
            i/=10;
            z=i%10;

            if(a==z && b==x)
            {
                c=c+10;
            }

        }
    }

    printf("%d", c);

    return 0;
}

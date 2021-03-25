#include<stdio.h>

int main()
{
    int n, i, j, t, har, m=0;

    scanf("%d", &n);

    int a[n];

    for(i=1; i<=n; i++)
    {
        har=2;
        t=0;
        a[har]=0;
        j=i;

        while(j!=1)
        {

            if(j%har==0)
            {
                a[har]++;
                j=j/har;
                if(a[har]>=3)
                {
                    t=1;
                }
            }
            else
            {
                if(a[har]>=3)
                {
                    t=1;
                }
                har++;
            }
        }
        if(t==1)
            m++;
    }

    if(t[n]==1)
        printf("Not Cube Free");
    else
        printf("%d", n-m);

    return 0;
}

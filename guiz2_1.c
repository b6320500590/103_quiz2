#include<stdio.h>

int main()
{
    int n, i, j, har, m=0;

    scanf("%d", &n);

    int a[n], t[n];

    for(i=1; i<=n; i++)
    {
        a[n]=0;
        har=2;
        t[i]=0;
        j=i;

        while(j!=1)
        {
            if(j%har==0)
            {
                a[n]++;

                j=j/har;

                if(a[n]>2)
                {
                    t[i]=1;
                }
            }
            else
            {
                a[n]=a[n-1];
                har++;
            }
        }

        if(t[i]==1)
            m++;
    }

    if(t[n]==1)
        printf("Not Cube Free");
    else
        printf("%d", n-m);

    return 0;
}

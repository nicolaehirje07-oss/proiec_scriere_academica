#include <stdio.h>

int main()
{
    int v[1000001],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=1;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[min])
            {
                min=j;
            }
        }
        int aux=v[i];
        v[i]=v[min];
        v[min]=aux;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",v[i]);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int v[10000001],n,aux;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
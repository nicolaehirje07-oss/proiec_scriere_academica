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
        int j=i-1;
        int x=v[i];
        while(j>=0 && v[j]>x)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=x;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}
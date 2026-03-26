#include <stdio.h>
#include <stdlib.h>


void mergesort(int *v, int st, int dr)
{
    if(st>=dr)
    {
        return ;
    }
    int mij=(st+dr)/2;
    mergesort(v,st,mij);
    mergesort(v,mij+1,dr);
    int i=st, j=mij+1, k=0;
    int *aux=(int*)malloc( (dr-st+1) * sizeof(int));
    while(i<=mij && j<=dr)
    {
        if(v[i]<v[j])
        {
            aux[k++]=v[i++];
        }
        else
        {
            aux[k++]=v[j++];
        }
    }
    while(i <= mij)
    {
        aux[k++] = v[i++];
    }

    while(j <= dr)
    {
        aux[k++] = v[j++];
    }
    for(i = st, k = 0; i <= dr; i++, k++)
    {
        v[i] = aux[k];
    }
    free(aux);


}


int main()
{
    int n;
    scanf("%d",&n);

    int *v = (int*)malloc(n * sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    
    mergesort(v, 0, n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    free(v);
    
    return 0;
}
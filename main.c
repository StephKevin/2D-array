#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    printf("entrez nombre de lignes: \n");
    scanf("%d",&n);
    int *tab[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("entrez tab[%d][%d]: ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("tab[%d][%d] = %d\n", i, j, tab[i][j]);
        }
    }
    return 0;
}

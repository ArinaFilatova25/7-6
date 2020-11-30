#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* s (int *a, int *b, int N, int M);

int main()
{

    setlocale(LC_ALL,"Rus");

    int i,n,m;
    int*a;
    int*b;
    int*res;

    printf("¬ведите кол-во чисел в массиве n\n");

    scanf("%d", &n);
    a=(int*) malloc(n*sizeof(int));
    printf("¬ведите элементы массива n\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("¬ведите кол-во чисел в массиве m \n");

    scanf("%d", &m);
    b=(int*) malloc(m*sizeof(int));
    printf("¬ведите элементы массива m\n");

    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    res=s(a,b,n,m);
    for (i=0; i<n+m; i++)
        printf("%d ",res[i]);

    return 0;
}

int* s (int *a, int *b, int N, int M)
{
    int *c;
    c=(int *) malloc(N + M*sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < N && j < M)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < N)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < M)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    return c;
}

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int k = 0;
    int* a;

    scanf("%d", &n);


    a = (int*)calloc(n, sizeof(int)); // память

    for (int i = 0; i < n; i++) // ввод масива
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < n; i++)// вывод
        printf("%d ", a[i]);
    printf("\n");
    printf("Если хотите больше");
    scanf("%d", &k);

    a = (int*) realloc(a, sizeof(int)*k);  // todo

    for (int i = n; i < k; i++) // ввод масива
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < k; i++)// вывод
        printf("%d ", a[i]);

    free(a);

  return 0;
}

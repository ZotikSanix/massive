#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int k = 0;
    int* a;

    scanf("%d", &n);


    a = (int*)calloc(n, sizeof(int)); // ������

    for (int i = 0; i < n; i++) // ���� ������
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < n; i++)// �����
        printf("%d ", a[i]);
    printf("\n");
    printf("���� ������ ������");
    scanf("%d", &k);

    a = (int*) realloc(a, sizeof(int)*k);  // todo

    for (int i = n; i < k; i++) // ���� ������
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < k; i++)// �����
        printf("%d ", a[i]);

    free(a);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for(i = n-1; i>-1; i--)
        printf("%d ", *(arr + i));
    return 0;
}
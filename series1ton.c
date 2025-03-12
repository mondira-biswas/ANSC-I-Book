#include <stdio.h>
int main()
{
    int n,i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n;  i = i + 3)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nSum = %d\n", sum);
    return 0;
}
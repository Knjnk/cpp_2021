#include <stdio.h>
 
int main()
{
    int n, i, temp, sum = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        sum = sum + temp;
    }

    printf("%d", sum);
    return 0;
}
/*Q27:Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    for (i = 1; i <= n * 2; i += 2)
        sum += i;
    scanf("%d", &n);
    sum = n * n;
    printf("%d\n", sum);
    return 0;
}



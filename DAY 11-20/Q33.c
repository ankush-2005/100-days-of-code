/*Write a program to check if a number is an Armstrong number.
  */
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digits = 0, sum = 0, temp;
    scanf("%d", &n);
    original = n;
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}

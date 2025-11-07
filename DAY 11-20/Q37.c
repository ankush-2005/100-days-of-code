/*Q37:Write a program to find the LCM of two numbers.
  */
#include <stdio.h>

int main() {
    int a, b, x, y, hcf, lcm;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    hcf = a;
    lcm = (x * y) / hcf;
    printf("%d\n", lcm);
    return 0;
}

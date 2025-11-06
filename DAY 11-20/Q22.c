/*Q22:Write a program to find profit or loss percentage given cost price and selling price.
  */
#include <stdio.h>

int main() {
    float cost, selling, percent;
    scanf("%f %f", &cost, &selling);
    if (selling > cost) {
        percent = ((selling - cost) / cost) * 100;
        printf("Profit %.0f%%\n", percent);
    } else if (selling < cost) {
        percent = ((cost - selling) / cost) * 100;
        printf("Loss %.0f%%\n", percent);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}

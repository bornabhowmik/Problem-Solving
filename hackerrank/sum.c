#include <stdio.h>
int main() {

    double a, b;
    scanf("%lf %lf", &a, &b);

    double sum = a+b;

    printf("%.1lf", sum);

    return 0;
}
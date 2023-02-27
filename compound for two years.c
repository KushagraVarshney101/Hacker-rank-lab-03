#include <stdio.h>
#include <math.h>

int main() {
    float P, R;
    scanf("%f", &P);
    scanf("%f", &R);
    printf("%.2f", P * pow((1 + R / 100), 2) - P);
    return 0;
}


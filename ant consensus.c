#include <stdio.h>
#include <math.h>

int main() {
    int c,k,n;
    scanf("%d", &c);
    scanf("%d", &k);
    scanf("%d", &n);
    printf("%.0f", c * pow(k, n));
    return 0;
}
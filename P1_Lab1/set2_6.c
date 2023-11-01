#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mean111(double A[], int n) {
    int i; double sum;
    for (i = 0; i <= (n - 1); i++) {
        sum += A[i];
    }
    return sum / n;
}
int main2993232333(void) {
    double A[5] = { 1.2,2.3,120.0,32.2 };
    int n = 5;
    mean(A, n);
    printf("%lf", n);

    return 0;    // TODO not finished 
}
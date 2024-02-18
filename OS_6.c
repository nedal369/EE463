#include <stdio.h>

int main() {
    int A, B, C;
    printf("Enter three integers: ");
    scanf("%d %d %d", &A, &B, &C);
    
    int max = A, min = A;
    if (B > max) max = B;
    if (C > max) max = C;
    if (B < min) min = B;
    if (C < min) min = C;
    
    double average = (A + B + C) / 3.0;
    
    printf("Maximum: %d\nMinimum: %d\nAverage: %.2f\n", max, min, average);
    
    return 0;
}

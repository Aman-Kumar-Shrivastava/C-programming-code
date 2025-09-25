#include <stdio.h>
int main() {
    float floatNum;
    int intNum;
    // Convert float to int
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);
    intNum = (int)floatNum;  // type casting float to int
    printf("Floating-point number %.2f converted to integer: %d\n", floatNum, intNum);
    // Convert int to float
    printf("Enter an integer number: ");
    scanf("%d", &intNum);
    floatNum = (float)intNum;  // type casting int to float
    printf("Integer number %d converted to floating-point: %.2f\n", intNum, floatNum);
    return 0;
}
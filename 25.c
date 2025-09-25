#include <stdio.h>

int main() {
    int m, n, sum = 0;
    printf("Enter the starting number (m): ");
    scanf("%d", &m);
    printf("Enter the ending number (n): ");
    scanf("%d", &n);

    int i = m;
    while(i <= n) {
        sum += i;
        i++;
    }

    printf("The sum from %d to %d is %d\n", m, n, sum);
    return 0;
}
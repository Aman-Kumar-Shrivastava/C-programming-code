#include <stdio.h>

int main() {
    int i;

    // Demonstrate break
    printf("Demonstrating break statement:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break; // Exit loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrate continue
    printf("Demonstrating continue statement:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            continue; // Skip printing when i is 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrate goto
    printf("Demonstrating goto statement:\n");
    i = 1;
    loop_start:
        if(i > 5)
            goto end;
        printf("%d ", i);
        i++;
        goto loop_start;
    end:
    printf("\n");

    return 0;
}
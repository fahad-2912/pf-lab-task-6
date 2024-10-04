#include <stdio.h>
int main() {
    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
        if (number <= 0) {
            printf("not a positive number.\n");
        }
    } while (number <= 0);
    printf("You entered: %d\n", number);
   
    return 0;
}
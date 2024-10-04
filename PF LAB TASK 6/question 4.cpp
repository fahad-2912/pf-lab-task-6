#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers to add to the sum (enter 0 to stop):\n");
        while (1) {
        printf("Enter a num: ");
        scanf("%d", &num);

        if (num == 0) {
            break; 
        }

        sum += num; 
        printf("Current sum: %d\n", sum); 
    }
    printf("Final sum: %d\n", sum); 
    return 0;
}

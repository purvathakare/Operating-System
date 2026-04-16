#include <stdio.h>

int main() {
    int choice;

    printf("Enter choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Choice 1 selected");
            break;

        case 2:
            printf("Choice 2 selected");
            break;

        case 3:
            printf("Choice 3 selected");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

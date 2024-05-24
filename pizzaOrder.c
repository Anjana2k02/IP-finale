#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("Enter the number for pizza size:\n");
        printf("1 - Large pizza\n");
        printf("2 - Medium pizza\n");
        printf("3 - Small pizza\n");
        printf("-1 - Exit\n");
        scanf("%d", &choice);

        if (choice == -1) {
            printf("Exiting...\n");
            break;
        } else if (choice < 1 || choice > 3) {
            printf("Invalid choice. Terminating...\n");
            break;
        }

        // Code for processing the chosen pizza size goes here
        // ...

        printf("Pizza size %d selected.\n", choice);
    }

    return 0;
}
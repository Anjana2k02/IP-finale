#include <stdio.h>

int main() {
    int choice;
    int totalPrice = 0;
    int largePrice = 3500;
    int mediumPrice = 2800;
    int smallPrice = 2000;

    while (1) {
        printf("Enter the number for pizza size:\n");
        printf("1 - Large pizza (3500)\n");
        printf("2 - Medium pizza (2800)\n");
        printf("3 - Small pizza (2000)\n");
        printf("-1 - Exit\n");
        scanf("%d", &choice);

        if (choice == -1) {
            printf("Exiting...\n");
            break;
        } else if (choice < 1 || choice > 3) {
            printf("Invalid choice. Terminating...\n");
            break;
        }

        switch (choice) {
            case 1:
                totalPrice += largePrice;
                printf("Large pizza selected.\n");
                break;
            case 2:
                totalPrice += mediumPrice;
                printf("Medium pizza selected.\n");
                break;
            case 3:
                totalPrice += smallPrice;
                printf("Small pizza selected.\n");
                break;
        }

        printf("Current total price: %d\n", totalPrice);
    }

    printf("Final total price: %d\n", totalPrice);

    return 0;
}

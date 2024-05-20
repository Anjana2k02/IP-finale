#include <stdio.h>

int main() {
    // File pointer to hold reference to our file
    FILE *file;

    // Buffer to store the contents read from the file
    char buffer[256];

    // Open the file in read mode ("r")
    file = fopen("handleme.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print the contents of the file
    printf("Contents of handleme.txt:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}

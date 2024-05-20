#include <stdio.h>

int main() {
    // File pointer to hold reference to our file
    FILE *file;

    // Open the file in write mode ("w")
    file = fopen("handleme.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Paragraph to write to the file
    const char *paragraph = "This is a small paragraph written to handleme.txt.\n"
                            "The file handling in C is straightforward and powerful.\n"
                            "We can easily create, write, and read files using the standard library functions.";

    // Write the paragraph to the file
    fprintf(file, "%s", paragraph);

    // Close the file
    fclose(file);

    // Inform the user that the file has been written
    printf("Paragraph written to handleme.txt successfully.\n");

    return 0;
}

#include <stdio.h>

// Function to get the total (sum) of two variables
float get_total(float a, float b) {
    return a + b;
}

// Function to multiply two integer variables
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Example usage
    float sum_result = get_total(3.5, 5.2);
    int product_result = multiply(4, 6);

    printf("Sum: %.2f\n", sum_result);         // Output: Sum: 8.70
    printf("Product: %d\n", product_result);   // Output: Product: 24

    return 0;
}

#include <stdio.h>

void getMatrix(int matrix[3][3]) {
    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int determinant(int matrix[3][3]) {
    int det = 0;
    det += matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
    det -= matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    det += matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    return det;
}

void adjoint(int matrix[3][3], int adj[3][3]) {
    adj[0][0] =  (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
    adj[0][1] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]);
    adj[0][2] =  (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]);
    adj[1][0] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    adj[1][1] =  (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]);
    adj[1][2] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]);
    adj[2][0] =  (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    adj[2][1] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]);
    adj[2][2] =  (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
}

void inverse(int matrix[3][3], float inverse[3][3]) {
    int det = determinant(matrix);
    if (det == 0) {
        printf("Inverse doesn't exist (determinant is 0).\n");
        return;
    }

    int adj[3][3];
    adjoint(matrix, adj);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inverse[i][j] = adj[i][j] / (float)det;
        }
    }
}

void printMatrix(float matrix[3][3]) {
    printf("The inverse matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%0.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];
    float invMatrix[3][3];

    getMatrix(matrix);
    inverse(matrix, invMatrix);
    printMatrix(invMatrix);

    return 0;
}

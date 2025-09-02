// Lab assignment 2

// 1. write c function to calculate NCR value.

// calculate the NCR value
#include <stdio.h>
int fac(int n);
int main() {
    int n , r;
    printf("Enter the values of n and r ");
    scanf("%d %d", &n , &r);
    float ncr ;
    ncr = fac(n)/ (fac(r)*fac(n-r));
    printf("Then nCr is %f", ncr);
}
int fac(int n){
    if(n == 1 || n == 0)
        return 1;
    else
        return n*fac(n-1);
}


// 2. Write a c function to transpose of a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Output:

// 3. write a recursive function to generate Fibonacci series.
// 4. Write recursive function to find the lcm of two numbers.
// 5. Write a recursive function to find the Gcd of two numbers.
// 6. Write a recursive function to check the number is palindrome or not.

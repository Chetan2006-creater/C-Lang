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


// 3. write a recursive function to generate Fibonacci series.

#include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter the nth term of the sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to term %d: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

// 4. Write recursive function to find the lcm of two numbers.

#include <stdio.h>

int lcm(int a, int b);
int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm(num1, num2));

    return 0;
}

int lcm(int a, int b) {
    static int common = 1;
    if (common % a == 0 && common % b == 0) {
        return common;
    } else {
        common++;
        lcm(a, b);
    }
}


// 5. Write a recursive function to find the Gcd of two numbers.

#include <stdio.h>

int gcd(int a, int b);
int main() {
    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);

    printf("The GCD of %d and %d is %d.\n", num1, num2, result);

    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}


// 6. Write a recursive function to check the number is palindrome or not.

#include <stdio.h>

int reverse_number(int num, int reversed_num);
int main() {
    int num, original_num, reversed_value;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;
    reversed_value = reverse_number(num, 0);

    if (original_num == reversed_value) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}

int reverse_number(int num, int reversed_num) {
    if (num == 0) {
        return reversed_num;
    }
    else {
        int last_digit = num % 10;
        reversed_num = reversed_num * 10 + last_digit;
        return reverse_number(num / 10, reversed_num);
    }
}


#include <stdio.h>
#include <math.h>

/*
int main() {
    int a = 10, b = 20;

    // Addition
    printf("Addition of two numbers is %d\n", a + b);

    // Subtraction
    printf("Subtraction of two numbers is %d\n", a - b);

    // Multiplication
    printf("Multiplication of two numbers is %d\n", a * b);

    // Division
    printf("Division of the two numbers is %f\n", (float)a / b);

    // modulo operation
    printf("remainder when a divides b is %d", a%b);

    return 0;
}
*/
/*
int main(){
    int a = 10,b = 20;
    printf("a is greater then b %d \n",a>b);

    printf ("b is greater then a %d \n", b>a);

    printf ("b is greater or equal to then a %d \n", b>=a);

    printf ("a is greater or equal to then b %d \n", a>=b);

    return 0;
}
*/
/*
int main(){
    int a = 10, b = 10;
    printf(" the a and b are the same numbers %d \n" , a==b);

    printf (" Both nnumber are not equal %d ", a!=b);

    return 0;
}
*/
/*
int main(){
    int a, b, c;
    printf("Enter the three numbers: \n");
    scanf("%d %d %d", &a , &b ,&c);
    float s = (a + b +c)/2;
    float A = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of the triangle is %f", A);

}
*/
/*
int main() {
    float distance, time, speed;

    printf("Enter Speed ");
    scanf("%f", &speed);

    printf("Enter time (in seconds): ");
    scanf("%f", &time);

    // Calculate speed without checking time == 0
    distance = speed * time;

    printf("Distance travelled by the object is %f", distance);

    return 0;
}
*/
/*
int main() {
    int n = 100;
    int sum = n * (n + 1);
    printf("Sum of even numbers from 1 to 200: %d\n", sum);

    return 0;
}
*/
/*
int main() {
    double principal, rate, time, compoundInterest;
    int n;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter number of times interest compounded per year: ");
    scanf("%d", &n);

    rate = rate / 100;
    compoundInterest = principal * pow((1 + rate / n), n * time);

    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
*/
/*
int main() {
    float num;
    int integralPart, rightMostDigit;

    printf("Enter a float number: ");
    scanf("%f", &num);

    integralPart = (int)num;
    rightMostDigit = integralPart % 10;
    printf("Rightmost digit of integral part: %d\n", rightMostDigit);

    return 0;
}
*/
/*
int main() {
    float bp, hra, ta, salary;

    printf("Enter basic pay: ");
    scanf("%f", &bp);

    hra = (10/100) * bp;
    ta = (5/100) * bp;

    salary = bp + hra + ta;

    printf("Total salary = %.2f\n", salary);

    return 0;
}
*/
/*
int main() {
    printf(" BBB   Y  Y  EEEE\n");
    printf("B   B   YY   E\n");
    printf(" BBB    Y    EEEE\n");
    printf("B   B   Y    E\n");
    printf(" BBB    Y    EEEE");
    
    return 0;
}
*/
/*
int main() {
    int n, i;
    float total = 0;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    char names[n][50];
    int quantities[n];
    float prices[n], amounts[n];

    // Input for each item
    for(i = 0; i < n; i++) {
        printf("\nEnter name of item %d: ", i+1);
        scanf("%s", names[i]);
        printf("Enter quantity: ");
        scanf("%d", &quantities[i]);
        printf("Enter price per unit: ");
        scanf("%f", &prices[i]);
        amounts[i] = quantities[i] * prices[i];
        total += amounts[i];
    }

    // Printing the bill
    printf("\n************************************\n");
    printf("Name\tQuantity\tPrice\tAmount\n");
    printf("------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%s\t%d\t\t%.2f\t%.2f\n", names[i], quantities[i], prices[i], amounts[i]);
    }
    printf("------------------------------------\n");
    printf("Total amount to be paid: %.2f\n", total);
    printf("************************************\n");

    return 0;
}
*/




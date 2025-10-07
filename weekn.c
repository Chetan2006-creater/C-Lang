#include <stdio.h>
// write a c program to implement pointer addition and pointer subtraction
/*
void main(){
    int arr[5] = {10,20, 30,40,50};
    int *ptr = arr;
    printf("%d\n", *ptr);
    ptr= ptr+3;
    printf("%d\n", *ptr);
    ptr = ptr-2 ;
    printf("%d\n", *ptr);

}
*/
// write a c program to implement the differences between two pointer variables
/*
void main(){
    int arr[5] = {10,20, 30,40,50};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[3];
    int diff = ptr2 - ptr1;
    printf("%d\n", diff);

}
*/

// write a c program to perform increment and decrement of a pointer
/*
void main(){
    int arr[5] = {10,20, 30,40,50};
    int *ptr = arr;
    printf("intial pointer value :\n ");
    printf("Adress : %p, Value : %d \n", ptr, *ptr);
    ptr++;
    printf("After incrementing the pointer :\n ");
    printf("Adress : %p, Value : %d \n", ptr, *ptr);
    ptr--;
    printf("After decrementing the pointer :\n ");
    printf("Adress : %p, Value : %d \n", ptr, *ptr);

}
*/
 // write a c program to perform two numbers using the pointers
 // code of call by reference in ppt



 // write a c program to implement double pointer or pointer to pointer
 /*
 void main(){
 int var;
 int *ptr;
 int **pptr;
 var = 200;
 ptr = &var;
 pptr = &ptr;
 printf("value of var: %d ", var);
 printf("\nvalue of *ptr: %d",*ptr);
 printf("\nvalue of **pptr: %d",*ptr);
 printf("\nAddress of *ptr: %x",*ptr);
 printf("\nAddress of **pptr: %x",*ptr);

 }
*/

// write a c program to implement an array of pointer
/*
void main(){
int a = 10, b = 20, c = 30;
int *arr[3];
arr[0] = &a;
arr[1] = &b;
arr[2] = &c;
printf("Value of a = %d\n", *arr[0]);
printf("Value of b = %d\n", *arr[1]);
printf("Value of c = %d\n", *arr[2]);

}
*/

// write a c program to implement two dimentional array of pointers
/*
int main(){
int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int *arr2[3][3];
for(int i = 0; i<3;i++){
    for(int j = 0;j<3;j++){
        arr2[i][j] = &arr2[i][j];
    }
}
printf("The values are\n");
for(int i = 0; i<3;i++){
    for(int j = 0; j<3;j++){
        printf("%d ", *arr2[i][j]);
    }
    printf("\n");
}
return 0;
}


*/



#include <stdio.h>
/*
int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n], sum = 0;
    for (int i = 1; i <= n ; i ++){
        printf("Enter the %d element :", i);
        scanf("%d", &arr[i-1]);
        sum = sum + arr[i-1];
    }
    printf("Sum of the elements are %d", sum);

}
*/
// reversing the array is the important problem.
/*
int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n ; i ++){
        printf("Enter the %d element :", i);
        scanf("%d", &arr[i-1]);
    }
    int revArr[n], j = 0;
    for (int i = n; i > 0 ; i-- ){
        revArr[j] = arr[i-1];
        j = j+1 ;
    }
    printf("Reversed array is :");
    for (int k = 1; k <= n ; k++){
        printf("%d ", revArr[k-1]);
    }
}
*/
/*
int main(){
    int n,t;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n ; i ++){
        printf("Enter the %d element :", i);
        scanf("%d", &arr[i-1]);
    }
    printf("Enter the target Element ");
    scanf("%d", &t);
    for (int j = 1; j <= n; j++){
        if(arr[j-1] == t ){
            printf("Target is found at the %d th index", j);
            break;
        }
        if(j = n)
            printf("Target is not in the array");
    }
}
*/

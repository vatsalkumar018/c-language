#include<stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("enetr a number :");
    scanf("%d", &n);
    printf("factorial= %d",factorial(n));
    return 0;
}
int factorial(int n){
    if (n==1){
        return 1;
    }
    return n*factorial(n-1);
}
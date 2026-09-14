#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter any number n:");
    scanf("%d" , &n);
    for (int i=1 ; i<=n;i++){
        fact= fact * i;
    }printf("final factrial is %d \n",fact);
    return 0;
    
}

#include<stdio.h>
int main(){
    int n;
    printf("enter any number n:");
    scanf("%d \n" , &n);
    for (int i=n ; i>=1;i--){
        printf("%d \n",n*i);

    }
    return 0;
    
}

#include<stdio.h>

int sumofnumbersdigit(int number);

int main(){
    
    int number;
    
    printf("enter any numeber:");
    
    scanf("%d",&number);
    
    printf("our sum of digin is :%d", sumofnumbersdigit(number));

}

int sumofnumbersdigit(int number){
    if(number == 0){
        return 0;
    }
    int sum2= number % 10 + sumofnumbersdigit(number /10);
    return sum2;

}
#include <stdio.h>
int main (){
    int highest,lowest,num1,num2,num3,num4,num5;
    printf("give num1:");
    scanf("%d",&num1);

    printf("give num2:");
    scanf("%d",&num2);

    printf("give num3:");
    scanf("%d",&num3);

    printf("give num4:");
    scanf("%d",&num4);

    printf("give num5:");
    scanf("%d",&num5);

    printf("NUM1 : %d\n",num1);
    printf("NUM2 : %d\n",num2);
    printf("NUM3 : %d\n",num3);
    printf("NUM4 : %d\n",num4);          
    printf("NUM5 : %d\n",num5);
    highest=num1;
    lowest=num1;
    if (num2 > num1){
        highest=num2;
    } if (num3 >num2){
        highest=num3;
    } if (num4 >num3){
    highest=num4;
    } if (num5 >num4){
    highest=num5;
    }printf("HIGHEST NUM = %d\n",highest);
     if (num2 < num1){
     lowest=num2;
     } if (num3 <num2){
     lowest=num3;
     } if (num4 <num3){
    lowest=num4;
    } if (num5<num4){
    lowest=num5;
    }printf("LOWEST NUM = %d\n",lowest);
}
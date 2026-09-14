#include <stdio.h>
int main(){
    int day ;
    printf("enter number of day do you want to want as day:");
    scanf("%d",&day);
    switch (day){
        case 1 :printf("monday");
        case 2 :printf("tuesday");
        case 3 :printf("wednesday");
        case 4 :printf("thursday");
        case 5 :printf("friday");
        case 6 :printf("saturday");
        case 7 :printf("sunday");
        default : printf("no this is invaid");

    }
}
#include <stdio.h>
int main(){
    char studentname[50] ;
    int  age,m1,m2,m3,total;
    float percent;

    printf("give name:");
    scanf("%s",studentname);
    
    printf("give age:");
    scanf("%d",&age);
    
    printf("give m1:");
    scanf("%d",&m1);
    
    printf("give m2:");
    scanf("%d",&m2);
    
    printf("give m3:");
    scanf("%d",&m3);
    
    total = m1+m2+m3 ;
    percent = total/ 3.0;
    
    printf("Name: %s\n", studentname);
    printf("Total: %d\n", total);
    printf("Percentage: %f\n", percent);
    printf("AGE: %d\n",age);

    if (percent>=90){
        printf("pass,GRADE:A");
    } else if (percent>=75){
        printf("pass, GRADE:B");
    } else if (percent>=60){
        printf("pass,GRADE:C");
    } else if (percent>=40){
        printf("pass,GRADE:D");
    }
    else printf("fail");
    
    return 0;
     
}
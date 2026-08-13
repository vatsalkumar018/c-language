#include <stdio.h>

int main() {

    char name[50];
    int age;
    int m1,m2,m3;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your m1: ");
    scanf("%d",&m1);
    printf("Enter your m2: ");
    scanf("%d", &m2);  
    printf("Enter your m3: ");
    scanf("%d", &m3);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("M1: %d\n",m1);
    printf("M2: %d\n",m2);
    printf("M3: %d\n",m3);
    return 0;
}
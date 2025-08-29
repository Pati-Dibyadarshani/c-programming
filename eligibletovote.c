#include<stdio.h> 
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18)
    printf("eligible for vote");
    else
    printf("Not eligible for vote\n");
}
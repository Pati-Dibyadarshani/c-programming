#include<stdio.h>
int main(){
    char name[50];
    int age;
    float marks;
    printf("Enter name:");
    fgets(name,sizeof(name),stdin);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter marks:");
    scanf("%f",&marks);
    while(getchar()!='\n');
    printf("Name:%s\n,Age:%d\n,Marks:%2f\n",name,age,marks);
    return 0;
}
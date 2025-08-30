#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);
    if(marks>=0 && marks<=100){
        if(marks<=40){
            printf("Grade D\n");
        }
        else if(marks<=50){
            printf("Grade C");
        }
        else if(marks<=70){
            printf("Grade B");
        }
        else if(marks<=90){
            printf("Grade A");
        }
    }
    else
    {
        printf("Invalid marks");
    }
    return 0;
}
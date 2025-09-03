#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a>0){
        if(a%2==0){
            printf("a is positive and even\n");
        }
        else{
            printf("a is positive but not even\n");
        }
        }else{
            printf("a is not a positive and odd number\n");
        }
        return 0;
    }


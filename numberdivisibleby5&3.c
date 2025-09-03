#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a%5==0&&a%3==0){
        printf("a is divisible by 5 and 3\n");
    }
    else{
        printf("a is not divisible by 5 and 3\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0){
        printf("%d is positive number\n",a);
    }
    else if(a<0){
        printf("%d is negative number\n",a);
    }
    else{
        printf("The number is zero\n");
    }   
    return 0;
}

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three number\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2){
    if(num1>=num3){
        printf("%d is largest number.\n",num1);

    }else{
        printf("%d is largest number.\n",num3);
    }
}else{
    if(num2>=num3){
        printf("%d is largest number.\n",num2);
    }else{
        printf("%d is largest number.\n",num3);
    }
    }
    return 0;
}


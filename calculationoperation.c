#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter the operator(+,-,*,/)\n");
    scanf(" %c",&op);
    switch(op){
        case '+':
            printf("%d + %d = %d\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d - %d = %d\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d = %d\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d / %d = %d\n",num1,num2,num1/num2);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
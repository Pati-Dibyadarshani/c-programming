#include<stdio.h>
int main(){
    int number,i,flag=0;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    if(number==0||number==1){
        printf("number is not prime or composite.\n",number);

    }else{
        for(i=2;i<=number/2;i++){
            if(number%1==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Number is a prime number.\n",number);
        }else{
            printf("Number is a composite number.\n",number);
        }
    }
    return 0;
}
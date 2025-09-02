#include<stdio.h>
#include<math.h>
int main(){
    double number;
    double square_root;
    printf("Enter a number: ");
    scanf("%lf",&number);
    if(number<0){
        printf("Not a valid input\n");
    }else{
        square_root=sqrt(number);
        printf("Square root of %.2lf=%.2lf\n",number,square_root);
    }
    return 0;
}
        
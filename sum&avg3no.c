#include<stdio.h>
int main(){
    int a,b,c,sum;
    float avg;
    printf("Enter the value of 3 numbers\n:");
    scanf("%d %d %d", &a,&b,&c);
    sum=a+b+c;
    avg=a+b+c/3;
    printf("sum=%d,average=%2f\n",sum,avg);
    return 0;
}
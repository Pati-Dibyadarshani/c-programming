#include<stdio.h>
int main(){
    int number=10;
    printf("Original number:%d\n",number);
    number++;
    printf("After post-increament(number++): %d\n",number);
    ++number;
    printf("After pre-increament(++number):%d\n",number);
    --number;
    printf("After pre-decreament(--number):%d\n",number);
    number--;
    printf("After post-decreament(number--):%d\n",number);
    return 0;
}
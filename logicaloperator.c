#include<stdio.h>
int main(){
    int a=10,b=4,c=12;
    int result;
    result=(a>b) && (c>a);
    printf("result of (a>b)&&(c>a):%d/n",result);
    result=(a>b) && (c<a);
    printf("result of (a>b) && (c<a):%d/n",result);
    result=(a>b)||(c<a);
    printf("result of (a>b)||(c<a):%d/n",result);
    result=(a<b)||(c<a);
    printf("result of (a<b)||(c<a):%d/n",result);
    result=!(a==b);
    printf("result of !(a==b):%d/n",result);
    result=!(a!=b);
    printf("result of !(a!=b):%d/n", result);

    return 0;
}
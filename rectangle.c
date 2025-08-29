#include<stdio.h>
int main(){
    float length,width,area;
    printf("Enter the length and width\n:");
    scanf("%f%f",&length,&width);
    area=length*width;
    printf("Area of rectangle=%.2f\n",area);
    return 0;
}
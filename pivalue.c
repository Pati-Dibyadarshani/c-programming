#include<stdio.h>
 int main(){
    const float PI=3.14159;
    float radious=7.0;
    float area;
    area = PI * radious * radious;
    printf("Area of the circle with radious %.2f is: %.2f\n", radious,area);
    return 0;
    
 }
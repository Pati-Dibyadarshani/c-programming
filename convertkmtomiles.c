#include<stdio.h>
int main(){
    float km,miles;
    printf("Enter the distance in kilometers");
    scanf("%f",&km);
    miles=km*0.621371;
    printf("%.2f kilometers=%.2f miles\n",km,miles);
    return 0;
}
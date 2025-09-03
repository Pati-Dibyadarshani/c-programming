#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT of first number: %d\n", ~a);
    printf("Left shift first number by 1: %d\n", a << 1);
    printf("Right shift first number by 1: %d\n", a >> 1);
    return 0;
}
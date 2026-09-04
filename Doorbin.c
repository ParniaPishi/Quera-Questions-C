#include <stdio.h>

int main () {

    unsigned int x1 , y1;
    unsigned int x2 , y2;
    unsigned int x3 , y3;

    scanf("%d %d" , &x1 , &y1);
    scanf("%d %d" , &x2 , &y2);
    scanf ("%d %d", &x3 , &y3);

    unsigned int x4 = x1 ^ x2 ^ x3;
    unsigned int y4 = y1 ^ y2 ^ y3; //^ XOR sign

    printf("%d %d" , x4 ,y4);

    return 0;
}
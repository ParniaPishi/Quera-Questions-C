#include <stdio.h>

int main() {

    int a0 , d , n;
    scanf("%d %d %d", &a0 , &d, &n);

    int sum = (n * (2*a0 + (n - 1 ) * d) ) / 2 ;
    printf ("%d" , sum) ;

    return 0;
}
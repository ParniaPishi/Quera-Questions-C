#include <stdio.h>

int main () {

    int n , m ;
    scanf("%d %d" , &n , &m);

    //برای این سوال باید سقف تقسیم ام بر ان را بدست اوریم اصل لانه کبوتری

    //صورت سوال گفته عدد طبیعی

    int output = (m+n-1)/m ;
    printf("%d", output);

    return 0;
}
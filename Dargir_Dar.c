#include <stdio.h>

int main (){

   unsigned long widthD , heightD;
   unsigned long widthM , heightM;

    scanf("%ld %ld"  , &widthD , &heightD);
    scanf("%ld %ld" , &widthM ,&heightM);

    if (widthD >= widthM && heightD >= heightM)
    {
        printf("yes");
    }

    else {
        printf("no");
    }

    return 0;
    
}
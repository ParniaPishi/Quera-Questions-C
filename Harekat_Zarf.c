#include <stdio.h>

int main () {

   unsigned long a , b , c;
   long sum;
   scanf("%ld %ld %ld" , &a , &b , &c);

 sum = a + b + c ;

   if ( a == b && a == c)
   {
    printf("0");
   }
   else if (3 * a == sum || 3 * b == sum || 3 * c == sum )
   {
    printf("1");
   }
   
   else {
    printf("2");
   }

   return 0;

}
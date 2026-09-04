#include <stdio.h>

int main() {
   unsigned int X , N;
   int score;

   scanf("%d" , &X);
   scanf("%d" , &N);

   if (N == 0)
   {
    score = 20;
   }
   else if (N == 7)
   {
    score = X;
   }
   else if (N < 7)
   {
    score = X - N;
   }
   else
   {
    score = X -(N);
   }

   if (score < 0)
   {
    score = 0;
   }
   
   printf("%d" , score);

   return 0;
   
}
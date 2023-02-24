#include <stdio.h>

int main() {
   int num1, num2, num3, biggest;

   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   biggest = num1;

   if (num2 > biggest) {
      biggest = num2;
   }

   if (num3 > biggest) {
      biggest = num3;
   }

   printf("The biggest number is %d", biggest);

   return 0;
}


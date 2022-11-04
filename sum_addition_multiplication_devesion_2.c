#include<stdio.h>
int main()

 {
     int num1, num2,y ;

     char sign;

     printf("Enter a number :");

     scanf("%d", &num1);

     printf("Enter another number: ");

     scanf("%d", &num2);

     y= num1+num2;

     sign='+';

     printf("%d %c %d=%d\n",num1,sign,num1,y);

     y=num1-num2;

     sign='-';

      printf("%d %c %d=%d\n", num1,sign, num2,y);

        y=num1*num2;

              sign='*';
    printf("%d %c %d=%d\n",num1,sign,num2, y);



       y= num1/num2;

         sign ='/';

          printf("%d %c %d=%d\n",num1,sign, num2, y);

         return 0;


     }

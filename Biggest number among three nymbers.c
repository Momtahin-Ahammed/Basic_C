#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2&&num1>num3)
        printf("num1 has a big value : ");
    else if(num2>num1&&num2>num3)
       printf("num2 has a big value: ");
    else if (num3>num2&&num3>num1)
      printf("num3 has a big value");

else
    printf("Thank you the numbers are equal: ");
return 0;

}

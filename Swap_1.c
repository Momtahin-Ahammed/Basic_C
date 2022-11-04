#include<stdio.h>
int main()
{
    int num1=100, num2=50,num3=500,num4=700,temp,temp2;

    temp = num1;
    num1=num2;
    num2=temp;
    temp2=num3;
    num3=num4;
    num4=temp2;
    printf("num1=%d\n",num1);
     printf("num2=%d\n",num2);
     printf("num3=%d\n",num3);
     printf("num4=%d\n",num4);
    return 0;

}

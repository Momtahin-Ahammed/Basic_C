
#include<stdio.h>
int main()
{
    float a,b,c,area,s;

    printf("Enter three sides of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The Area of your triangle is:%.2f",area);

    return 0;
}

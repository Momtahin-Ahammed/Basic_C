#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter two opposite sides of your rectangle:");

    scanf("%f%f",&a,&b);
    area=a*b;
    printf("AREA= %.2f",area);
    return 0;
}

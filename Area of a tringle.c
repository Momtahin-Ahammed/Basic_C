#include<stdio.h>
int main()
{
    float base, height, area;

    print("Enter your base and height:\n");
    scanf("%f %f",&base,&height);
    area= 0.5*base*height;

    printf("Area of your triangle is: %f",area);
    return 0;


}

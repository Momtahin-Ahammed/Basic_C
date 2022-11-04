#include<stdio.h>
#include<math.h>
int main()
{
    float r,area;
    printf("Enter radius of your circle: ");

    scanf("%f",&r);
    area=M_PI*(r*r);
    printf("AREA= %.2f",area);
    return 0;
}

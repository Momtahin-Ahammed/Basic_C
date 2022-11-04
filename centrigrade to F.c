#include<stdio.h>
int main()
{
    float C,F;
    prinyf("Enter your centigrade: ");
    scanf("%f",&C);

    F= (C*1.8)+32;
    printf("Fran= %.2f",F);
    return 0;
}

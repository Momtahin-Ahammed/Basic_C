#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;

    printf("Welcome to Temperature conversion calcutaor\n");
    printf("1.Fahrenheit to celsius :\n");
    printf("2.Celsius to Fahrenheit:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
     case 1:
         {
           printf("Enter your Fahrenheit temperature:\n");
           scanf("%f",&temp);
           convertedTemp =(temp-32)/1.8;
           printf("Your temperature in Celsius is:%.2f",convertedTemp);
         break;
     }

     case 2:
        {
            printf("Enter your Celsius temperature:\n");
            scanf("%f",&temp);
            convertedTemp = (1.8*temp)+32;
            printf("Your temperature in Fahrenheit is:%.2f",convertedTemp);
            break;
        }
default:
        printf("You do not choose a correct option Thank you:\n");

    }


return 0;
}

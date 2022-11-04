#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a letter:");
    scanf("%d",&ch);

    switch(ch)
    {
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
        printf("The letter is a vowel\n:");
        break;

    default:
        printf("The letter is consonant\n:");

    }


    return 0;


}

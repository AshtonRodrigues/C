/*Program to determine whether a character is lowercase or not*/
/*ASCII values for a-z is given by 97-122*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
  char character,answer;
  printf("Press any key\n");
  scanf("%c",&character);
  if(islower(character)>0)
  printf("The typed character is lowercase\n");
  
  else if (isupper(character>0))
  {
  
    printf("The typed character is uppercase\n");
    printf("Would you like to convert to lowercase?(Y or N)\n");
    scanf("%c",&answer);
        if(answer==89)
        {
            character=tolower(character);
            printf("Here you go! %c. Thank you for using our service\n",character);            
        }
        else
        printf("Thanks for the input! Hope to see you again!\n");
    
  }
  else
  {
    printf("Invalid character\n");

  }
   return 0;
}
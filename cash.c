#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  float doll;
  do
  {
    doll = get_float("Change owed: ");
  }while(doll < 0);
   
  int cents = round(doll * 100);
  int coins = 0;
   
  int denomination[] = {25, 10, 5, 1}
  int size = sizeof(denomination) / sizeof(int);
    
  for(int i = 0; i< 4; i++)
  {
    coins += cents / denomination[i];
    cents %=  denomination[i];
  }

   printf("%i\n",coins);
}


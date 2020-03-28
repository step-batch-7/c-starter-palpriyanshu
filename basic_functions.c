#include <stdio.h>

int is_even(int);

int is_even(int number) {
  return number % 2 == 0;
};

int main(void)
{
  printf("Enter a number: ");
  int number;
  scanf("%d",&number);
  if(is_even(number))
  {
    printf("%d is a even number\n", number);
  }
  else
  {
    printf("%d is not a even number\n", number);
  }
  return 0;
};


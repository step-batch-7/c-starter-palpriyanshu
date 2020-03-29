#include <stdio.h>

long int find_factorial(int);

long int find_factorial(int nthTerm)
{
  long int factorial=1, term;

  if(nthTerm == 0)
  {
    return factorial;
  }

  for ( term = 1; term <= nthTerm; term++ )
  {
    factorial = factorial * term;
  };

  return factorial;
}

int main(void)
{
  int term;
  printf("\n\n 1. To calculate factorial of a number---");
  printf("\nEnter a number : ");
  scanf("%d", &term);
  printf("Factorial of given number '%d' is %ld\n", term, find_factorial(term));

  return 0;
}
#include <stdio.h>

unsigned long find_factorial(unsigned);
void print_fibonacci_series(unsigned);
void print_odd_num_series(unsigned);

unsigned long find_factorial(unsigned nthTerm)
{
  unsigned long factorial=1, term;

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

void print_fibonacci_series(unsigned nthTerm)
{
  unsigned firstPreviousValue = 0;
  unsigned secondPreviousValue = 1;
  unsigned currentValue = 0;

  if(nthTerm == 0)
  {
    printf("Invalid input");
  }

  for (int term = 1; term <= nthTerm; term++ ) 
  {
    currentValue = currentValue + firstPreviousValue;
    firstPreviousValue = secondPreviousValue;
    secondPreviousValue = currentValue;
    printf("%u\t", currentValue);
  };
}

void print_odd_num_series(unsigned nthTerm)
{
  if(nthTerm == 0)
  {
    printf("Invalid input");
  }
  for (int term = 1; term <= nthTerm; term += 2 ) 
  {
    printf("%u\t", term);
  };
}

int main(void)
{
  int term;
  printf("\n\n1. To calculate factorial of a number---");
  printf("\nEnter a number : ");
  scanf("%u", &term);
  printf("Factorial of given number '%u' is %lu\n", term, find_factorial(term));

  printf("\n2. To print fibonacci series upto a term---");
  printf("\nEnter a number : ");
  scanf("%u", &term);
  print_fibonacci_series(term);
  printf("\n");

  printf("\n3. To print odd numbers series upto a term---");
  printf("\nEnter a number : ");
  scanf("%u", &term);
  print_odd_num_series(term);
  printf("\n");

  return 0;
}
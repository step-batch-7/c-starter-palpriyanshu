#include <stdio.h>

unsigned long find_factorial(unsigned);
void print_fibonacci_series(unsigned);
void print_odd_num_series(unsigned);
void print_even_num_series(unsigned);
void print_multiplication_table(unsigned, unsigned);
double calculate_sum_of_N_numbers(float, unsigned);
double calculate_product_of_N_num(float, unsigned);
void print_odd_num_in_range(unsigned, unsigned);
void print_every_nth_num_in_range(unsigned, unsigned, unsigned);

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
  }

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
  }
};

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
};

void print_even_num_series(unsigned nthTerm)
{
  if(nthTerm == 0)
  {
    printf("Invalid input");
  }
  for (int term = 2; term <= nthTerm; term += 2 ) 
  {
    printf("%u\t", term);
  }
};

void print_multiplication_table(unsigned multiplicand, unsigned nth_multiplier)
{
  unsigned multiplier;
  if(multiplicand == 0)
  {
    printf("Invalid input");
  }
  for ( multiplier = 1; multiplier <= nth_multiplier; multiplier ++ ) 
  {
    printf("%u * %u = %u\n",multiplicand, multiplier, multiplicand * multiplier);
  }
};

double calculate_sum_of_N_numbers(float starting_value, unsigned length)
{
  double sum = 0;
  for (unsigned count = 0; count < length; count++ ) 
  {
    sum = sum + starting_value + count;
  }
  return sum;
};

double calculate_product_of_N_num(float starting_value, unsigned length)
{
  double product = 1;
  for (unsigned count = 0; count < length; count++ ) 
  {
    product = product * (starting_value + count);
  }
  return product;
};

void print_odd_num_in_range(unsigned starting_value, unsigned end_value)
{
  if((starting_value == 0 && end_value == 0) || starting_value > end_value)
  {
    printf("Invalid input");
  }
  unsigned odd_number = starting_value % 2 == 0 ? starting_value + 1 : starting_value;
  while(odd_number <= end_value) 
  {
    printf("%u\t", odd_number);
    odd_number += 2;
  }
};

void print_every_nth_num_in_range(unsigned starting_value, unsigned end_value, unsigned nthTerm)
{
  if((starting_value == 0 && end_value == 0) || starting_value > end_value)
  {
    printf("Invalid input");
  }
  for ( unsigned num = starting_value; num <= end_value; num += nthTerm ) {
    printf("%u\t", num);
  }
};

int main(void)
{
  int term, number1, number2;
  float num;
  printf("\n\n1. To calculate factorial of a number---");
  printf("\nEnter a number : ");
  scanf("%u", &term);
  printf("Factorial of given number '%u' is %lu\n", term, find_factorial(term));

  printf("\n2. To print fibonacci series upto nth term---");
  printf("\nEnter nth term value : ");
  scanf("%u", &term);
  print_fibonacci_series(term);
  printf("\n");

  printf("\n3. To print odd numbers series upto nth term---");
  printf("\nEnter nth term value : ");
  scanf("%u", &term);
  print_odd_num_series(term);
  printf("\n");

  printf("\n4. To print even numbers series upto nth term---");
  printf("\nEnter nth term value : ");
  scanf("%u", &term);
  print_even_num_series(term);
  printf("\n");

  printf("\n5. To print multiplication table of a number upto nth multiplier---");
  printf("\nEnter multiplicand value : ");
  scanf("%u", &number1);
  printf("Enter nth multiplier : ");
  scanf("%u", &term);
  print_multiplication_table(number1, term);
  printf("\n");

  printf("\n6. To calculate sum starting from a number upto nth term---");
  printf("\nEnter a starting value : ");
  scanf("%f", &num);
  printf("Enter nth term : ");
  scanf("%u", &term);
  printf("Sum of '%u' term starting from '%f' is '%lf\n", term, num, calculate_sum_of_N_numbers(num, term));

  printf("\n6. To calculate product starting from a number upto nth term---");
  printf("\nEnter a starting value : ");
  scanf("%f", &num);
  printf("Enter nth term : ");
  scanf("%u", &term);
  printf("Product of '%u' term starting from '%f' is '%lf\n", term, num, calculate_product_of_N_num(num, term));

  printf("\n7. To print odd numbers series of given range---");
  printf("\nEnter starting value : ");
  scanf("%d", &number1);
  printf("Enter end value : ");
  scanf("%d", &number2);
  print_odd_num_in_range(number1, number2);
  printf("\n");

  printf("\n8. To print every nth number of given range---");
  printf("\nEnter starting value : ");
  scanf("%d", &number1);
  printf("Enter end value : ");
  scanf("%d", &number2);
  printf("Enter nth term : ");
  scanf("%d", &term);
  print_every_nth_num_in_range(number1, number2, term);
  printf("\n");
  return 0;
}
#include <stdio.h>

long int find_factorial(int);
void print_fibonacci_series(int);
void print_odd_num_series(int);
void print_even_num_series(int);
void print_multiplication_table(int, int);
double calculate_sum_of_N_numbers(float, int);
double calculate_product_of_N_num(float, int);
void print_odd_num_in_range(int, int);
void print_every_nth_num_in_range(int, int, int);
long int get_sum_of_even_num_in_range(int, int);
void print_odd_num_reverse_series(int);

long int find_factorial(int nthTerm)
{
  if(nthTerm < 0)
  {
    return 0;
  }
  long int factorial=1, term;
  for ( term = 1; term <= nthTerm; term++ )
  {
    factorial = factorial * term;
  }
  return factorial;
}

void print_fibonacci_series(int nthTerm)
{
  int firstPreviousValue = 0;
  int secondPreviousValue = 1;
  int currentValue = 0;

  if(nthTerm < 1)
  {
    printf("Invalid input");
  }
  else{
    for (int term = 1; term <= nthTerm; term++ ) 
    {
      currentValue = currentValue + firstPreviousValue;
      firstPreviousValue = secondPreviousValue;
      secondPreviousValue = currentValue;
      printf("%d\t", currentValue);
    }
  }
};

void print_odd_num_series(int nthTerm)
{
  if(nthTerm < 1)
  {
    printf("Invalid input");
  }
  else
  {
    for (int term = 1; term <= nthTerm; term += 2 ) 
    {
      printf("%d\t", term);
    }
  }
};

void print_even_num_series(int nthTerm)
{
  if(nthTerm < 1)
  {
    printf("Invalid input");
  }
  else
  {
    for (int term = 2; term <= nthTerm; term += 2 ) 
    {
      printf("%d\t", term);
    }
  }
};

void print_multiplication_table(int multiplicand, int nth_multiplier)
{
  int multiplier;
  for ( multiplier = 1; multiplier <= nth_multiplier; multiplier ++ ) 
  {
    printf("%d * %d = %d\n",multiplicand, multiplier, multiplicand * multiplier);
  }
};

double calculate_sum_of_N_numbers(float starting_value, int length)
{
  double sum = 0;
  for (int count = 0; count < length; count++ ) 
  {
    sum = sum + starting_value + count;
  }
  return sum;
};

double calculate_product_of_N_num(float starting_value, int length)
{
  double product = 1;
  for (int count = 0; count < length; count++ ) 
  {
    product = product * (starting_value + count);
  }
  return product;
};

void print_odd_num_in_range(int starting_value, int end_value)
{
  if((starting_value == 0 && end_value == 0) || starting_value > end_value)
  {
    printf("Invalid input");
  }
  else{
    int odd_number = starting_value % 2 == 0 ? starting_value + 1 : starting_value;
    while(odd_number <= end_value) 
    {
      printf("%d\t", odd_number);
      odd_number += 2;
    }
  }
};

void print_every_nth_num_in_range(int starting_value, int end_value, int nthTerm)
{
  if((starting_value == 0 && end_value == 0) || starting_value > end_value)
  {
    printf("Invalid input");
  }
  else{
    for (int num = starting_value; num <= end_value; num += nthTerm ) {
      printf("%d\t", num);
    }
  }
};

long int get_sum_of_even_num_in_range(int starting_value, int end_value)
{
  long int sum = 0;
  int even_num = starting_value % 2 == 0 ? starting_value : starting_value + 1;
  while (even_num <= end_value) 
  {
    sum += even_num;
    even_num += 2;
  } 
  return sum;
};

void print_odd_num_reverse_series(int starting_value)
{
  if(starting_value < 1)
  {
    printf("Invalid input");
  }
  else
  {
    int odd_number = starting_value % 2 == 0 ? starting_value - 1 : starting_value;
    while(odd_number >= 1) 
    {
      printf("%d\t", odd_number);
      odd_number -= 2;
    }
  }
};

int main(void)
{
  int term, number1, number2;
  float starting_value;
  printf("\n\n1. To calculate factorial of a number---");
  printf("\nEnter a number : ");
  scanf("%d", &term);
  if(find_factorial(term))
  {
    printf("Factorial of %d is %ld\n",term, find_factorial(term));
  }
  else
  {
    printf("Invalid Input\n");
  }

  printf("\n2. To print fibonacci series upto nth term---");
  printf("\nEnter nth term value : ");
  scanf("%d", &term);
  print_fibonacci_series(term);
  printf("\n");

  printf("\n3. To print odd numbers series upto nth term---");
  printf("\nEnter nth term value : ");
  scanf("%d", &term);
  print_odd_num_series(term);
  printf("\n");

  printf("\n4. To print even numbers series upto nth term---");
  printf("\nEnter nth term value : ");
  scanf("%d", &term);
  print_even_num_series(term);
  printf("\n");

  printf("\n5. To print multiplication table of a number upto nth multiplier---");
  printf("\nEnter multiplicand value : ");
  scanf("%d", &number1);
  printf("Enter nth multiplier : ");
  scanf("%d", &term);
  print_multiplication_table(number1, term);
  printf("\n");

  printf("\n6. To calculate sum starting from a number upto nth term---");
  printf("\nEnter a starting value : ");
  scanf("%f", &starting_value);
  printf("Enter nth term : ");
  scanf("%d", &term);
  printf("Sum of '%d' term starting from '%f' is '%lf\n", term, starting_value, calculate_sum_of_N_numbers(starting_value, term));

  printf("\n7. To calculate product starting from a number upto nth term---");
  printf("\nEnter a starting value : ");
  scanf("%f", &starting_value);
  printf("Enter nth term : ");
  scanf("%d", &term);
  printf("Product of '%d' term starting from '%f' is '%lf\n", term, starting_value, calculate_product_of_N_num(starting_value, term));

  printf("\n8. To print odd numbers series of given range---");
  printf("\nEnter starting value : ");
  scanf("%d", &number1);
  printf("Enter end value : ");
  scanf("%d", &number2);
  print_odd_num_in_range(number1, number2);
  printf("\n");

  printf("\n9. To print every nth number of given range---");
  printf("\nEnter starting value : ");
  scanf("%d", &number1);
  printf("Enter end value : ");
  scanf("%d", &number2);
  printf("Enter nth term : ");
  scanf("%d", &term);
  print_every_nth_num_in_range(number1, number2, term);
  printf("\n");

  printf("\n10. To calculate sum of all even number in given range---");
  printf("\nEnter starting value : ");
  scanf("%d", &number1);
  printf("Enter end value : ");
  scanf("%d", &number2);
  printf("Sum of all even numbers is %ld\n", get_sum_of_even_num_in_range(number1, number2)); 

  printf("\n11. To print all odd numbers between a given number and 1---");
  printf("\nEnter a positive starting value : ");
  scanf("%d", &number1);
  print_odd_num_reverse_series(number1);
  printf("\n");
  return 0;
}
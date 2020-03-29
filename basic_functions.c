#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int find_square(int);
long int find_cube(int);
int find_gcd(int, int);

unsigned char is_even(int number) 
{
  return number % 2 == 0;
};

unsigned char is_odd(int number) 
{
  return !is_even(number);
};

long int find_square(int number) 
{
  return (number * number);
};

long int find_cube(int number) 
{
  return (number * find_square(number));
};

int find_gcd(int num1, int num2)
{
  if(num1 == 0 || num2 == 0)
  {
    return 0;
  }
  int smaller_num = (num1 < num2) ? num1 : num2;
  if(num1 % num2 && num2 % num1)
  {
    return 1;
  }
  return smaller_num;
}

int main(void)
{
  printf("Enter a number: ");

  int number;
  scanf("%d",&number);

  printf("%d is a %s number\n", number, is_even(number) ? "even" : "not even");
  printf("%d is a %s number\n", number, is_odd(number) ? "odd" : "not odd");
  printf("square of given number '%d' is %ld\n", number, find_square(number));
  printf("cube of given number '%d' is %ld\n", number, find_cube(number));

  printf("\nEnter two numbers: \n");
  int number1, number2;
  scanf("%d %d",&number1, &number2);

  int gcd = find_gcd(number1, number2);
  if(gcd)
  {
    printf("GCD of given numbers '%d' and '%d' is %d\n", number1, number2, gcd);
  }
  else
  {
    printf("invalid input\n");
  }
  return 0;
};


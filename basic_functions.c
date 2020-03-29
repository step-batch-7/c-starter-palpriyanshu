#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int find_square(int);
long int find_cube(int);
int find_gcd(int, int);
long int find_lcm(int, int);
double find_SI(float, float, float);
double find_CI(float, float, float);

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
  int remainder = num1 % num2;
  while(remainder)
  {
    num1 = num2;
    num2 = remainder;
    remainder = num1 % num2;
  }
  return num2;
};

long int find_lcm(int num1, int num2)
{
  return (num1 * num2)/find_gcd(num1, num2);
}

double find_SI(float principal, float rate, float time){
  return (principal* rate * time)/100;
}

double find_CI(float principal, float rate, float time){
  double amount = principal * pow(1+(rate/100), time);
  return amount - principal;
}

int main(void)
{
  int number, num1, num2;

  printf("Enter a number: ");
  scanf("%d",&number);

  printf("%d is a %s number\n", number, is_even(number) ? "even" : "not even");
  printf("%d is a %s number\n", number, is_odd(number) ? "odd" : "not odd");
  printf("square of given number '%d' is %ld\n", number, find_square(number));
  printf("cube of given number '%d' is %ld\n", number, find_cube(number));

  printf("\nEnter two numbers: \n");
  scanf("%d %d",&num1, &num2);

  int gcd = find_gcd(num1, num2);
  if(gcd)
  {
    printf("GCD of given numbers '%d' and '%d' is %d\n", num1, num2, gcd);
  }
  else
  {
    printf("invalid input\n");
  }
  printf("LCM of given numbers '%d' and '%d' is %ld\n", num1, num2, find_lcm(num1, num2));

  float principal, rate, time;
  printf("\nTo calculate simple interest and compound interest---\nenter principal amount : ");
  scanf("%f",&principal);
  printf("enter rate value : ");
  scanf("%f",&rate);
  printf("enter time period : ");
  scanf("%f",&time);
  printf("SI is %lf rupees\n", find_SI(principal, rate, time));
  printf("CI is %lf rupees\n", find_CI(principal, rate, time));

  return 0;
};


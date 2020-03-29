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

float convert_temp_feh_to_celsius(float);
float convert_temp_celsius_to_fah(float);

int find_greatest_of_three(int, int, int);

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
};

double find_SI(float principal, float rate, float time){
  return (principal* rate * time)/100;
};

double find_CI(float principal, float rate, float time){
  double amount = principal * pow(1+(rate/100), time);
  return amount - principal;
};

float convert_temp_feh_to_celsius(float temp)
{
  return ((temp - 32) * 5) / 9;
};

float convert_temp_celsius_to_fah(float temp)
{
 return temp / 5 * 9 + 32;
};

int find_greatest_of_three(int num1, int num2, int num3)
{
  int larger_num = (num1 > num2) ? num1 : num2;
  return (larger_num > num3) ? larger_num : num3;
}

int main(void)
{
  int num1, num2, num3;

  printf("Enter a number: ");
  scanf("%d",&num1);

  printf("%d is a %s number\n", num1, is_even(num1) ? "even" : "not even");
  printf("%d is a %s number\n", num1, is_odd(num1) ? "odd" : "not odd");
  printf("Square of given number '%d' is %ld\n", num1, find_square(num1));
  printf("Cube of given number '%d' is %ld\n", num1, find_cube(num1));

  printf("\nTo find GCD and LCM---");
  printf("\nEnter two numbers: \n");
  scanf("%d %d",&num2, &num3);

  int gcd = find_gcd(num2, num3);
  if(gcd)
  {
    printf("GCD of given numbers '%d' and '%d' is %d\n", num2, num3, gcd);
  }
  else
  {
    printf("Invalid input\n");
  }
  printf("LCM of given numbers '%d' and '%d' is %ld\n", num2, num3, find_lcm(num2, num3));

  float principal, rate, time;
  printf("\nTo calculate simple interest and compound interest---");
  printf("\nEnter principal amount : ");
  scanf("%f",&principal);
  printf("Enter rate value : ");
  scanf("%f",&rate);
  printf("Enter time period : ");
  scanf("%f",&time);
  printf("SI is %lf rupees\n", find_SI(principal, rate, time));
  printf("CI is %lf rupees\n", find_CI(principal, rate, time));

  float temperature1, temperature2;
  printf("\nTo convert temperature from fahrenheit to centigrade---");
  printf("\nEnter temperature in °F: ");
  scanf("%f",&temperature1);
  printf("Temperature in celsius %f °C\n", convert_temp_feh_to_celsius(temperature1));

  printf("To convert temperature from centigrade to fahrenheit---");
  printf("\nEnter temperature in °C: ");
  scanf("%f",&temperature2);
  printf("Temperature in fahrenheit %f °F\n", convert_temp_celsius_to_fah(temperature2));

  printf("\nTo find greatest of three numbers---");
  printf("\nEnter three numbers : \n");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("Greatest of three numbers is %d \n", find_greatest_of_three(num1, num2, num3));
  
  return 0;
};


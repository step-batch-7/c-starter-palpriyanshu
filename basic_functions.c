#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);

double find_square(float);
double find_cube(float);

unsigned find_gcd(unsigned, unsigned);
unsigned long find_lcm(unsigned, unsigned);

double find_SI(float, float, float);
double find_CI(float, float, float);

float convert_temp_feh_to_celsius(float);
float convert_temp_celsius_to_fah(float);

float find_greatest_of_three(float, float, float);
float find_average_of_three(float, float, float);

unsigned char is_even(int number) 
{
  return number % 2 == 0;
};

unsigned char is_odd(int number) 
{
  return !is_even(number);
};

double find_square(float number) 
{
  return (number * number);
};

double find_cube(float number) 
{
  return (number * find_square(number));
};

unsigned find_gcd(unsigned num1, unsigned num2)
{
  if(num1 == 0 || num2 == 0)
  {
    return 0;
  }
  unsigned remainder = num1 % num2;
  while(remainder)
  {
    num1 = num2;
    num2 = remainder;
    remainder = num1 % num2;
  }
  return num2;
};

long unsigned find_lcm(unsigned num1, unsigned num2)
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

float find_greatest_of_three(float num1, float num2, float num3)
{
  float larger_num = (num1 > num2) ? num1 : num2;
  return (larger_num > num3) ? larger_num : num3;
};

float find_average_of_three(float num1, float num2, float num3)
{
  return (num1 + num2 + num3) / 3;
};

int main(void)
{
  int num;

  printf("\n1. To check whether a number is even or not---");  
  printf("\nEnter a number: ");
  scanf("%d",&num);
  printf("%d is a %s number\n", num, is_even(num) ? "even" : "not even");

  printf("\n2. To check whether a number is odd or not---");  
  printf("\nEnter a number: ");
  scanf("%d",&num);
  printf("%d is a %s number\n", num, is_odd(num) ? "odd" : "not odd");
  
  float number;
  printf("\n3. To find square of a number---");
  printf("\nEnter a number: ");
  scanf("%f",&number);
  printf("Square of given number '%f' is %lf\n", number, find_square(number));

  printf("\n4. To find cube of a number---");
  printf("\nEnter a number: ");
  scanf("%f",&number);
  printf("Cube of given number '%f' is %lf\n", number, find_cube(number));

  unsigned number1, number2;
  printf("\n5. To find GCD of two numbers---");
  printf("\nEnter two numbers: \n");
  scanf("%u %u",&number1, &number2);

  unsigned gcd = find_gcd(number1, number2);
  if(gcd)
  {
    printf("GCD of given numbers '%u' and '%u' is %u\n", number1, number2, gcd);
  }
  else
  {
    printf("Invalid input\n");
  }

  printf("\n6. To find LCM of two numbers---");
  printf("\nEnter two numbers: \n");
  scanf("%u %u",&number1, &number2);
  printf("LCM of given numbers '%u' and '%u' is %lu\n", number1, number2, find_lcm(number1, number2));

  float principal, rate, time;
  printf("\n7. To calculate simple interest---");
  printf("\nEnter principal amount : ");
  scanf("%f",&principal);
  printf("Enter rate value : ");
  scanf("%f",&rate);
  printf("Enter time period : ");
  scanf("%f",&time);
  printf("SI is %lf rupees\n", find_SI(principal, rate, time));

  printf("\n8. To calculate compound interest---");
  printf("\nEnter principal amount : ");
  scanf("%f",&principal);
  printf("Enter rate value : ");
  scanf("%f",&rate);
  printf("Enter time period : ");
  scanf("%f",&time);
  printf("CI is %lf rupees\n", find_CI(principal, rate, time));

  float temperature;
  printf("\n9. To convert temperature from fahrenheit to centigrade---");
  printf("\nEnter temperature in °F: ");
  scanf("%f",&temperature);
  printf("Temperature in celsius %f °C\n", convert_temp_feh_to_celsius(temperature));

  printf("\n10. To convert temperature from centigrade to fahrenheit---");
  printf("\nEnter temperature in °C: ");
  scanf("%f",&temperature);
  printf("Temperature in fahrenheit %f °F\n", convert_temp_celsius_to_fah(temperature));

  float num1, num2, num3;
  printf("\n11. To find greatest of three numbers---");
  printf("\nEnter three numbers : \n");
  scanf("%f %f %f", &num1, &num2, &num3);
  printf("Greatest of three numbers is %f \n", find_greatest_of_three(num1, num2, num3));

  printf("\n12. To find average of three numbers---");
  printf("\nEnter three numbers : \n");
  scanf("%f %f %f", &num1, &num2, &num3);
  printf("Avarage of three numbers is %f \n", find_average_of_three(num1, num2, num3));
  
  return 0;
};


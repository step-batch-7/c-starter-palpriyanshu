#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int find_square(int);
long int find_cube(int);

unsigned char is_even(int number) {
  return number % 2 == 0;
};

unsigned char is_odd(int number) {
  return !is_even(number);
};

long int find_square(int number) {
  return (number * number);
};

long int find_cube(int number) {
  return (number * find_square(number));
};

int main(void)
{
  printf("Enter a number: ");

  int number;
  scanf("%d",&number);

  printf("%d is a %s number\n", number, is_even(number) ? "even" : "not even");
  printf("%d is a %s number\n", number, is_odd(number) ? "odd" : "not odd");
  printf("square of given number '%d' is %ld\n", number, find_square(number));
  printf("cube of given number '%d' is %ld\n", number, find_cube(number));

  return 0;
};


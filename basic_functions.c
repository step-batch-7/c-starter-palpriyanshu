#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long int find_square(int);

unsigned char is_even(int number) {
  return number % 2 == 0;
};

unsigned char is_odd(int number) {
  return !is_even(number);
};

long int find_square(int number) {
  return (number * number);
};

int main(void)
{
  printf("Enter a number: ");

  int number;
  scanf("%d",&number);

  printf("%d is %s number\n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s number\n", number, is_odd(number) ? "odd" : "not odd");
  printf("square of given number '%d' is %ld\n", number, find_square(number));

  return 0;
};


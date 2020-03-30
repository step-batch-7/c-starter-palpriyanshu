#include <stdio.h>

void print_denomination(int, int);
long int deduct_amount(long int, int, int);
void breakdown_currency(long int);

void print_denomination(int denomination, int no_of_notes)
{
  if(no_of_notes)
  {
  printf("%d ✕ Rs %d\n", no_of_notes, denomination);
  }
};

long int deduct_amount(long int amount, int denomination, int no_of_notes)
{
   return amount - denomination * no_of_notes;
};

void breakdown_currency(long int money)
{
  long int amount = money;
  int notes_of_2000 = amount / 2000;
  print_denomination(2000, notes_of_2000);
  amount = deduct_amount(amount, 2000, notes_of_2000);

  int notes_of_500 = amount / 500;
  print_denomination(500, notes_of_500);
  amount = deduct_amount(amount, 500, notes_of_500);

  int notes_of_200 = amount / 200;
  print_denomination(200, notes_of_200);
  amount = deduct_amount(amount, 200, notes_of_200);

  int notes_of_50 = amount / 50;
  print_denomination(50, notes_of_50);
  amount = deduct_amount(amount, 50, notes_of_50);

  int notes_of_10 = amount / 10;
  print_denomination(10, notes_of_10);
  amount = deduct_amount(amount, 10, notes_of_10);

  int notes_of_5 = amount / 5;
  print_denomination(5, notes_of_5);
  amount = deduct_amount(amount, 5, notes_of_5);

  int notes_of_1 = amount % 5;
  print_denomination(1, notes_of_1);
};

int main(void)
{
  long int amount;
  printf("\nCurrency Breakdown(ATM)");
  printf("\nEnter amount in rupees : ");
  scanf("%ld",&amount);
  breakdown_currency(amount);

  return 0;
}


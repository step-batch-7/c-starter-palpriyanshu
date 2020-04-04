#include <stdio.h>

void generate_fibonacci_series(int * , int);

void generate_fibonacci_series(int *list, int nthTerm)
{
  int firstPreviousValue = 0;
  int secondPreviousValue = 1;
  int currentValue = 0;

  if(nthTerm > 1){
    for (int term = 1; term <= nthTerm; term++ ) 
    {
      currentValue = currentValue + firstPreviousValue;
      firstPreviousValue = secondPreviousValue;
      secondPreviousValue = currentValue;
      list[term] = currentValue;
    }
  }
};

int main(void)
{
  int nthTerm;
  printf("\nTo generate fibonacci series---");
  printf("\nEnter positive nth term : ");
  scanf("%d", &nthTerm);
  int list[nthTerm];
  generate_fibonacci_series(list, nthTerm);
  for (int term = 1; term <= nthTerm; term++ ) 
    {
      printf("%d\t",list[term]);
    }
    printf("\n");
  return 0;
}
#include <stdio.h>

int input()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  return num;
}

int gcd(int a, int b)
{
  int i,small,gcd;
  if ( a > b)
  {
    small = a;
    a=b;
    b=small;
  }
  if( b%a==0)
    return a;

  for(i=0;i<a/2;i++)
  {
    if ( a%i == 0 && b%i == 0)
      gcd = i;
  }
  return gcd;
    
}

void output(int a, int b, int gcd)
{
  printf("The gcd of %d and %d is %d\n", a, b, gcd);
}

int main()
{
  int num1 = input();
  int num2 = input();
  int res = gcd(num1, num2);
  output(num1, num2, res);
  return 0;
}
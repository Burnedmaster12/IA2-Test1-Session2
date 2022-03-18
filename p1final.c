#include<stdio.h>

int input_side()
{
int a;
  printf("enter the  sides of the triange");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
int r;
  if(a!=b && b!=c && c!=a)
    {
      r=1;
      }
  else
  {
    r=0;
}
return r;
}
void output(int a, int b, int c, int isscalene)
{
  int r;
  if(r==1)
  {
    printf("is scalene");
  }
  if(r==0)
  {
    printf("not scalene");
  }
}
void main()
{
  int a,b,c,r;
  a=input_side();
  b=input_side();
  c=input_side();
  r=check_scalene(a,b,c);
  output(a,b,c,r);
}
#include<stdio.h>
void input(float*base , float*height)
{
  printf("enter the base of the triangle\n");
  scanf("%f",base);
  printf("enter the height of the triangle\n");
  scanf("%f",height);
}
void find_area(float base,float height,float*area)
{
  *area=0.5*(base*height);
}
void output(float base, float height, float area)
{
  printf("The area of triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
float b,h,areaa;
input(&b,&h);
find_area(b,h,&areaa);
output(b,h,areaa);
}

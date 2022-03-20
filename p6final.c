#include <stdio.h>
typedef struct _triangle
{
  float base, height, area;
} Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and height of a triangle:\n");
  scanf("%f%f", &t.base, &t.height);
  return t;
}
void area(Triangle *t)
{
  t->area = 0.5 * t->base * t->height;
}
void output(Triangle t)
{
  printf("The area of triangle with base=%f and height=%f is %f\n", t.base, t.height, t.area);
}
int main()
{
  Triangle t = input_triangle();
  area(&t);
  output(t);
  return 0;
}

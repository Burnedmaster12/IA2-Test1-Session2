#include <stdio.h>

struct _triangle
{
  float base, height, area;
};
typedef struct _triangle Triangle;

int input()
{
  int n;
  printf("enter the number of triangles:\n");
  scanf("%d", &n);
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base, height of a triangle:\n");
  scanf("%f%f", &t.base, &t.height);
  return t;
}

void input_n_triangles(int n, Triangle t[n])
{
  for (int i=0;i<n;i++)
  {
    t[i] = input_triangle();
  }
}

void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->height;
}

void find_areas(int n,Triangle t[n])
{
  for (int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small = t[0];

  for (int i = 1; i < n; i++)
  {
    if (small.area > t[i].area)
    {
      small= t[i];
    }
  }
  return small;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%f, %f and\n", t[i].base, t[i].height);
  }
  printf("%f, %f\nis\ntriangle with base = %f and height = %f having area = %f\n", t[n-1].base, t[n-1].height, smallest.base, smallest.height, smallest.area);
}
int main()
{
  int count = input();
  Triangle tris[count];
  input_n_triangles(count, tris);
  find_areas(count, tris);
  Triangle small = find_smallest_triangle(count, tris);
  output(count, tris, small);
  return 0;
}
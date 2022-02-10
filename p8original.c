#include <stdio.h>

struct _triangle
{
  float base,altitude,area;
};

typedef struct _triangle tri;

int input_n()
{
  int n;
  printf("Enter number of triangles: ");
  scanf("%d",&n);
  return 0;
}

tri input_triangle()
{
  tri t;
  printf("Enter base length: ");
  scanf("%f",&t.base);
  printf("Enter altitude length: ");
  scanf("%f",&t.altitude);
  return t;
}

void input_n_triangles(int n, tri t[n])
{
  for(int i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}

void find_area(tri *t)
{
  t->area=.5 * t->base * t->altitude;
}

void find_areas_n(int n, tri t[n])
{
  for(int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}

tri find_smallest_triangle(int n, tri t[n])
{
  tri small=t[0];
  for(int i=0;i<n;i++)
  {
    if(small.area>t[i].area)
    small=t[i];
  }
  return small;
}

void output(int n, tri t[n], tri smallest)
{
  printf("The area of triangle with base = %f and altitude = %f is : %f\n",t.base,t.altitude,t.area);
}

int main()
{
  tri a=input_triangle();
  find_area(&a);
  output(a);
  return 0;
}
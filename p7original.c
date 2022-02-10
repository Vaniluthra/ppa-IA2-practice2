#include <stdio.h>

struct _triangle
{
  float base,altitude,area;
};

typedef struct _triangle tri;

tri input_triangle()
{
  tri t;
  printf("Enter base length: ");
  scanf("%f",&t.base);
  printf("Enter altitude length: ");
  scanf("%f",&t.altitude);
  return t;
}

void find_area(tri *t)
{
  t->area=.5 * t->base * t->altitude;
}

void output(tri t)
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
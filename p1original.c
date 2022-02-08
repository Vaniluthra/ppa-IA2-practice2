#include <stdio.h>

void input(float *base, float *height)
{
  printf("Enter Value: ");
  scanf("%f%f",base,height);
}

void find_area(float base , float height, float *area)
{
  *area=.5*(base*height);
}

void output(float base, float height, float area)
{
  printf("The area of the triangle with base %f and height %f is %f\n",base,height,area);
}

void main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
}
#include <stdio.h>

int input()
{
  int l;
  printf("Enter side length: ");
  scanf("%d",&l);
  return l;
}

int check_scalene(int a, int b, int c)
{
  if((a!=b) && (b!=c) && (a!=c))
  return 0;
  else
  return 1;
}

int output(int a, int b, int c, int isscalene)
{
  if(isscalene==1)
    printf("The triangle with sides: %d, %d and %d is not scalene\n",a,b,c);
  else if(isscalene==0)
    printf("The triangle with sides: %d, %d and %d is scalene\n",a,b,c);
}

int main()
{
  int x,y,z,k;
  x=input();
  y=input();
  z=input();
  k=check_scalene(x,y,z);
  output(x,y,z,k);
}
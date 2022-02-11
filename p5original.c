#include <stdio.h>

int input()
{
  int a,b;
  printf("Enter Value: ");
  scanf("%d",&a);
  return a;
}

int gcd(int a, int b)
{
  int gcd=0;
  for(int i=1;i<=a && i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    gcd=i;
  }
  return gcd;
}
void output(int a, int b, int gcd)
{
  printf("GCD of %d and %d is: %d\n",a,b,gcd);
}

int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=gcd(x,y);
  output(x,y,z);
  return 0;
}
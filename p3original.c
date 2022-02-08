#include <stdio.h>

int input_number()
{
  int l;
  printf("Enter number: ");
  scanf("%d",&l);
  return l;
}

int is_composite(int n)
{
  int p=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    p+=1;
  }
  return p;
}

void output(int n, int composite)
{
  if(composite==2)
  printf("%d is a prime number\n",n);
  else
  printf("%d is a composite number\n",n);
}

int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}

#include <stdio.h>

void input_string(char *a)
{
  printf("Enter Value: ");
  scanf("%s",a);
}

int str_reverse(char a)
{
}

void output(int a, int str)
{
  printf("Reversed string of %d is: %d\n",a,str);
}

int main()
{
  int x,z;
  input_string(&x)
  z=str(x);
  output(x,z);
  return 0;
}
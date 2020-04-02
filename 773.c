"'You are provided with a number, "N". Find its factorial.

Input Description:
A positive integer is provided as an input.

Output Description:
Print the factorial of the integer.

Sample Input :
2
Sample Output :
2"'


#include <stdio.h>
int main() 
{
    int num,fact=1,i;
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  fact=fact*i;
  printf("%d",fact);
  return 0;
}

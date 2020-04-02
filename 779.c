"'You are provided with two numbers. Find and print the smaller number.

Input Description:
You are provided with two numbers as input.

Output Description:
Print the small number out of the two numbers.

Sample Input :
23 1
Sample Output :
1"'

#include <stdio.h>
int main()
{
    int x,y;
  scanf("%d%d",&x,&y);
  if(x>y)
  {
    printf ("%d",y);
  }
  else
    printf("%d",x);
}

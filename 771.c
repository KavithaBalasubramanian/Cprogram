"'You are given with a number "N", find its cube.

Input Description:
A positive integer is provided.

Output Description:
Find the cube of the number.

Sample Input :
2
Sample Output :
8"'


#include <stdio.h>
int main() 
{
    int num,cube;
  scanf("%d",&num);
  cube=num*num*num;
  printf("%d",cube);
  return 0;
         
}

"'You are given three numbers A, B & C. Print the largest amongst these three numbers.

Input Description:
Three numbers are provided to you.

Output Description:
Find and print the largest among the three

Sample Input :
1
2
3
Sample Output :
3 "'


#include <stdio.h>
int main()
{
    int x,y,z;
 scanf("%d%d%d",&x,&y,&z);
  if(x>y&&x>z)
{
    printf("%d",x);
}
  else
    
    if(y>x&&y>z)
    {
       printf("%d",y);
    }
  else
  {
       printf("%d",z);
       
  }
       return 0;
 
}

"'You will be provided with a number. Print the number of days in the month corresponding to that number.

Note: In case the input is February, print 28 days. If the Input is not in valid range print "Error".

Input Description:
The input is in the form of a number.

Output Description:
Find the days in the month corresponding to the input number. Print Error if the input is not in a valid range.

Sample Input :
8
Sample Output :
31"'


#include <stdio.h>
int main() 
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},num; 
  scanf("%d",&num);
  if(num>12||num<1)
  {
    printf("Error");
    
  }
  
  else if(num==2)
  {
    printf("28");
  }
  
 else 
   printf("%d",a[num-1]);
}

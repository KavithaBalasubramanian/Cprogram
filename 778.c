"'You are provided with a number "N", Find the Nth term of the series: 1, 4, 9, 25, 36, 49, 64, 81, .......

(Print "Error" if N = negative value and 0 if N = 0).

Input Description:
An integer N is provided to you as the input.

Output Description:
Find the Nth term in the provided series.

Sample Input :
18
Sample Output :
324"'


#include <stdio.h>
int main()
        {
    int n,i;
          scanf("%d",&n);
          i=n*n;
          printf("%d",i);
          return 0;
}

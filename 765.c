"'You are given a number A in Kilometers. Convert this into B: Meters and C: Centi-Metres.

Input Description:
A number "A" representing some distance in kilometer is provided to you as the input.

Output Description:
Convert and print this value in meters and centimeters.

Sample Input :
2
Sample Output :
2000
200000"'



#include <stdio.h>
int main() {
    int m,cm,km;
  scanf("%d",&km);
  m=1000*km;
  cm=100000*km;
  printf("%d\n%d",m,cm);
  return 0;
}




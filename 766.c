"'The area of an equilateral triangle is ¼(√3a2) where "a" represents a side of the triangle. You are provided with the side "a". Find the area of the equilateral triangle.

Input Description:
The side of an equilateral triangle is provided as the input.

Output Description:
Find the area of the equilateral triangle and print the answer up to 2 decimal places after rounding off.

Sample Input :
20
Sample Output :
173.21"'

#include <stdio.h>
#include <math.h>
int main()
{
    float a,area;
  scanf("%f",&a);
  area=((sqrt(3)/4)*a*a);
  printf("%.2f",area);
  return 0;
}

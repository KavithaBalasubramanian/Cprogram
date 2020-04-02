"'Let "A"  be a string. Remove all the whitespaces and find it's length.

Input Description:
A string is provide as an input

Output Description:
Remove all the whitespaces and then print the length of the remaining string.

Sample Input :
Lorem Ipsum
Sample Output :
10"'

#include <stdio.h>
 
int main()
{
   char text[100], blank[100];
   int c = 0, d = 0;
 
   printf("Enter some text\n");
   gets(text);
 
   while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }
 
   blank[d] = '\0';
 
   printf("Text after removing blanks\n%s\n", blank);
 
   return 0;
}

"'Print the First 3 multiples of the given number "N". (N is a positive integer)

Note: print the characters with a single space between them.

Input Description:
A positive integer is provided to you as an input.

Output Description:
Print the First 3 multiples of the number with single spaces between them as an output.

Sample Input :
2
Sample Output :
2 4 6"'



Num=int(input(""))
for i in range(1,4):
    mul = Num*i
    if(i<3):
         print(mul,end=" ")
    else:
        print(mul)
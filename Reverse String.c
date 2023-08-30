#include <stdio.h> 
#include <string.h> 
int isAlphabet(char x)
{
return ( (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') );
}
void swap(char *m, char *n)
{
char *temp; 
temp = m; 
m = n;
n = temp;
}
void reverse(char str[])
{
int rev = strlen(str) - 1, l = 0; 
while (l < rev)
{
if (!isAlphabet(str[l])) 
l++;
else if(!isAlphabet(str[rev])) 
rev--;
else
{
char temp; 
temp = str[l]; 
str[l] = str[rev]; 
str[rev] = temp;
swap(&str[l], &str[rev]); 
l++;
rev--;
}
}
}
void main()
{
char str[15];
printf("Enter the input string: "); 
scanf("%s", str);
reverse(str);
printf("Reversed string is: %s", str);;
}

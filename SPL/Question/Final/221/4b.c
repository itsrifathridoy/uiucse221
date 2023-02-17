#include<stdio.h>
void function(char str[], int code, int n);

void main()
{
    char name[50] = "Abu Sayeed Shiblu";
    function(name, 'A', 0);
}
void function(char str[], int code, int n)
{
    printf("%c, ", code);
    int num = code % strlen(str);
    if (n > 4) return;
    function(str, str[num], ++n);
}
//Output: A, b, i,  , l, y,

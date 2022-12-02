#include <ctype.h>
#include <iostream>
#include <stdio.h>
#include <assert.h>
int Count_types(int i, int counter)
{
    char ch;
    char a[50] = "abcndkdkja3";
    assert(strchr(a,'3') != NULL);
    ch = a[0];
    while (ch != '\0') {
        ch = a[i];
        if (isalnum(ch))
            counter++;
        i++;
    }
 
    return (counter);
}
 
int main()
{
    int i = 0;
 
    int counter = 0;
    counter = Count_types(i, counter);
    printf("\nКількість алфавітно-цифрових символів : %d" , counter);
    printf("\n");
    return 0;

}

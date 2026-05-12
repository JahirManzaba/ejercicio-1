#include <stdio.h>
int main ()
{
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr;
    ptr = &vocales[0];
    *(ptr+3)= 'x';
 for (int i = 0; i < 5; i++)
 {
printf("%c", vocales[i]);
print("%c\n", *(ptr+i));
 }
 return 0;
}
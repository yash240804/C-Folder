#include<stdio.h>

#include<string.h>

int main()

{

char str1[20] = "Hello", str2[20] = " World";

printf("%s\n", strcpy(str2, strcat(str1, str2)));
printf("%d", strcmp("push","pull"));

return 0;

}
#include<stdio.h>
#include<string.h>
 int main(){
    char str1[10] = "Welcome" , str2[] =" To Uttarakhand";

    strcat(str1, str2);

    puts(str1);
    puts(str2);

    return 0;
 }
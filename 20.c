/*
Title- Write a C program which accept string from user and copy that string into some another string.
*/
#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i;
    printf("enter the string: ");
    fgets(str1,sizeof(str1),stdin);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("copied string is: %s",str2);
    
}
 

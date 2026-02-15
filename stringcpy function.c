// write a c program to ccopy the one string into another string
#include <stdio.h>
#include<string.h>
int main() {
    char name1[100];
    char name2[100];
    printf("Enter the name1 string:");
    scanf("%s",name1);
    printf("Enter the name2 string:");
    scanf("%s",name2);
     strcpy(name2,name1);
     printf("name1=%s\t name2=%s",name1,name2);
     return 0;
    }
    
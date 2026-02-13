// write a c program to create a substring which doesn't have duplicate values from the given string
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter the name:");
    scanf("%s",name);
    int size=strlen(name);
    char unq[size];
    int k=0;
    unq[0]=name[0];
    k++;
    unq[1]='\0';
    for(int i=1;i<=size-1;i++)
    {
        int s=strlen(unq);
        int flag=0;
        for(int j=0;j<=s-1;j++)
        {
            if(name[i]==unq[j])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            unq[k]=name[i];
            k++;
            unq[k]='\0';
        }
    }
    printf("%s",unq);
    return 0;
}
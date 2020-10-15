#include<stdio.h>
#include <string.h>

int FindLength(char str[]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}
void  stringcopy(char str1[],char str2[]){

    strcpy(str1,str2);
    printf("\nFirst string %s\n", str1);
    printf("\nSecond String %s\n ",str2);
}
void stringconcat(char str3[], char str4[]){

    strcat(str3,str4);
    printf("\nAfter string concat %s\n", str3);

}
void stringcompare(char str5[],char str6[]){

    int r =strcmp(str5,str6);
    if (r==0){
        printf("\nStrings are Equal\n");}
    else {
        printf("\nStrings are NotEqual\n");
    }
}


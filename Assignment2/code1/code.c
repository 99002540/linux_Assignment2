#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    FILE *fp1, *fp2; 
    char fname[100], c; 
  
    printf("Enter the fname for reading \n"); 
    scanf("%s", fname); 
  
    // Open one file for reading 
    fp1 = fopen(fname, "r"); 
    if (fp1 == NULL) 
    { 
        printf("Can't open file %s \n", fname); 
        exit(0); 
    } 
  
    printf("Enter the fname for writing \n"); 
    scanf("%s", fname); 
  
 
    fp2 = fopen(fname, "r"); 
    if (fptr2 == NULL) 
    { 
        printf("Can'topen file %s \n", fname); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fp1); 
    while (c != EOF) 
    { 
        fputc(c, fp2); 
        c = fgetc(fp1); 
    }
  
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
}

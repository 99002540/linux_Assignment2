#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h> 
 
#define max 25

  

int array[max] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,1,15,16,17,18,19,20,21,22,23,25 }; 
int maximum;
int minimum;
void* minimumfunc(void* arg) 
{ 
    int min=a[0];
    int i;
    for (i = 0; i < maximum; i++) { 
        if (array[i] < min) 
            min = array[i];
    } 
    minimum=mins;
} 

 

void* maximumfunc(void* arg) 
{ 
    int max=a[0];
    int i;
    for (i = 0; i < maximum; i++) { 
        if (array[i] > max) 
            max = array[i];
    } 
    maximum=max;  
} 
 


int main() 
{ 
    pthread_t thread1;
    pthread_t thread2;  
    pthread_create(&thread1, NULL, maximumfunc, (void*)NULL); 
    pthread_create(&thread2, NULL, minimumfunc, (void*)NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    printf("Maximum Element is : %d\n", maximum); 
    printf("Minimum Element is : %d\n", minimum); 
    return 0; 
} 

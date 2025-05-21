#include <stdio.h>

int main (){
    
    int array [10] = {1,2,3,4,5,6,7,8,9,0};
    int len=sizeof(array)/sizeof(int);
    printf("los bytes del arreglo son: %d\n", sizeof(array));
    printf("cada entero tiene: %d bytes\n", sizeof(int));
    printf("un float ocupa %d bytes", sizeof (float));
    printf("El arreglo tiene %d elememtal\n", len);
    
    
    return 0;
      }




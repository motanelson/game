//gcc -o read read.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// a=$(./read)
int main(int argc , char *argv[]){
    int n=0;
    FILE *f1;
    char *a;
    char c[4096]="";
    char b[4096]="";
    
    
    b[0]=0;
        
    fgets(b,4095,stdin);
    printf("%s",b);
  
    return 0;
}

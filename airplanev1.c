#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void){
    char a[SIZE];
    int row;
    int i;
    int n;
    int sum = 0;

    printf("Input %d numbers", SIZE);
    for( i = 0; i <= SIZE; ++i){
        scanf("%c", &a[i]);
        sum += a[i];
    }
    
    for(i = 0; i <= SIZE - 1; ++i ){
        for(row = SIZE -1; row >i; --row){
            if(a[row-1] < a[row]){
                n = a[row-1];
                a[row-1] = a[row];
                a[row] = n;
            }        
        }
    printf("\nOrdered values:\n\n");
    for(i = 0; i <= SIZE; ++i){
        printf("  a[%d] =%5c\n", i, a[i]);
        printf("\n%18d%s\n%18.1f%s\n\n", sum, "is the sum of all the values", (double) sum / SIZE, "is the average");

    }
        
    }
    return 0;
}
 

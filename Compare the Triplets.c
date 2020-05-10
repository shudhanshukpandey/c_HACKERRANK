#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int a[3]; 
   
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int b[3];
    scanf("%d %d %d", &b[0], &b[1], &b[2]);
    int result[3]={0,0,0};
    for(int i=0;i<3;i++)
    {
    if(a[i]>b[i])
        result[0]++;
     if(a[i]<b[i])
        result[1]++;
   
    }
    printf("%d %d",result[0],result[1]);
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,c;
    int sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    for(int i = 0; i < n; i++){
       
     sum1=sum1+a[i][i];
          
    }
        for(int i = 0; i <n; i++){
       
         
     sum2=sum2+a[i][n-i-1];
       
    
       }
    
    
    int sum=sum1-sum2;
    if(sum>0)
        printf("%d",sum);
        else
            printf("%d",-sum);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   long int q,qu[100000];
    int front=-1,rear=-1;
    int val,ch;
    scanf("%ld",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:scanf("%d",&val);
                if(front ==-1&&rear==-1)
            {
                qu[++rear]=val;
                front++;
            }
                else
                {
                    qu[++rear]=val;
                }
                break;
            case 2:
                    front++;
                   break;
            case 3:
                printf("%ld\n",qu[front]);
                break;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


#include<stdio.h>
void fact(int n)
{
   int i;
   
    for(i=n-1; i>= 1; i--) {
        n *= i; 
        }
        printf("%d", n);
}

int main()
{
    fact(5);
    
    return 0;
}


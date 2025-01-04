# include<stdio.h>
int prime_bad(int n)
{int k=0;
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++) {

           
            if (n % i == 0)
                k++;
        }
        if(k>2) {
            return 0;
        } else {
            return 1;
        }
    }
}
int main()
{
    int n, res;
    scanf("%d",&n);
    res = prime_bad(n);
    if(res==0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    return 0;
}

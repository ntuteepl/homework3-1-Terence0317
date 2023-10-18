#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    if (n > 0){
        if (n == 1) printf("NO");
        else if (n == 2) printf("YES");
        else{
            for (i=2;i<n;i++){
                if (n % i == 0){
                    printf("NO");
                    break;
                }
                else if (i==n-1) printf("YES");
            }
        }
    }
}


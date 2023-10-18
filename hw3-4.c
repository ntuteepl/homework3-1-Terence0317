
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num, numsave[4], times = 0, secnum[4];
    bool loop = true;;
    while (loop){
        int a = 0, b = 0;
        scanf("%d", &num);
        if (num == 0) loop = false;
        else {
            if (times == 0){
                numsave[0] = num / 1000;
                numsave[1] = (num % 1000) / 100;
                numsave[2] = (num % 100) / 10;
                numsave[3] = (num % 10);
                times += 1;
            }
            else{
                secnum[0] = num / 1000;
                secnum[1] = (num % 1000) / 100;
                secnum[2] = (num % 100) / 10;
                secnum[3] = (num % 10);
                for (int i = 0 ; i <= 3 ; i++){
                    if (secnum[i] == numsave[i]) a += 1;
                    else {
                        for ( int j = 3 ; j >= 0 ; j--){
                            if (secnum[j] == numsave[i] && i != j) b += 1;
                            else if (secnum[j] == numsave[i] && i == j) a += 1;
                        }
                    }
                }
                printf("%d%s%d%s\n", a , "A" , b , "B");
            }
        }
    }
}

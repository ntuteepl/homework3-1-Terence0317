#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int s1, d1, s2, d2, s3, d3,car;
    scanf("%d%d%d%d%d%d", &s1, &d1, &s2, &d2, &s3, &d3);
    if (s1 > 0 && s1 < d1 && d1 <= 24 && s2 > 0 && s2 < d2 && d2 <= 24 && s3 > 0 && s3 < d3 && d3 <= 24){
        if (s1 < s2 && s2 < s3){
            if (d1 < s2 && d2 < s3) car = 1;
            else if ((d1 < s2 && d2 >= s3) || (d1 >= s2 && d2 < s3) || (d1 < s3 && d2 >= s3)) car = 2;
            else car = 3;
        }
    printf("%d", car);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int s1, d1, s2, d2, s3, d3, car = 3;
    scanf("%d%d%d%d%d%d", &s1, &d1, &s2, &d2, &s3, &d3);
    if (s1 > 0 && s1 < d1 && d1 <= 24 && s2 > 0 && s2 < d2 && d2 <= 24 && s3 > 0 && s3 < d3 && d3 <= 24){
        if (d1 < s2 && d2 < s3) car -= 2; //1,2,3
        else if (d3 < s2 && d2 < s1) car -= 2; //3,2,1
        else if (d2 < s1 && d1 < s3) car -= 2; // 2,1,3
        else if (d2 < s3 && d3 < s1) car -= 2; // 2,3,1
        else if (d1 < s3 && d3 < s2) car -= 2; // 1,3,2
        else if (d3 < s1 && d1 < s2) car -= 2; // 3,1,2
        else if ( (s1 < s2 && s2 < s3) && (d1 > s2 && d2 > s3 && d1 > s3) ) car = 3;
        else if ( (s3 < s2 && s2 < s1) && (d3 > s2 && d2 > s1 && d1 > s1) ) car = 3;
        else car -= 1;

    printf("%d", car);
    }
}

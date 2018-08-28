// Fabho
// A_Fancy_Fence

#include <cstdio>
/*
    Internal angle regular polygon a = (180 * (n/2))/n
    Sides n = 360 / (180 - a);

    Solution: if 360 % (180 - a) != 0 I can't create the polygon
*/
int main(){

    int tests, angle;

    scanf("%d", &tests);


    while(tests--){
        scanf("%d", &angle);

        if(360 % (180-angle) == 0) printf("YES\n");

        else  printf("NO\n");
    }

return 0;
}

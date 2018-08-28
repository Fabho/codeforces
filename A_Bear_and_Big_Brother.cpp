// Fabho
// A_Bear_and_Big_Brother

#include <cstdio>

int main(){
    int limakW, bobW;
    int years = 0;

    scanf("%d %d", &limakW, &bobW);

    while(limakW <= bobW){
        limakW*=3;
        bobW*=2;
        years++;
    }

    printf("%d", years);

return 0;
}

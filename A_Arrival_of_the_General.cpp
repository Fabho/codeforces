// Fabho
// A_Arrival_of_the_General.cpp

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> soldiers;
    int height, input;
    int h = -1, l = 101;

    scanf("%d", &input);

    for(int x=0; x<input; x++){
        scanf("%d", &height);
        soldiers.push_back(height);

        h = max(h, height);
        l = min(l, height);
    }

    int posL, posH;
    for(int x=0; x<input; x++){
        if(soldiers[x] == l)
            posL = x;
    }

    for(int x=0; x<input; x++){
        if(soldiers[x] == h){
            posH = x;
            break;
        }
    }

    int ans = posH + (input-1) - posL;

    if(posH > posL)
        ans--;

    printf("%d\n", ans);

return 0;
}

// Fabho
// A_Vanya_and_Fence
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int friends, data, wall, ans = 0;

    scanf("%d %d", &friends, &wall);

    for(int i=0; i<friends; i++){
        scanf("%d", &data);

        if(data > wall) ans+=2;
        else ans++;
    }

    printf("%d", ans);

return 0;
}

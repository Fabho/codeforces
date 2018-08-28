// Fabho
// A_Tetris

#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

map<int,int> myMap;

int main(){

    int cols, squares, val;

    scanf("%d %d", &cols, &squares);

    for(int x=0; x<squares; x++) {
        scanf("%d", &val);
        myMap[val]++;
    }

    int ans = 1001;

    if(myMap.size() != cols)
        ans = 0;
    else {
        for(map<int,int>::iterator it =  myMap.begin(); it != myMap.end(); it++) {
            ans = min(ans, it->second);
        }
    }

    printf("%d", ans);

return 0;
}

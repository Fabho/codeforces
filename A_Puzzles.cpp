// Fabho
// A_Puzzles

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> vec;
    int students, puzzles, data;

    scanf("%d %d", &students, &puzzles);

    for(int i=0; i<puzzles; i++){
        scanf("%d", &data);
        vec.push_back(data);
    }

    sort(vec.begin(), vec.end());

    int first, last;
    int ans = 100000;

    for(int x=0; x<vec.size() && x + (students-1) < vec.size(); x++){

        first = x;
        last = x + (students-1);
        ans = min(ans, vec[last] - vec[first]);
    }

    printf("%d\n", ans);

return 0;
}

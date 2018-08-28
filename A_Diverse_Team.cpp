// Fabho
// A_Diverse_Team

#include <cstdio>
#include <set>
#include <vector>
using namespace std;

struct Person {
    int index, data;
};

vector<Person> vec;

int getIndex(int val){
    for(int x=0; x<vec.size(); x++) {
        if(vec[x].data == val) return vec[x].index;
    }
    return -1;
}

int main () {
    int group, team, val;
    set <int> diffData;

    scanf("%d %d", &group, &team);

    for(int x=0; x<group; x++){
        scanf("%d", &val);
        diffData.insert(val);

        Person z;
        z.index = x;
        z.data = val;
        vec.push_back(z);
    }

    if(diffData.size() >= team){
        printf("YES\n");
        int c = 0;
        for(set<int>::iterator it = diffData.begin(); it != diffData.end() && c < team; it++, c++) {
            int o = getIndex(*it);
            printf("%d ", o+1);
        }
    }
    else printf("NO");


return 0;
}

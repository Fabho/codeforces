// Fabho
// A_Nastya_and_an_Array

#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

set<int> data;

int main() {
    int dim, val;
    scanf("%d", &dim);

    while(dim--) {
        scanf("%d", &val);
        if(val != 0)
            data.insert(val);
    }

    printf("%d", data.size());

return 0;
}

// Fabho
// A_Is_your_horseshoe_on_the_other_hoof.cpp
#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    int a,b,c,d;
    set<int> data;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    data.insert(a);
    data.insert(b);
    data.insert(c);
    data.insert(d);

    cout<<4-data.size();

return 0;
}

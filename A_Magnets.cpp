// Fabho
// A_Kalevitch_and_Chess

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
vector<string> vec;
int magnets;
string m;
scanf("%d", &magnets);

for(int x=0; x<magnets; x++)
{
    cin>>m;
    vec.push_back(m);
}
int group = 1;
string first, second;
for(int x=0, y=1; y<vec.size(); x++,y++)
{
    first = vec[x], second = vec[y];
    if(first[1] == second[0])
       group++;
}
printf("%d\n", group);
return 0;
}

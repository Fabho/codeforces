// Fabho
// A_System_Administrator

#include <cstdio>
#include <map>

using namespace std;
int main(){
int queries, server, x, y;
map<int,pair<int, int> > myMap;
scanf("%d", &queries);

while(queries--){
scanf("%d %d %d", &server, &x, &y);

myMap[server].first += x;
myMap[server].second += y;

}
int tot1,tot2;
tot1 = (myMap[1].first + myMap[1].second) / 2;
tot2 = (myMap[2].first + myMap[2].second) / 2;

if(myMap[1].first >= tot1)
   printf("LIVE\n");
else
    printf("DEAD\n");

if(myMap[2].first >= tot2)
   printf("LIVE\n");
else
    printf("DEAD\n");

return 0;
}

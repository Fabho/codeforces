// Fabho
// A_Football_other

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
int n;
string team;

while(cin>>n){
map<string,int> Mymap;

for(int a=0;a<n;a++)
   {
    cin>>team;
    Mymap[team]++;
   }

int maxi=-5;
for(map<string,int>::iterator it=Mymap.begin(); it!=Mymap.end();it++)
   {
   maxi=max(maxi,it->second);
   }
for(map<string,int>::iterator iter=Mymap.begin(); iter!=Mymap.end();iter++)
   {
    if(iter->second == maxi)
      {
      cout<<iter->first<<endl;
      break;
      }
   }
}
return 0;
}

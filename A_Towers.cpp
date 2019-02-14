// Fabho
// A_Towers

#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
int main(){

map<int,int> tower;
int pieces,dim;
while(cin>>pieces){
     for(int a=1;a<=pieces;a++)
        {
        scanf("%d",&dim);
        tower[dim]++;
        }
     int maxi=-8;
     for(map<int,int>::iterator it=tower.begin();it!=tower.end();it++)
        maxi=max(it->second,maxi);

     printf("%d %d\n",maxi,tower.size());
     tower.clear();
     }

return 0;
}

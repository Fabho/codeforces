// Fabho
// A_Dragons

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ordena(pair<int,int> a, pair<int,int>b){
if(a.first<b.first)
   return true;
else
   return false;
}

int main(){
long fuerza;
int bonus,d_fuerza,dragones;
vector< pair<int,int> > vec;

while(cin>>fuerza>>dragones){
     for(int a=1;a<=dragones;a++)
        {
        cin>>d_fuerza>>bonus;
        pair <int,int> p = make_pair(d_fuerza,bonus);
        vec.push_back(p);
        }
     sort(vec.begin(),vec.end(),ordena);
     int flag=0;
     for(int b=0;b<vec.size();b++)
         {
            if(fuerza>vec[b].first)
              fuerza+=vec[b].second;
            else{
                 flag=1;
                 break;
                }
         }
         if(flag==0)
           cout<<"YES\n";
         else
           cout<<"NO\n";
      vec.clear();
     }
return 0;
}

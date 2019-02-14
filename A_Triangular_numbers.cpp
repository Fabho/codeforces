// Fabho
// A_Triangular_numbers

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>vec;

void genera(){
int i=0,sum=1;
vec.push_back(0);
for(int x=1;x<=502;x++)
   {
   i+=x;
   vec.push_back(i);
   }
}

int main(){
int flag=0,n;
genera();
while(cin>>n){
     flag=0;
     for(int z=0;z<vec.size();z++)
        {
        if(vec[z]==n)
           {
           cout<<"YES\n";
           flag=1;
           break;
           }
        }
      if(flag==0)
        cout<<"NO\n";
     }
return 0;
}

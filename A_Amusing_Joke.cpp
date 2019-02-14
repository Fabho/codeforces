// Fabho
// A_Amusing_Joke

#include<iostream>
#include<algorithm>
using namespace std;
int main(){

string a,b,c;
while(cin>>a>>b>>c){

      a+=b;
      sort(a.begin(),a.end());
      sort(c.begin(),c.end());

      if(a==c)
         cout<<"YES\n";
      else
         cout<<"NO\n";
}

return 0;
}

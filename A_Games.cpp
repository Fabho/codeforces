// Fabho
// A_Kalevitch_and_Chess

#include <iostream>
#include <vector>
using namespace std;

int main(){
int n,hos,gues,cont;
vector<int>host,guest;
while(cin>>n){
 for(int a=1; a<=n; a++)
     {
      cin>>hos>>gues;
      host.push_back(hos);
      guest.push_back(gues);
     }
  cont = 0;
  for(int a=0; a<host.size(); a++)
     for(int b=0; b<guest.size(); b++)
         if(host[a] == guest[b])
           cont++;

 cout<<cont<<'\n';
 host.clear();
 guest.clear();
}
return 0;
}

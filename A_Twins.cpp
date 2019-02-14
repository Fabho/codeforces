// Fabho
// A_Twins

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int coins,valor,monto,moneda;
float tot,alcanzar;
while(cin>>coins){
      tot=0;
      vector<int>vec;
      for(int a=1;a<=coins;a++)
          {
          cin>>valor;
          tot+=valor;
          vec.push_back(valor);
          }

         alcanzar=tot/2;

      sort(vec.rbegin(),vec.rend());
      monto=0,moneda=0;
      for(int b=0;monto<=alcanzar;b++)
          {
              moneda++;
              monto+=vec[b];
          }
      cout<<moneda<<endl;
     }
return 0;
}

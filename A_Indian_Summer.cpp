// Fabho
// A_Indian_Summer

#include<iostream>
#include<set>
using namespace std;
int main(){
int n;
string leave,color,salida;
set<string> hojas;
while(cin>>n){
      for(int a=1;a<=n;a++)
         {
         cin>>leave>>color;
         salida=leave+" "+color;
         hojas.insert(salida);
         }
      cout<<hojas.size()<<endl;
      hojas.clear();
     }
}

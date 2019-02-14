// Fabho
// A_Codecraft_III

#include<iostream>
using namespace std;

string vec[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(){
string mes;
int salida,pos;
while(cin>>mes>>salida){
     for(int a=0;a<12;a++)
        {
        if(vec[a]==mes)
          {
          pos=a;
          break;
          }
        }
     int cont=0;
     while(cont!=salida){
          pos+=1;
          cont++;
          if(pos>=12)
             pos=0;
          }
      cout<<vec[pos]<<endl;
     }
return 0;
}

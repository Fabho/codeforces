// Fabho
// A_Bar

#include <iostream>
#include <cctype>
using namespace std;
int main(){

int clientes,cont,re;
string dato;

while(cin>>clientes){
 cont=0;
 for(int a=0; a<clientes;a++)
    {
    cin>>dato;
       if(isdigit(dato[0]))
         {
          for(int x=0; x<dato.size();x++)
              {
              if(x==0)
                re=dato[x]-'0';
              else
                re*=10+(dato[x]-'0');
              }
              if(re<18)
                cont++;
         }
       else if(dato=="ABSINTH" || dato=="BEER" || dato=="BRANDY" || dato=="CHAMPAGNE" || dato=="GIN" || dato=="RUM" || dato=="SAKE" || dato=="TEQUILA" || dato=="VODKA" || dato=="WHISKEY" || dato=="WINE")
              cont++;
    }
  cout<<cont<<endl;
}
return 0;
}

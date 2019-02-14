// Fabho
// A_Translation

#include<iostream>
#include<list>
using namespace std;
int main(){
string uno,dos,salida;
while(cin>>uno>>dos){
     list<char> lista;
     salida="";
     for(int a=0;a<dos.size();a++)
        lista.push_front(dos[a]);

     salida="";
     for(list<char>::iterator it = lista.begin(); it != lista.end(); it++)
         salida+=*it;

     if(salida==uno)
       cout<<"YES\n";
     else
       cout<<"NO\n";
     }
return 0;
}

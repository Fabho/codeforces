// Fabho
// A_Word

#include<iostream>
#include<cctype>
using namespace std;

int main(){
string n,salida;
int mayus,minus;
while(cin>>n){
     mayus=minus=0;
     salida="";
     for(int a=0;a<n.size();a++)
        {
          if(isupper(n[a]))
             mayus++;
          else
             minus++;
        }
   if(mayus>minus)
     {
      for(int x=0;x<n.size();x++)
          salida+=toupper(n[x]);

     }
   else{
        for(int x=0;x<n.size();x++)
          salida+=tolower(n[x]);
       }
   cout<<salida<<endl;
}
return 0;
}

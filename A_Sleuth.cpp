// Fabho
// A_Sleuth

#include<iostream>
#include<cctype>
using namespace std;
int main(){
string cad,salida;
while(getline(cin,cad)){
     salida="";
     for(int a=0;a<cad.size();a++)
        {
         if(isalpha(cad[a]))
            salida+=cad[a];
        }
      string::iterator it=salida.end()-1;
      if((*it)=='a' || (*it)=='A' || (*it)=='e' || (*it)=='E' || (*it)=='i' || (*it)=='I' || (*it)=='o' || (*it)=='O' || (*it)=='u' || (*it)=='U' || (*it)=='Y' || (*it)=='y')
        cout<<"YES\n";
      else
        cout<<"NO\n";

     }
return 0;
}

// Fabho
// A_Team

#include<iostream>
#include<vector>
using namespace std;
int main(){
int problem;
string a1,a2,a3,sa;
vector<string> vec;

while(cin>>problem){

     for(int a=1;a<=problem;a++)
        {
        sa="";
        cin>>a1>>a2>>a3;
        sa+=a1+a2+a3;
        vec.push_back(sa);
        }

     int re=0,cont;
     string salida;
     for(int b=0;b<vec.size();b++)
        {
         cont=0;
         salida=vec[b];
         for(int x=0;x<salida.size();x++)
             {
             if(salida[x]=='1')
               cont++;
             }
         if(cont>=2)
           re++;
        }
     cout<<re<<endl;
     vec.clear();
     }
return 0;
}

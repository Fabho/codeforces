// Fabho
// A_Football

#include<vector>
#include<algorithm>
#include<map>
#include<iostream>
#include<cstdio>
#include<set>
#include<cctype>
using namespace std;
int main(){
string str;
char c;
int cont;
while(cin>>str){
     c=str[0];
     cont=0;
     for(int a=0;a<str.size();a++){
        if(str[a]==c)
          {
          cont++;
          if(cont>=7)
             break;
          }
        else{
            cont=1;
            c=str[a];
            }
        }
     if(cont>=7)
       cout<<"YES\n";
     else
       cout<<"NO\n";
     }
return 0;
}

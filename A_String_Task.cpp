// Fabho
// A_String_Task

#include<vector>
#include<algorithm>
#include<map>
#include<iostream>
#include<cstdio>
#include<set>
#include<cctype>
using namespace std;
int main(){
string str,salida,sa;

while(cin>>str){
      salida="",sa="";
      char ou;
      for(int a=0;a<str.size();a++){
       if(str[a]!='a' && str[a]!='A' && str[a]!='e' && str[a]!='E' && str[a]!='i' && str[a]!='I' && str[a]!='o' && str[a]!='O' && str[a]!='u' && str[a]!='U' && str[a]!='Y' && str[a]!='y')
          {ou=str[a];
           if(isupper(str[a]))
              ou=tolower(str[a]);
           salida+=ou;
          }
         }

      for(int c=0;c<salida.size();c++){
          cout<<"."<<salida[c];
         }
      cout<<endl;
     }
return 0;
}

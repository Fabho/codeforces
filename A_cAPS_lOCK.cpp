// Fabho
// A_cAPS_lOCK

#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iostream>
#include<cstdio>
#include<set>
#include<cctype>
using namespace std;
int main(){
string str,salida;
int f,pos;
char ou;
while(cin>>str){
     f=0;
     salida="";
     if(str.size()==1)
        {
         if(islower(str[0]))
            {ou=toupper(str[0]);
                cout<<ou<<endl;
            }
         else{ou=tolower(str[0]);

            cout<<ou<<endl;
         }

        }
     else{
     for(int a=0;a<str.size();a++)
        {
        if(isupper(str[a]))
           f=1;
        else{
             f=0;
             break;
            }
        }
     if(f==0)
       {
       if(islower(str[0]))
         {
          for(int b=1;b<str.size();b++)
              {
                  if(isupper(str[b]))
                     f=1;
                  else{
                      f=0;
                      break;
                      }
              }
         }
       }
     if(f==0)
        cout<<str<<endl;
     else{
         for(int x=0;x<str.size();x++)
            {
                if(isupper(str[x]))
                   {
                       ou=tolower(str[x]);
                       salida+=ou;
                   }
                else {
                    ou=toupper(str[x]);
                    salida+=ou;
                   }
            }
         cout<<salida<<endl;
         }
     }
     }
return 0;
}

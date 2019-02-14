// Fabho
// A_Petya_and_Strings

#include<vector>
#include<algorithm>
#include<map>
#include<iostream>
#include<cstdio>
#include<set>
#include<cctype>
using namespace std;
string minuscula(string a){
for(int x=0;x<a.size();x++){
    if(isupper(a[x]))
       a[x]=tolower(a[x]);
   }
return a;
}
int main(){
string str1,str2;

while(cin>>str1>>str2){
      str1=minuscula(str1);
      str2=minuscula(str2);
      if(str1>str2)
        cout<<1<<endl;
      else if(str1==str2)
             cout<<0<<endl;
      else
         cout<<-1<<endl;
     }
return 0;
}

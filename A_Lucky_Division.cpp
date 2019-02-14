// Fabho
// A_Lucky_Division

#include<vector>
#include<algorithm>
#include<map>
#include<iostream>
#include<cstdio>
#include<set>
#include<cctype>
using namespace std;

int main(){
int n,cpy,mod,f;
while(cin>>n){
      cpy=n;
      while(cpy>0){
            mod=cpy%10;
            cpy/=10;
            if(mod==4 || mod==7)
               f=1;
            else{
                 f=0;
                 break;
                }
           }
     if(f==1)
       cout<<"YES\n";
     else{
         if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%44==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0)
            cout<<"YES\n";
         else
            cout<<"NO\n";
         }
     }
return 0;
}

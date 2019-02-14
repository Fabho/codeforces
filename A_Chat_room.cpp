// Fabho
// A_Chat_room

#include<vector>
#include<algorithm>
#include<map>
#include<list>
#include<iostream>
#include<cstdio>
#include<set>
#include<cctype>
using namespace std;
int main(){
string str;
int pos;
while(cin>>str){
      if(str.size()<5)
         cout<<"NO\n";
      else{

      int flag=0;
      for(int a=0;a<str.size();a++){
         if(str[a]=='h')
           {
            pos=a+1;
            for(int b=pos;b<str.size();b++){
                if(str[b]=='e')
                  {
                   pos=b+1;
                   for(int c=pos;c<str.size();c++){
                      if(str[c]=='l')
                         {
                          pos=c+1;
                          for(int d=pos;d<str.size();d++)
                              {
                               if(str[d]=='l')
                                  {
                                   pos=d+1;
                                    for(int e=pos;e<str.size();e++)
                                       {
                                         if(str[e]=='o')
                                           {
                                            flag=1;
                                            break;
                                           }
                                       }
                                  }
                              }
                         }
                      }
                  }
               }
           }
         }

      if(flag==1)
         cout<<"YES\n";
      else
         cout<<"NO\n";
      }
     }
return 0;
}

// Fabho
// A_Haiku

#include <iostream>
#include <cctype>
using namespace std;

int main(){

string str;
int c1,c2,c3;
while(getline(cin,str)){
c1=c2=c3=0;

for(int a=0; a<str.size(); a++)
   {
    if(isalpha(str[a]) && (str[a]=='a' || str[a]=='A' || str[a]=='e' || str[a]=='E' || str[a]=='i' || str[a]=='I' || str[a]=='o' || str[a]=='O' || str[a]=='u' || str[a]=='U' ))
      c1++;
   }

getline(cin,str);
       for(int a=0; a<str.size(); a++)
           {
             if(isalpha(str[a]) && (str[a]=='a' || str[a]=='A' || str[a]=='e' || str[a]=='E' || str[a]=='i' || str[a]=='I' || str[a]=='o' || str[a]=='O' || str[a]=='u' || str[a]=='U' ))
               c2++;
           }

getline(cin,str);
       for(int a=0; a<str.size(); a++)
           {
            if(isalpha(str[a]) && (str[a]=='a' || str[a]=='A' || str[a]=='e' || str[a]=='E' || str[a]=='i' || str[a]=='I' || str[a]=='o' || str[a]=='O' || str[a]=='u' || str[a]=='U' ))
               c3++;
           }

         if(c1==5 && c2==7 && c3==5)
            cout<<"YES\n";
         else
            cout<<"NO\n";


        }


return 0;
}

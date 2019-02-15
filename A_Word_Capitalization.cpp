// Fabho
// A_Word_Capitalization

#include <iostream>
#include <cctype>
using namespace std;
int main(){
string cad;
while(cin>>cad){
for(int y=0; y<cad.size(); y++)
   {
     if(isalpha(cad[y]))
       {
          cad[y] = toupper(cad[y]);
          break;
       }
   }
cout<<cad<<endl;
}
return 0;
}

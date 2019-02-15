// Fabho
// A_Stones_on_the_Table

#include <iostream>
using namespace std;
int main(){
int rocks,flag, cont;
string cad;

cin>>rocks;

cin>>cad;
flag = 1;
cont = 0;

if(rocks == 1)
   cout<<0<<'\n';
else{
      while(flag){
          if(cad.size()>1){
            for(int a=0,b=1; b<cad.size();a++,b++)
                {
                  if(cad[a] != cad[b])
                     flag = 0;
                  else{
                       cad.erase(cad.begin()+a);
                       flag = 1;
                       cont++;
                       break;
                      }
                }
            }
           else
                 flag = 0;
           }
      cout<<cont<<'\n';
    }


return 0;
}

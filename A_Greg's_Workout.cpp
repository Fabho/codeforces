//============================================================================
// Name        : --
// Author      : Fabho
// Version     :
// Copyright   : CopyLeft
// Description : --
//============================================================================

#include <iostream>
using namespace std;

int main(){

int n,bicep,chest,back,flag,number;

while(cin>>n){

chest = bicep = back = 0;
flag = 1;

for(int a=1; a<=n; a++)
   {
     cin>>number;
     if(flag == 1)
       {
        chest+=number;
        flag = 2;
       }
     else if(flag == 2)
            {
             bicep+=number;
             flag = 3;
            }
     else{
           back+=number;
           flag = 1;
         }
   }

if(chest > back && chest > bicep)
  cout<<"chest\n";
else if(back > chest && back > bicep)
        cout<<"back\n";
else
    cout<<"biceps\n";

}

return 0;
}

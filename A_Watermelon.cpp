// Fabho
// A_Watermelon

#include <iostream>
using namespace std;
int main(){
int peso,flag,re;
while(cin>>peso){
 flag = 0;

 for(int a=1; a<=peso; a++)
    {
     if(peso%a == 0)
       {
         re = peso/a;
         if(re % 2 == 0 && re != peso)
            {
             flag = 1;
             break;
            }
       }
    }
  if(flag == 0)
     cout<<"NO\n";
  else
     cout<<"YES\n";
}
return 0;
}

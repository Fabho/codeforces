// Fabho
// A_Beautiful_Matrix

#include <iostream>
#include <cmath>
using namespace std;

int matriz[7][7];

int main(){
for(int a=1; a<=5; a++)
    for(int b=1;b<=5;b++)
        cin>>matriz[a][b];

int tot = 0,x,y;
for(int a=1; a<=5;a++)
   for(int b=1; b<=5; b++)
       if(matriz[a][b] == 1)
          {
            x=a;
            y=b;
          }

if(x!=3)
  tot = tot+(abs(3-x));
if(y!=3)
  tot = tot+(abs(3-y));

cout<<tot<<'\n';

return 0;
}

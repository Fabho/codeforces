// Fabho
// A_Game_Outcome

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000
using namespace std;

int vec[MAX][MAX];

void ini(int n){

for(int x=0;x<n;x++)
   {
   for(int y=0;y<n;y++)
       vec[x][y]=0;
   }
}

int main(){
int n,ele,tot,cont;
vector<int> sumaFilas, sumaColumnas;
while(cin>>n){
      ini(n);
      cont=0;
      for(int a=0; a<n; a++)
         {
           for(int b=0; b<n; b++)
               {
                cin>>ele;
                vec[a][b]=ele;
               }
         }

      for(int x=0; x<n;x++)
          {
          tot=0;
          for(int y=0;y<n;y++)
              tot+=vec[x][y];
              sumaFilas.push_back(tot);
          }
      for(int x=0; x<n;x++)
          {
          tot=0;
          for(int y=0;y<n;y++)
              tot+=vec[y][x];
              sumaColumnas.push_back(tot);
          }

    for(int x=0; x<sumaFilas.size();x++)
       {
       for(int y=0; y<sumaColumnas.size();y++)
           {
               if(sumaColumnas[y]>sumaFilas[x])
                 cont++;
           }
       }
    cout<<cont<<endl;
    sumaColumnas.clear();
    sumaFilas.clear();
 }
}

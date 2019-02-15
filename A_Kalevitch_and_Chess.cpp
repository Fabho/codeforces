// Fabho
// A_Kalevitch_and_Chess

#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;
int matriz[9][9];

void ini(string cad){
int c = 0;
for(int a=0; a<8; a++)
   for(int b=0; b<8; b++)
      {
       matriz[a][b] = cad[c];
       c++;
      }
}

int main(){
int c=0,cont;
string salida="";
char caracter;
while(c!=64){
      caracter = getchar();
      if(isalpha(caracter))
         {
          salida+=caracter;
          c++;
         }
     }
ini(salida);
int negro = 0;
for(int x=0; x<8;x++)
   {
    for(int y=0; y<8; y++)
       {
         if(matriz[x][y] == 'B')
           {
            negro++;
           }
       }

   }

/***/
if(negro == 64)
   cout<<8<<'\n';
else{
cont = 0;
int flag;
for(int x=0; x<8;x++)
   {
    flag = 0;
    for(int y=0; y<8; y++)
       {
         if(matriz[x][y] != 'B')
           {
            flag = 1;
            break;
           }
       }
       if(flag == 0)
         cont++;
   }
for(int x=0; x<8;x++)
   {
    flag = 0;
    for(int y=0; y<8; y++)
       {
         if(matriz[y][x] != 'B')
           {
            flag = 1;
            break;
           }
       }
       if(flag == 0)
         cont++;
   }
cout<<cont<<'\n';}
return 0;
}

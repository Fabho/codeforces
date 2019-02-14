// Fabho
// A_Flag

#include<iostream>
#include<cstdio>
#include<cctype>
#include<vector>
#define MAX 102
using namespace std;

char matriz[MAX][MAX];
void ini(int r, int c){
for(int x=0;x<r;x++)
   {
   for(int y=0;y<c;y++)
      {
      matriz[x][y]=0;
      }
   }
}

int main(){
int row,col,c=0,tot;
char cara;
string proceso;
while(cin>>row>>col){
     ini(row,col);
     c=0;
     tot=row*col;
     proceso="";

     while(c!=tot){
          cara=getchar();
          if(isdigit(cara))
            {
            c++;
            proceso+=cara;
            }
          }

     int grado=0;
     for(int a=0;a<row;a++)
        {
        for(int b=0;b<col;b++)
           {
           matriz[a][b]=proceso[grado];
           grado++;
           }
        }

      /****/
      int flag=0;
      char ele;
      for(int x=0;x<row;x++)
        {
        ele=matriz[x][0];
        for(int y=0;y<col;y++)
           {
             if(matriz[x][y]!=ele)
                {
                flag=1;
                break;
                }
           }
        if(flag==1)
           break;
        }
       if(flag==0)
         { vector<char>vec;
           for(int o=0;o<row;o++)
              vec.push_back(matriz[o][0]);

           int primero=vec[0];
           for(int u=0,v=1;v<vec.size();u++,v++)
              {
                  if(vec[u]==vec[v])
                    {
                    flag=1;
                    break;
                    }
              }
             if(flag==0)
               cout<<"YES\n";
             else
               cout<<"NO\n";
         }
        else
          cout<<"NO\n";

      /****/
     }
return 0;
}

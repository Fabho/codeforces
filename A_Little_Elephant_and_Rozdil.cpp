// Fabho
// A_Little_Elephant_and_Rozdil

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int distance;
long time,pos;
vector<long>vec;

while(cin>>distance){
      for(int a=0; a<distance; a++)
         {
         cin>>time;
         vec.push_back(time);
         }
     long maxi= vec[0];
     int flag=0;
     if(distance==1)
        {
         flag=0;
         pos=1;
        }
     else{
      vector<long> copia=vec;
      sort(copia.begin(),copia.end());
      maxi=copia[0];

         for(int y=1; y<vec.size(); y++)
            {
            if(copia[y]==maxi)
              {
              flag=1;
              break;
              }

            }
          if(flag==0)
             {
             for(int t=0; t<vec.size();t++)
                {
                    if(vec[t]==maxi)
                      {pos=t+1;
                      break;}
                }
             }
      }
     if(flag==1)
        cout<<"Still Rozdil\n";
     else cout<<pos<<endl;
     vec.clear();
     }
return 0;
}

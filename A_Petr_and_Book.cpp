// Fabho
// A_Petr_and_Book

#include <iostream>
#include <vector>
using namespace std;
int main(){
int pages,cont,tot,dia;
vector<int> vec;

while(cin>>pages){

     for(int a=1;a<=7;a++)
        {
        cin>>tot;
        vec.push_back(tot);
        }
     cont=0;
     for(int a=0; cont<pages; a++)
        {
        if(a>=vec.size())
          a=0;
        cont+=vec[a];
        dia=a;
        }
     cout<<dia+1<<endl;
     vec.clear();
     }
return 0;
}

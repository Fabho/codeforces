// Fabho
// A_Roma_and_Lucky_Numbers

#include <iostream>
#include <vector>
using namespace std;
int main(){
long n,k,con,tot;
vector<string> vec;
string num, ele;

cin>>n>>k;
for(int a=1; a<=n; a++)
   {
    cin>>num;
    vec.push_back(num);
   }
tot = 0;

for(int b=0; b<vec.size(); b++)
    {
     ele = vec[b];
     con = 0;
     for(int c=0; c<ele.size(); c++)
         if(ele[c] == '4' || ele[c] == '7')
            con++;
     if(con<=k)
        tot++;
    }
cout<<tot<<'\n';
return 0;
}

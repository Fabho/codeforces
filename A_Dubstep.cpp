// Fabho
// A_Dubstep

#include<iostream>
#include<vector>
using namespace std;
int main(){
string cad,word;
int i;

vector<string> vec;
while(cin>>cad){
      i=0;
      word="";
      while(i<cad.size()){
           if(cad[i]=='W' && cad[i+1]=='U' && cad[i+2]=='B')
              {
              if(word.size()>0)
                {
                vec.push_back(word);
                }
               i+=3;
               word="";
              }
            else{
                 word+=cad[i];
                 i++;
                }
           }
      if(word.size()>0)
         vec.push_back(word);
     for(int ob=0;ob<vec.size();ob++)
        cout<<vec[ob]<<" ";
        cout<<endl;
     vec.clear();
     }
return 0;
}

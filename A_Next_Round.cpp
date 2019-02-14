// Fabho
// A_Next_Round

#include<iostream>
#include<vector>
using namespace std;
int main(){
int participant,position,score,value;
vector<int> vec;
while(cin>>participant>>position){

     for(int a=1;a<=participant;a++)
        {
        cin>>score;
        vec.push_back(score);
        }
     value=vec[position-1];
     int c=0;
     for(int b=0;b<vec.size();b++)
         {
         if(vec[b]>=value && vec[b]>0)
            c++;
         }
     cout<<c<<endl;
     vec.clear();
    }
return 0;
}

// Fabho
// A_Boy_or_Girl

#include <iostream>
#include <set>
using namespace std;

int main(){

string input;
set<char> caracteres;
while(cin>>input){
     for(int x=0; x<input.size(); x++)
         caracteres.insert(input[x]);

     if(caracteres.size() % 2  ==  0)
        cout<<"CHAT WITH HER!\n";
     else
        cout<<"IGNORE HIM!\n";

     caracteres.clear();
     }

return 0;
}

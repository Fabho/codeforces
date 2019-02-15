// Fabho
// A_Word

#include <iostream>
#include <cctype>
using namespace std;
int main(){
string word;
int minu,mayu;

while(cin>>word){
minu = mayu = 0;

for(int a=0; a<word.size(); a++)
   {
     if(isupper(word[a]))
        mayu++;
     else
         minu++;
   }

if(mayu>minu){
   for(int x=0; x<word.size(); x++)
      word[x] = toupper(word[x]);
  }
else{
     for(int x=0; x<word.size(); x++)
         word[x] = tolower(word[x]);
    }
cout<<word<<endl;
}
return 0;
}


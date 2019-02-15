// Fabho
// A_Whose_sentence_is_it?

#include <iostream>
#include <cstdio>

using namespace std;
int main(){
int casos;
string cad;
int ff,fr;
scanf("%d",&casos);
getline(cin,cad);
while(casos--){

getline(cin,cad);

if(cad.size() < 5)
   printf("OMG>.< I don't know!\n");
else{
      string tmp = cad.substr(0,5);
      ff = fr = 0;
      if(tmp == "miao.")
         fr=1;
      int tam = cad.size()-1;
      if(cad[tam--] == '.' && cad[tam--] == 'a' && cad[tam--] == 'l' && cad[tam--] == 'a' && cad[tam--] == 'l')
         ff = 1;

      if(ff == 1 && fr == 1)
         printf("OMG>.< I don't know!\n");
      else if(ff == 1)
              printf("Freda\'s\n");
      else if(fr == 1)
              printf("Rainbow\'s\n");
      else
            printf("OMG>.< I don't know!\n");
    }
}
return 0;
}

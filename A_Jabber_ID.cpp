// Fabho
// A_Jabber_ID

#include <iostream>
#include <cctype>
using namespace std;
bool validarUser(string cad){
 bool flag = 1;
 int d;
 if(cad.size()>16)
    return 0;
 else{
    for(int a=0; a<cad.size(); a++)
        {
         d = isalnum(cad[a]);
         if(d == 0 && cad[a] != '_')
           {
            flag = 0;
            break;
           }
        }
    return flag;
     }
}

bool validarHost(string cad){
 bool flag = 1;
 int d;
 string tmp="";

 if(cad.size()>=2)
    {
     for(int x=0, y=1; y<cad.size(); x++,y++)
        {
            if(cad[x]=='.' && cad[y]=='.')
               return 0;
        }
    }

 if(cad.size()>32)
    return 0;
 else if(cad[cad.size()-1] =='.' || cad[0] == '.')
         return 0;
 else{
    for(int a=0; a<cad.size(); a++)
        {
         if(cad[a] == '.')
           {
               if(tmp.size()>16)
                  return 0;
               else
                   tmp="";
           }
         else if(isalnum(cad[a]) == 0 && cad[a] != '_')
                {
                 flag = 0;
                 break;
                }
        }
    return flag;
     }
}

bool validarRsc(string cad, char l){
 bool flag = 1;
 int d;//cout<<"tam "<<cad<<" "<<cad.size();
 if(cad.size()>16 || cad.size() ==1 )
    return 0;
 else if(cad.size() == 0 && l =='a')//jamas se pillo barra
          {return 1;}
else if(cad.size() == 0 && l == 'b')
        return 0;
 else{
    for(int a=0; a<cad.size(); a++)
        {
         d = isalnum(cad[a]);
         if(d == 0 && cad[a] != '_')
           {
            flag = 0;
            break;
           }
        }
    return flag;
     }
}

int main(){
string cad, userName, hostName,resource;
int flag,pos;
char l;
while(cin>>cad){

flag = 0;
l='a';
hostName = userName = resource = "";

for(int a=0; a<cad.size(); a++)
       if(cad[a] =='@')
         {
          pos = a;
          flag = 1;
          break;
         }
if(flag == 0)
  cout<<"NO\n";
else{
      for(int b=0; b<pos; b++)
          userName+=cad[b];

      for(int c=pos+1; c<cad.size(); c++)
         {
          if(cad[c] == '/')
             {
              pos = c;
              l='b';
              break;
             }
           else{
               hostName+=cad[c];
               pos = c;
               }
         }

      for(int d=pos+1; d<cad.size(); d++)
          resource+=cad[d];

     if(validarUser(userName) &&userName.size()>0 && validarHost(hostName) && hostName.size()>0 && validarRsc(resource, l) )
        cout<<"YES\n";
     else
        cout<<"NO\n";

     /*cout<<userName<<" "<<hostName<<" "<<resource<<"\n";
     cout<<userName.size()<<" "<<hostName.size()<<" "<<resource.size()<<"\n";*/
    }
}
return 0;
}

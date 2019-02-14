// Fabho
// A_Chat_Servers_Outgoing_Traffic

#include <iostream>
#include <set>
using namespace std;

int main() {
string inst,name;
set<string> chat;
int pos,cont,total=0;
while(getline(cin,inst)){
	if(inst == "EOF")
		break;

	    if(inst[0] == '+')
	      {
	    	name = "";
	    	for(int a=1; a<inst.size(); a++)
	    	    name+=inst[a];
	      chat.insert(name);

	      }
	    else if(inst[0] == '-')
	            {
	    	      name = "";
	    	      for(int a=1; a<inst.size(); a++)
	    	      	  name+=inst[a];
	    	    chat.erase(name);

	            }
	    else{

	         for(int x=0; x<inst.size();x++)
	            {
	        	  if(inst[x] == ':')
	        	    {
	                 pos = x;
	                 break;
	        	    }
	            }
	         cont = 0;

	         for(int y=pos+1; y<inst.size();y++)
	             cont++;

	         total+=(cont * chat.size());

	         }
     }
cout<<total<<endl;
return 0;
}

// Fabho
// A_BerOS_file_system

#include <iostream>
using namespace std;

int main() {
	string path,salida;
	int flag;
	while(cin>>path){
		  salida = "";
		  flag = 0;
          int a;
		  for(a=0; a<path.size();a++)
		     {
			  if(path[a] == '/' )
			     {
				       if(flag == 0)
				         {
				    	  salida+='/';
				    	  flag++;
				         }
			     }
			  else{
				    flag = 0;
				    salida += path[a];
			       }
		     }
		 int pos=0;
		 for(int b=0; b<salida.size(); b++)
			   if(salida[b] != '/')
				  pos=b;
		 string output="";
		 for(int c=0; c<=pos; c++)
			 output+=salida[c];

		 cout<<output<<endl;
	     }

	return 0;
}

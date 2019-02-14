//============================================================================
// Name        : 31A.cpp
// Author      : Fabho
// Version     :
// Copyright   : CopyLeft
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

int worms,tam,key,posKey,flag;
vector<int> vec;
while(cin>>worms){
	flag = 0;
	for(int x=0; x<worms; x++)
	   {
		cin>>tam;
	    vec.push_back(tam);
	   }

	for(int a=0; a<vec.size(); a++)
	   {
		key = vec[a];
		posKey = a;

		for(int b=0; b<vec.size(); b++)
		   {
			 if(b != posKey)
			  {
				 for(int c=0; c<vec.size(); c++)
				    {
					  if(c != posKey && c != b)
					    {

						     if(key == vec[b]+vec[c])
						     {
						    	 cout<<posKey+1<<" "<<b+1<<" "<<c+1<<endl;
						    	 flag = 1;
						    	 break;
						     }

					    }
				    }
			  }
		if(flag == 1)
			break;
		   }
		if(flag == 1)
			break;
	   }

	if(flag == 0)
	  cout<<-1<<endl;

  vec.clear();
}

return 0;
}

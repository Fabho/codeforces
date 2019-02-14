// Fabho
// A_IQ_test

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,flag,num,pos;
	vector<int> vec;

	while(cin>>n){

		  for(int a=1; a<=n;a++)
		     {
			  cin>>num;
			  vec.push_back(num);
		     }
          int par,impar;
          par = impar =0;
		  for(int y=0; y<vec.size();y++)
		     {
			  if(vec[y]%2 == 0)
				 par++;
			  else
				 impar++;
			  if(par>1)
			    {
				  flag = 0;
				  break;
			    }
			  if(impar>1)
			    {
				  flag = 1;
				  break;
			    }
		     }

		  if(flag == 0)
		    {

			  for(int x=0; x<vec.size();x++)
				   if(vec[x]%2 != 0)
					  pos = x+1;

		    }
		  else{

			  for(int x=0; x<vec.size();x++)
			  				   if(vec[x]%2 == 0)
			  					  pos = x+1;

		       }
    cout<<pos<<endl;
    vec.clear();
	}

	return 0;
}

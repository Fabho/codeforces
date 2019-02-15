// Fabho
// A_Word

#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
long num;
scanf("%ld",&num);

if(num>=0 || num>-10)

    printf("%ld\n",num);

else if(num == -10)
   printf("%d\n",0);
else{
num*=(-1);
long res = num % 10;
long n1 = num/10;
long n2 = ((n1/10)*10) + res;

printf("%ld\n",max(n1 *(-1),n2*(-1)));
}

return 0;
}

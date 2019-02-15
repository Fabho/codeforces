// Fabho
// A_Good_Number

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
vector<int>vec;
int cont = 0;

bool checkCiclo(string str)
{
    int num;
    for(int x=0; x<str.size(); x++)
    {
        num = str[x] - '0';
        if(num <= vec.size())
           vec[num] = 1;
    }

    for(int y=0; y<vec.size(); y++)
        if(vec[y] == 0)
           return false;
return true;
}

int main()
{
int good, n;
string myArray;
scanf("%d %d", &n, &good);

for(int x=1; x<=n; x++)
{
    cin>>myArray;
    vec.assign(good+1, 0);
    if(checkCiclo(myArray))
       cont++;
}
printf("%d\n", cont);
return 0;
}

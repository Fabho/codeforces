// Fabho
// A_Business_trip

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
int k, grow, cont, tot;
scanf("%d", &k);

    vector<int> vec;
    cont = tot = 0;
    for(int i=0; i<12; i++)
    {
        scanf("%d", &grow);
        vec.push_back(grow);
    }
    sort(vec.begin(), vec.end(), cmp);

    for(int x=0; x<12; x++)
    {
        if(tot >= k)
           break;
        tot += vec[x];
        cont++;
    }
    if(tot < k)
       printf("-1\n");
    else
        printf("%d\n", cont);

return 0;
}

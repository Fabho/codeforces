// Fabho
// A_I_love_\%username\%

#include <cstdio>
using namespace std;
int main()
{
int contest, points, tot, min, max;
scanf("%d", &contest);

    tot = 0;
    for(int i=0; i<contest; i++)
    {
        scanf("%d", &points);
        if(i == 0)
        {
            min = max = points;
        }
        else
        {
            if(points > max)
            {
                max = points;
                tot++;
            }
            else if(points < min)
            {
                min = points;
                tot++;
            }
        }
    }
    printf("%d\n", tot);

return 0;
}

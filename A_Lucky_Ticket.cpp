// Fabho
// A_Lucky_Ticket

#include <iostream>
#include <cstdio>
using namespace std;

bool isLucky(string ticket)
{
    for(int x=0; x<ticket.size(); x++)
        if(ticket[x] != '4' && ticket[x] != '7')
           return false;
return true;
}

bool isEqual(string ticket)
{
    int end = ticket.size()/2;
    int v1,v2;
    v1 = v2 = 0;

    for(int x=0; x<end; x++)
    {
        v1 = v1 + (ticket[x] -'0');
    }
    for(int x=end; x<ticket.size(); x++)
    {
        v2 = v2 + (ticket[x] -'0');
    }
    if(v1 == v2)
       return true;
    else
        return false;
}

int main()
{
int num;
string ticket;
scanf("%d", &num);
cin>>ticket;

if(!isLucky(ticket))
   printf("NO\n");
else
{
    if(isEqual(ticket))
       printf("YES\n");
    else
        printf("NO\n");
}

return 0;
}

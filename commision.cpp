#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)

int main()
{
    int tlocks=0, tbarrel=0, tstock=0, sales=0, comm, lsales=1, ssales=1, bsales=1;
    int sprice = 30, tprice = 45, bprice = 25;
    int lock=0, stock=0, barrel=0;
    cout << "enter the lock to exit -1\n";
    cin >> lock;
    while (lock != -1)
    {
        cout << "enter the stock and barrel\n";
        cin >> stock >> barrel;
        tlocks += lock;
        tbarrel += barrel;
        tstock += stock;
        cout << "enter the lock to exit -1\n";
        cin >> lock;
    }
    if (tlocks < 0 || tlocks > 70)
    {
        cout << "invalid lock";
        exit(1);
    }
    if (tstock < 0 || tstock > 90)
    {
        cout << "invalid stock";
        exit(1);
    }
    if (tbarrel < 0 || tbarrel > 70)
    {
        cout << "invalid barrel";
        exit(1);
    }
    lsales=tlocks*tprice;
    bsales=tbarrel*bprice;
    ssales=tstock*sprice;
    sales=lsales+bsales+ssales;
    if(sales>1800)
    {
        comm=0.1*1000;
        comm+=0.15*800;
        comm+=0.2*(sales-1800);
    }
    else if(sales>1000)
    {
        comm=0.1*1000;
       
        comm+=0.15*(sales-1000);
    }else
    {
        comm=0.1*sales;
        
    }
cout<<comm<<" "<<sales;

}

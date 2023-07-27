#include <bits/stdc++.h>

using namespace std;
void breakingRecords(int x, int scores[])
{
    int maxx,minn,countmin=0,countmax=0;
    maxx=minn=scores[0];
    for(int i=0;i<x;i++)
    {
        if (scores[i]>maxx)
        {
            maxx=scores[i];
            countmax++;
        }
        else if (scores[i]<minn)
        {
            minn=scores[i];
            countmin++;
        }
    }
    int counter[2];
    cout<<countmax<<"\t"<<countmin;

}

int main()
{
   int n;
   cin>>n;
   int s[n];
   for(int i=0;i<n;i++)
        cin>>s[i];
   breakingRecords(n,s);
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,w,wr;
        cin>>n>>w>>wr;
        unordered_map<long long,long long>mp;
        long long Arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>Arr[i];
            mp[Arr[i]]++;
        }
        if(wr>=w)
        {
            cout<<"YES"<<"\n";
        }
        else{
            w =w-wr;
            for(long long i=0;i<n;i++)
            {

                    int count = mp[Arr[i]];
                    if(count%2==0)
                    {
                        w-= count * Arr[i];
                    }
                    else
                    {
                        w-=(count-1)*Arr[i];
                    }
                    mp[Arr[i]]=0;
                
                if(w<=0)
                {
                    break;
                }
            }
            if(w<=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}

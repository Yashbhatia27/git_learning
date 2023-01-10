#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        vector<vector<int>> z;
        for(int i=0;i<n;i++)
        cin>>v[i];
        int z=k;
        int i=0;
        while(z--)
        {
            int a=i;
            vector<int> b;
            while(a<n)
            {
                b.push_back(v[a]);
                a+=k;
            }
            z.push_back(b);
            i++;
        }
        long long ans=0;
        for(auto pr:z)
        {
            ans+=*max_element(pr.begin(),pr.end());
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll N = 1e5+1234;
const ll mod = 1e9+7;

int main(){
    ll T;
    cin>>T;
    for (int t=1; t<=T; t++){
        ll x,y;
        cin>>x>>y;
        ll sec = 0;
        double har = 0, tor = 0;

        while(tor <= har){
            har+= (x/double(1<<sec));
            tor += y;
            sec++;
        }
        cout<<"Case #"<<t<<": "<<sec<<nl;
    }
}

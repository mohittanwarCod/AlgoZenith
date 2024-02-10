// s="011011100101..." find the index of kth one eg k = 3 ans = 5
// given q and k  q<=10^5 and k<=10^5;

#include <bits/stdc++.h>
using namespace std;
using lli = long long ;
string getbitsstr(int x){
    string curr = "";
    while(x){
        if(x%2) curr+='1';
        else curr+='0';
        x/=2;

    }
    if(curr=="") curr="0";
    reverse(curr.begin(),curr.end());
    return curr;

}
lli sum_of_bits(lli x){
    lli ans =0;
    lli tot = x+1;
    for(int i=0;i<60;i++){
        lli full = (tot/(1LL<<(i+1)));
        
        lli left = tot%(1LL<<(i+1));
        lli extra = max(left-(1LL<<(i)),0LL);
        ans += full*(1LL<<(i))+extra;
    }
  
    return ans;
}

lli find_kth_one(lli k){
    lli lo = 0;
    lli hi = k;
    lli ans = -1;
    while(lo<=hi){
        lli mid = (lo+hi)/2;
        if(sum_of_bits(mid)>=k){
            ans = mid;
            hi = mid-1;
        }else{
            lo=mid+1;
        }
    }
   
    return ans;
}
int get_kth_one_pos_in_num(int x,int k){
    int cnt = 0;
    string num = getbitsstr(x);
    for(int i=0;i<num.size();i++){
        if(num[i]=='1'){
            cnt++;
        }
        if(cnt==k){
            return i;
        }

    }

}
lli total_bits_till(lli x){
    lli len = 1;
    lli ans = 1; // 1 for 0
    lli num = 1;
    while(num<=x){
        lli sametill = (num*2)-1;
        if(sametill<=x){
            ans+= len*(sametill-num+1);
            num = sametill+1;
            len++;
        }else{
            ans+= len*(x-num+1);
            break;
        }
    }
    return ans;

}


void solve(){
    lli q;
    cin>>q;
    while(q--){
        lli k;
        cin>>k;
        lli num = find_kth_one(k);
        // cout<<" find_kth_one "<<num<<'\n';
        // cout<<num<<'\n';
        lli pos_in_num = k-sum_of_bits(num-1);
        // cout<<" pos_in_num " <<pos_in_num<<endl;

        lli index = get_kth_one_pos_in_num(num,pos_in_num);
        // cout<<" index "<<index<<'\n';
        // cout<<" total_bits_till "<<total_bits_till(num-1)<<endl;
        cout<<total_bits_till(num-1)+index<<'\n';




    }
}

signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
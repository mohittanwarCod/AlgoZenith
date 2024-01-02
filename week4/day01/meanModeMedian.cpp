#include <bits/stdc++.h>
using namespace std;
struct data_dashboard{
    int sum =0;
    int sumsq=0;
    double cnt=0;

    //mode
    map<int,int> freq;
    multiset<pair<int,int>> freq_order;

    //median
    multiset<int> low,high;

    void balance(){
        while(low.size()<high.size()){
            int x = *high.begin();
            high.erase(high.find(x));
            low.insert(x);
        }
        while(low.size()>high.size()+1){
              int x = *low.rbegin();
              low.erase(high.find(x));
              high.insert(x);

        }

    }

    void insert(int x){
        cnt++;
        sum+=x;
        sumsq+=x*x;

        // mode;
        if(freq_order.find(make_pair(freq[x],x)) != freq_order.end()){
            freq_order.erase(freq_order.find(make_pair(freq[x],x)));
        }
        freq[x]++;
        freq_order.insert(make_pair(freq[x],x));

        // median
       if(low.empty()) low.insert(x);
       else if(x<=(*low.rbegin())){
          low.insert(x);
       }else {
         high.insert(x);
       }

       balance();

    }
    void remove(int x){
         // remove mode
          if(freq_order.find(make_pair(freq[x],x)) != freq_order.end()){
            freq_order.erase(freq_order.find(make_pair(freq[x],x)));
        }
        freq[x]--;
        freq_order.insert(make_pair(freq[x],x));

        if(high.find(x)!=high.end()){
            high.erase(high.find(x));
        }else if(low.find(x)!=low.end()){
            low.erase(low.find(x));
        }

        balance();

    }
    double mean(){
        return sum/cnt;


    }
    double variance(){
       return sumsq/cnt-mean()*mean();  

    }
    double mode(){
        return  freq_order.rbegin()->second;

    }
    double median(){
        if((int)cnt%2){
            return *low.rbegin();
        }else{
           return (*low.rbegin()+*high.begin())/2.0;
        }


    }

};
void solve(){};
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int _t; cin>>_t;while(_t--)
      solve();
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
	// your code goes here
	int t; cin>> t;
	while(t--){
	    int W, H;
	    int x1, y1, x2, y2;
	    int w2, h2;
	    cin>> W >> H
	       >>x1>>y1>>x2>>y2
	       >> w2 >> h2;
	       
	    int w1 = x2 - x1;
	    int h1 = y2 - y1;
	    
	    if(w1 + w2 > W && h1+h2 > H){
	        cout<<-1<<"\n";
	    }else{
	        int w_cost =  numeric_limits<int>:: max();
	        int h_cost =  numeric_limits<int>:: max();
	        if(w1+w2 <= W){
	            w_cost = min(max(0, w2-x1),     
	                         max(0, x2 - (W - w2)));
	           
	        }
	        if(h1+h2 <= H){
	            h_cost = min(max(0, h2-y1),     
	                         max(0, y2 - (H - h2)));
	           
	        }
	        cout<<min(w_cost,h_cost)<<"\n";
	    }
	}
	return 0;
}

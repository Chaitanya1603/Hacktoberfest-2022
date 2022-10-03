#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n,temp;
	long long first_res,last_res;
	long long t;
	cin>>t;
	for(long long i=0;i<t;i++){
	    cin>>n;
	    temp=n;
	    if(temp>10){
	    first_res = temp%10;
	    while(temp > 10){
	        temp=temp/10;
	    }
	    last_res=temp;
	    cout<<abs(last_res - first_res)<<endl;
	    }
	    else if(temp == 10){
	        cout<<1<<endl;
	    }
	    else{
	    cout<<0<<endl;
	    }
	   }
	return 0;
}

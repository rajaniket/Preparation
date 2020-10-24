// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0#

#include <iostream>
#include<climits>
using namespace std;
int main() {
    int test_case;
    cin>>test_case;
	for(int a=0;a<test_case;a++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[1];
	    }
	    int sum=0;
	    int max_sum=INT_MIN;
	    for(int i=0;i<n;i++)
	   {
	       sum+=arr[i];
	       max_sum=max(max_sum,sum);
	       if(sum<0)
	       sum=0;
	       cout<<sum<<" "<<max_sum<<endl;
	   }
	   cout<<max_sum<<endl;
	}
}

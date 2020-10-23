// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0#

#include <iostream>
using namespace std;

void subarray_sum1(int *arr,int n,int sum){
        int left=0;
        int right=0;
        int continous_sum=0;
        while(left<=right&&right<=n){
            if(continous_sum==sum){
                cout<<left+1<<" "<<right<<endl;
                break;
            }
            else if(continous_sum<sum){
                if(right<n){   // at the last element right will become equal to n so for that case we do not have to consider this
                  continous_sum+=arr[right];
                }
                   right++;
            }
            else if(continous_sum>sum)
            {
                continous_sum-=arr[left];
                left++;
            }
        }
        if(right==n+1)
        cout<<"-1"<<endl;
}
// Same method but diff implementation 
void subarray_sum2(int *arr,int n,int sum)
    {
        int left=0,right=0,sub_sum=0;
        for(right=0;right<=n;right++){
            while(sub_sum>sum && left<right){
                sub_sum-=arr[left];
                left++;
            }
            if(sub_sum==sum){
                cout<<left+1<<" "<<right<<endl;
                return;
            }
            sub_sum+=arr[right];
        }

        cout<<"-1"<<endl;
    }
int main() {
    int Test_case;
    cin>>Test_case;
    while(Test_case!=0){
        int n,sum;
        cin>>n>>sum;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        subarray_sum1(arr,n,sum);
        Test_case--;
    }
}


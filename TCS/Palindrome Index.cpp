// https://www.hackerrank.com/challenges/palindrome-index/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
bool ispalindrome(int left,int right,string s){
while(left<=right){
if(s[left]!=s[right])
{
    return false;
}
left++;
right--;
}
return true;
}

int palindromeIndex(string s) {
int n=s.size();
int left=0;
int right=n-1;
while(left<=right){

if(s[left]!=s[right])  // if left pointer is not equal to right then we will check inner string is palindrome or not by skip one letter in left or right accordingly will return left or right index
{
   int l1_r=ispalindrome(left+1,right,s);
   if(l1_r)
   return left;
   else return right;
}
left++;
right--;
}
return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

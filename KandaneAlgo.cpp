#include<bits/stdc++.h>

using namespace std;
int maxSubArray(int a[],int n);
int main()
{
   int t,n;

   cin >> t;

   while(t--){

    cin >> n;

    int a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];              // array elements

     cout << maxSubArray(a,n) <<endl;

   }

     return 0;
}

int maxSubArray(int a[],int n){

  int sum = 0, m =INT_MIN;

 for(int i=0;i<n;i++){
      sum = sum + a[i];

      if(sum > m)
         m = sum;

      if(sum < 0)
        sum = 0;


 }
          return m;
}

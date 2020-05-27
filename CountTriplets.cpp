#include<bits/stdc++.h>

using namespace std;
int main(){


  int t , n;

   cin >> t; // for the test cases

   while(t--){

    cin >> n;

    int a[n];
    int m= 1;



    for(int i=0;i<n;i++)
     {
        cin >> a[i];   // for the elements of the array

      if(a[i]>m)
        m = a[i];

     }

      int mp[m+1]={0};

      for(int i=0;i<n;i++)
        mp[a[i]] = mp[a[i]] + 1;


        int ans =0;

/*
         // Case 1 :  0 , 0 , 0
         ans = ans + mp[0] * (mp[0]-1)*(mp[0]-2)/6;


         // Case 2 : 0,x,x
         for(int i=1;i<=m;i++)
          ans = ans + ( mp[0] * mp[i] * (mp[i]-1)/2);
*/
         // Case 3 : x , x , 2x

        for(int i=1;i<=m;i++)
            ans = ans + mp[i] * (mp[i]-1)/2 * mp[2*i];

         // Case 4 : x,y , x+y
         // iterate through the pairs (x,y)

         for(int i=1;i<=m;i++){

            for(int j=i+1;i+j<=m;j++) {
               ans = ans + (mp[i] * mp[j] * mp[i+j]);
            }

         }

           if(ans!=0)
               cout << ans << endl;

            else
              cout << -1 << endl;


   }

 return 0;
}

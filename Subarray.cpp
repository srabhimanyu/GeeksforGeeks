#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
	
	 int t;
	 
	 cin >> t;
	 
	 while(t--){
	 	
	 	ll N , S;
	 	
	 	cin >> N >> S;
	 	
	 	ll a[N];
	 	
	 	for(ll i=0;i<N;i++)
	 		cin >> a[i];
	 	
		 ll sum=0;
		 ll start = 0 , end=0;
		 ll found=0;	
	
	 
		 for(ll i=0;i<N;i++)
		 {
		 	

		 	 if(sum==S && found == 0) 	 	
		 	 {   
			  
			   end = i;
			   found = 1;
			    
			 }
			 
			 if(a[i]==S){
			 	
			 	end = i+1 ;
			    start = i;
			 	
			 	found = 1;
			 	
			 }
			 
		     
		     
			 if(sum < S)
			   sum = sum + a[i];
              		 	
		 	 if(sum > S)
		 	 {
		 	 //	cout << "i=" << i << "sum=" << sum << endl;
		 	
		 	    while(sum > S && start < i)
				  {
				     sum = sum - a[start];
					 start = start + 1;	
				  }	
			
			 }
		
		
		 }	
	 	     
	 	        
	 	        if(found==0)
	 	        {
	 	        	
	 	        	while(sum > S  &&  start < N) {
	 	        		
	 	               sum = sum - a[start]; 
							
	 	        		start = start + 1;
					 }
	 	        	
	 	             if(sum == S)
	 	             {
	 	              cout << start + 1 << " " << N << endl;	
					 }
					 
					 else
					  cout << -1 << endl;
					 
					 
				 }
	 	         
	 	        else {
	 	        	
			       start = start + 1;
				  cout << start <<" "<< end << endl;
	 	    
			     }
	 	
	 	
	 	
	 }
	
	
	
	
	
	return 0;
}

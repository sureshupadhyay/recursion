Print Subset Sum to K
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print them in different lines.

#include<cmath>
using namespace std;

void printSubsetSumToK(int input[], int n, int k) {
   int b[n],i;
  
     for(i=0;i<=pow(2,n)-1;i++)
        {
            int j;
           for(j=0;j<n;j++)
           {
               b[j]=0;
           }
        int kk,temp,sum;
      kk=n-1;
       
        temp=i;
        sum=0;
       
        while(temp!=0)
        {
            b[kk--]=temp%2;
            temp=temp/2;
        }
       
       
        for(j=0;j<n;j++)
        {
          if(b[j]==1)
            {
            sum=sum+input[j];
         }
        }
      //cout<<sum<<endl;
       
       if(sum==k)
       {
    
        for(j=0;j<n;j++)
        {
            if(b[j]==1)
            {
                
           cout<<input[j]<<" ";
            
            }
        }
         cout<<endl;
   

         
       }
        
        }
    
           
           
}

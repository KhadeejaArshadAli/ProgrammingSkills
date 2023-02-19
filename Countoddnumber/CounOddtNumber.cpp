//Given two non-negative integers low and high.
// Return the count of odd numbers between low and high (inclusive).

 

// Example 1:

// Input: low = 3, high = 7
// Output: 3
// Explanation: The odd numbers between 3 and 7 are [3,5,7].
// Example 2:

// Input: low = 8, high = 10
// Output: 1
// Explanation: The odd numbers between 8 and 10 are [9].
 
#include <iostream>
using namespace std;


    int countOdds(int low, int high) {
        int count=0;
      
        for (int i = low; i <=high; i++){
            if (i%2!=0){
                count++;
                
            }
        }
       
         return count;
        
    }

int main(){
int low,high;
  cout<<"Enter the starting Number of your range: ";
  cin>>low;
  cout<<"Enter the ending Number of your range: ";
  cin>>high;
  cout<<"The total number of odd numbers within the given range are: ";
  cout<<countOdds(low,high);
  return 0;

}
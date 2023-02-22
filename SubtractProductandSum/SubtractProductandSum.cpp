//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15
// Example 2:

// Input: n = 4421
// Output: 21
// Explanation: 
// Product of digits = 4 * 4 * 2 * 1 = 32 
// Sum of digits = 4 + 4 + 2 + 1 = 11 
// Result = 32 - 11 = 21
#include <iostream>
using namespace std;
int subtractProductAndSum(int n){
    int sum,res,digits=0;
    int product=1;
     while (n != 0) 
		{  digits=n%10;      //234%10=4    //23%10=3   /2%10=2
            sum += digits;   //0+4         //4+3       2+3+4
            product*=digits;//1*4          //4*3       4*3*2
            n /= 10;        //234/10=23.4   //23/10=2  2/10=0
            //but only the int part will be saved due to the datatype
        }
        res=product-sum;
        return res;



    }
int main(){
    cout<<"TEST CASE 1"<<endl;
    int n1=234;
    cout<<subtractProductAndSum(n1);
    cout<<"TEST CASE 2"<<endl;
    int n2=4421;
    cout<<subtractProductAndSum(n2);
    return 0;
}

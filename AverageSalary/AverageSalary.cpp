// //You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

// Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.
// Example 1:
// Input: salary = [4000,3000,1000,2000]
// Output: 2500.00000
// Explanation: Minimum salary and maximum salary are 1000 and 4000 respectively.
// Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500
// Example 2:
// Input: salary = [1000,2000,3000]
// Output: 2000.00000
// Explanation: Minimum salary and maximum salary are 1000 and 3000 respectively.
// Average salary excluding minimum and maximum salary is (2000) / 1 = 2000

 #include <algorithm>//for min_element and max_element
#include <iostream>
using namespace std;
#include <numeric>//necessary for accumulate function
 double average(vector<int>& salary) {
 
        int n = salary.size();
        double sum = accumulate(salary.begin(), salary.end(), 0.0);//this functions sums the whole vector
       int min_salary = *min_element(salary.begin(), salary.end());//finds the minimum value
     int max_salary = *max_element(salary.begin(), salary.end());//finds the maximum value
        return (sum - min_salary - max_salary) / (n - 2);//sum will subtract the two value divide by the number of elements left except the min and max
    }
    
    int main(){
         cout<<"TEST CASE 1"<<endl;
         vector<int> Salary1={4000,3000,1000,2000};
         cout<<average(Salary1)<<endl;
          cout<<"TEST CASE 2"<<endl;
         vector<int> Salary2={1000,2000,3000};
         cout<<average(Salary2);
         return 0;
    }
/*
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
You may return any answer array that satisfies this condition.

Example 1:
Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

Constraints:
1 <= A.length <= 5000
0 <= A[i] <= 5000
*/

#include <vector>
#include <iostream>
#include <sstream>
std::vector<int> sortArrayByParity(std::vector<int>& A)
{
   std::vector<int> result(A.size());
   int even=0,odd=result.size()-1;
   for(int i=0;i<A.size();i++)
   {
       if(A[i]%2==0)
       {
           result[even++]=A[i];
       }
       else
       {
           result[odd--]=A[i];
       }
   }
   return result;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers. If there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=5000)
      if(input >=0 && input<=5000)
        numbers.push_back(input);
  std::cout << "the array after sorting based on parity is " << '\n';
  numbers=sortArrayByParity(numbers);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 24ms */

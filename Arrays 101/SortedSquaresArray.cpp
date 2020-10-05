/* Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.



Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]


Note:

1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A is sorted in non-decreasing order.
*/
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

std::vector<int> sortedSquares(std::vector<int>& A)
{
    std::vector<int> result;
   for(int i=0;i< A.size();i++)
   {
       result.push_back(A[i]*A[i]);
   }
    std::sort (result.begin(),result.end());
    return result;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers between -10000 and 10000 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input <=10000 && input>=-10000)
        numbers.push_back(input);
  std::cout << "the number of numbers with even number of digits are " << '\n';
  numbers = sortedSquares(numbers);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 116ms */

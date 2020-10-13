/*
Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
Note that elements beyond the length of the original array are not written.
Do the above modifications to the input array in place, do not return anything from your function.

Example 1:
Input: [1,0,2,3,0,4,5,0]
Output: null
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Example 2:
Input: [1,2,3]
Output: null
Explanation: After calling your function, the input array is modified to: [1,2,3]

Contraints:
1 <= arr.length <= 10000
0 <= arr[i] <= 9

*/

#include <vector>
#include <iostream>
#include <sstream>
void duplicateZeros(std::vector<int>& arr)
{
   std::vector<int> dupArr = std::vector<int>(arr.size());
   int i=0,j=0;
  while (i<arr.size()&& j<arr.size())
  {
      dupArr[j++] = arr[i];
      if(arr[i]==0 && j<arr.size())
      {
         dupArr[j++] =0;
      }
      i++;
  }
   arr=dupArr;
   dupArr.clear();
   dupArr.shrink_to_fit();
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers between 0 and 9 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input <=9 && input>=0)
        numbers.push_back(input);
  std::cout << "the array after duplicating Zeroes and keeping the same size is " << '\n';
  numbers = duplicateZeros(numbers);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 8ms */

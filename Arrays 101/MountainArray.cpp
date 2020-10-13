/*
Given an array A of integers, return true if and only if it is a valid mountain array.
Recall that A is a mountain array if and only if:
A.length >= 3
There exists some i with 0 < i < A.length - 1 such that:
A[0] < A[1] < ... A[i-1] < A[i]
A[i] > A[i+1] > ... > A[A.length - 1]

Example 1:
Input: [2,1]
Output: false

Example 2:
Input: [3,5,5]
Output: false

Example 3:
Input: [0,3,2,1]
Output: true

Contraints:
0 <= A.length <= 10000
0 <= A[i] <= 10000

*/

#include <vector>
#include <iostream>
#include <sstream>
bool validMountainArray(std::vector<int>& A)
{
    bool peak=false;
    if(A.size()<3)
        return false;
    for(int i=1;i<A.size();i++)
    {
        if(!peak)
        {
            if(A[i-1]<A[i])
                continue;
            else if(A[i-1] == A[i])
            {
                return false;
            }
            else
            {
                if(i==1)
                    return false;
                peak = true;
                continue;
            }
        }
        else
        {
            if(A[i-1]>A[i])
                continue;
            else
            {
                return false;
            }
        }
    }
    return peak;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers between 0 and 10000 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input >=0 && input<=10000)
        numbers.push_back(input);
  std::cout << "the array " <<validMountainArray(numbers)?"is ": "isn't "<<"a mountain array" << '\n';
  return 0;
}
/* this solution was 56ms */

/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

Example 1:
Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]

Constraints:
1 <= arr.length <= 10^4
1 <= arr[i] <= 10^5
*/

#include <vector>
#include <iostream>
#include <sstream>
std::vector<int> replaceElements(std::vector<int>& arr)
{
    int i;
    std::pair<int,int> MaxAndInd(-1,-1);
    for(i=0; i<arr.size()-1;i++)
    {
        if(MaxAndInd.second<=i)
        {
         MaxAndInd = make_pair(-1,-1);
            for(int j=i+1;j<arr.size();j++)
            {
                if(MaxAndInd.first<arr[j])
                {
                    MaxAndInd = make_pair(arr[j],j);
                }
            }
        }
        arr[i] = MaxAndInd.first;
    }
    arr[i]=-1;
    return arr;
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
    while (stream >> input && numbers.size()<=10000)
      if(input >=1 && input<=100000)
        numbers.push_back(input);
  std::cout << "the array after replacing each element with the largest on the right is " << '\n';
  numbers=replaceElements(numbers);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 24ms */

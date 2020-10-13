/*
Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in O(n).

Example 1:
Input: [3, 2, 1]
Output: 1
Explanation: The third maximum is 1.

Example 2:
Input: [1, 2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.

Example 3:
Input: [2, 2, 3, 1]
Output: 1
Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.

*/

#include <vector>
#include <iostream>
#include <sstream>
int thirdMax(vector<int>& nums)
{
  map<int,int> max;
    bool IntMinExists =false;
    max.insert(pair<int,int>(1,INT_MIN));
    max.insert(pair<int,int>(2,INT_MIN));
    max.insert(pair<int,int>(3,INT_MIN));
   for(int i=0;i<nums.size();i++)
    {
       IntMinExists = nums[i]==INT_MIN || IntMinExists;
        if(nums[i]>=max[3])
        {
            if(nums[i]>max[2])
            {
                if(nums[i]>max[1])
                {
                    max[3]=max[2];
                    max[2]=max[1];
                    max[1]=nums[i];
                }
                else if(nums[i]<max[1])
                {
                    max[3]=max[2];
                    max[2]=nums[i];
                }
            }
            else if(nums[i]<max[2])
            {
                max[3]=nums[i];
            }
        }
    }
    if((IntMinExists && max[2]!=INT_MIN)|| (!IntMinExists && max[3]!=INT_MIN))
    {
        return max[3];
    }
    else
    {
       return max[1];
    }
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers. If there are invalid numbers they will be discarded. If there are less than 3 distinct numbers the largest will be displayed." << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input >=INT_MIN && input<=INT_MAX)
        numbers.push_back(input);
  std::cout << "the 3rd largest number is " << thirdMax(numbers)<< '\n';
  return 0;
}
/* this solution was 24ms */

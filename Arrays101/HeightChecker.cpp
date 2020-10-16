/*

Students are asked to stand in non-decreasing order of heights for an annual photo.
Return the minimum number of students that must move in order for all students to be standing in non-decreasing order of height.
Notice that when a group of students is selected they can reorder in any possible way between themselves and the non selected students remain on their seats.

Example 1:
Input: heights = [1,1,4,2,1,3]
Output: 3
Explanation:
Current array : [1,1,4,2,1,3]
Target array  : [1,1,1,2,3,4]
On index 2 (0-based) we have 4 vs 1 so we have to move this student.
On index 4 (0-based) we have 1 vs 3 so we have to move this student.
On index 5 (0-based) we have 3 vs 4 so we have to move this student.

Example 2:
Input: heights = [5,1,2,3,4]
Output: 5

Example 3:
Input: heights = [1,2,3,4,5]
Output: 0

Constraints:

1 <= heights.length <= 100
1 <= heights[i] <= 100

*/

#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

int heightChecker(std::vector<int>& heights)
{
    std::vector<int> sorted = heights;
    int cnt = 0;
    std::sort(sorted.begin(),sorted.end());
    for(int i=0;i<heights.size();i++)
        if(heights[i]!=sorted[i])
            cnt++;
    return cnt;
}

int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers between 1 and 10^5 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=100)
      if(input <=100 && input>=1)
        numbers.push_back(input);
  std::cout << "the minimum number of students to be moved are " << heightChecker(numbers)<< '\n';
  return 0;
}

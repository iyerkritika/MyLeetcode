#include "HashTables.h"

bool containsDuplicate(std::vector<int>& nums)
{
    std::unordered_set<int> set;
    for(int i=0;i<nums.size();i++)
    {
        if(set.count(nums[i])>0)
        {
            return true;
        }
        set.insert(nums[i]);
    }
    return false;
}

int firstUniqChar(std::string s)
{
    std::unordered_map<char,int> letters;
    int i;
     for (i=0;i<s.length();++i)
     {
           letters[s[i]]++;
     }
    for(i=0;i<s.length();i++)
    {
        if(letters[s[i]]==1)
            return  i;
    }
    return -1;
}

bool isHappy(int n)
{
  int x=0;
  while(n>0)
  {
     x= x+((n%10) * (n%10));
     n/=10;
  }
  if(x<10)
  {
       return happy.find(x)!=happy.end();
  }
  return isHappy(x);
}

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2)
{
    std::set<int> list;
    std::vector<int> result;
    for (int i=0;i<nums1.size();i++)
    {
        list.insert(nums1[i]);
    }
    for(int i=0;i<nums2.size();i++)
    {
        if(list.find(nums2[i])!=list.end())
        {
            result.push_back(nums2[i]);
            list.erase(nums2[i]);
        }
    }
    return result;
}

int singleNumber(std::vector<int>& nums)
{
    int res = 0,len = nums.size()-1;
    for(int i=0;i<=len/2;i++)
    {
        if(i != len-i)
            res = res ^ nums[i] ^ nums[len -i];
        else
            res = res ^ nums[i];
    }
    return res;
}

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::map<int,int> table;
    for (int i=0; i<nums.size();i++)
    {
        if(table.find(target-nums[i]) == table.end())
            table[nums[i]] =i;
        else
            return {i, (table.find(target-nums[i]))->second};
    }
    return {};
}

bool HashTablesMains(int ProgNumber)
{
  std::vector<int> numbers;
  switch (ProgNumber)
  {
    case 1:
    {
      numbers = InputVector("Enter a list of numbers. Invalid numbers will be discared \n");
      std::cout << "The list contains duplicates : " <<std::to_string(containsDuplicate(numbers)) << '\n';
      break;
    }
    case 2:
    {
      std::string str;
      std::cout << "Enter a string" << '\n';
      std::cin>>str;
      int ind;;
      ind = firstUniqChar(str);
      if(ind>-1)
        std::cout << "The first first unique character in the string is" << str[ind]<< '\n';
      else
        std::cout << "No unique character" << '\n';
      break;
    }
    case 3:
    {
      int number;
      std::cout << "Enter a number to check if it is a happy number or not" << '\n';
      std::cin >> number;
      std::cout << "The number is a happy number : " <<std::to_string(isHappy(number)) << '\n';
      break;
    }
    case 4:
    {
      numbers = InputVector("Enter a list of numbers. Invalid numbers will be discared \n");
      std::vector<int> numbers2 = InputVector("Enter another list of numbers. Invalid numners will be discarded \n");
      std::cout << "the Intersection of these vectors is: " << '\n';
      displayVector<int>(intersection(numbers,numbers2));
      break;
    }
    case 5:
    {
      numbers = InputVector("Enter a list of numbers where every number appears 2 times except one that appears only once \n",-30000,30000,30000);
      std::cout << "the number that appears only once is " <<singleNumber(numbers) << '\n';
      break;
    }
    case 6:
    {
      int sum;
      numbers = InputVector("Enter a list of numbers. Invalid numbers will be discarded \n",-10^9,10^9,10^5);
      std::cout << "Enter a sum you would like to get to" << '\n';
      std::cin >> sum;
      std::cout << "The indices of the elements that get the sum are " << '\n';
      displayVector<int>(twoSum(numbers,sum));
      break;
    }
    default:
      return false;
  }
  return true;
}

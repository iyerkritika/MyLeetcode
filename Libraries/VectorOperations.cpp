#include "VectorOperations.h"

std::vector<int> InputVector(std::string inputMsg, int min,int max,int len)
{
  std::vector<int> v;
  int input,length;
  std::string line;
  std::cout<< inputMsg;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input && length<len)
  {
    if(input <=max && input>=min)
    {
      v.push_back(input);
      length ++;
    }
  }
  return v;
}

void getIntIP(int &inp,int min,int max)
{
  int input;
  std::string line;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  if(stream >> input)
    if(input>=min && input<=max)
      inp = input;
}

void displayVector(std::vector<int> result,int len)
{
  if(len == -1)
    len = result.size();
  for (int i=0;i<len;i++)
  {
    std::cout << result[i]<<' ';
  }
  std::cout << '\n';
}

std::vector<int> findDisappearedNumbers(std::vector<int>& nums)
{
   for(int i=0;i<nums.size();i++)
   {
     if(nums[abs(nums[i])-1]>0)
     {
         nums[abs(nums[i])-1] = -1 * nums[abs(nums[i])-1];
     }
   }
  std::vector<int> result;
  for(int i=0;i<nums.size();i++)
   {
     if(nums[i] > 0)
     {
         result.push_back(i+1);
     }
   }
  return result;
}

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

int findNumbers(std::vector<int>& nums)
{
  int result =0;
  for(int i=0;i<nums.size();i++)
  {
      if(nums[i]<=9)
      {
          continue;
      }
      if(nums[i]<=99)
      {
         result ++;
          continue;
      }
      if(nums[i]<=999)
      {
          continue;
      }
      if(nums[i]<=9999)
      {
          result++;
          continue;
      }
      if(nums[i]<=99999)
      {
          continue;
      }
      result++;
  }
  return result;
}

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

int findMaxConsecutiveOnes(std::vector<int>& nums)
{
    int result =0;
    int current = 0;
    for (int i=0; i<nums.size();i++)
    {
        if(nums[i]== 1)
        {
            current ++;
        }
        else
        {
            if(current>result)
            {
                result = current;
            }
            current =0;
        }
    }
    if(current>=0 && current>result)
    {
        return current;
    }
    return result;
}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
  int i=0,j=0;
  while (i<m+j && j<n)
  {
      if(nums1[i]<=nums2[j])
          i++;
      else
      {
          for(int k=m+n-1;k>=i+1;k--)
          {
              nums1[k]=nums1[k-1];
          }
          nums1[i++]=nums2[j++];
      }
  }
  while(j<n && i<m+n)
  {
      nums1[i++]=nums2[j++];
  }
}

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

void moveZeroes(std::vector<int>& nums)
{
    int j=0;
    for (int i=0;i<nums.size();i++)
    {
       if(nums[i]!=0)
           nums[j++] = nums[i];
    }
    for(int i=nums.size()-1;i>=j;i--)
    {
        nums[i]=0;
    }
}

int removeDuplicates(std::vector<int>& nums)
{
    if(nums.empty())
        return 0;
    int j=0;
    for (int i=1;i<nums.size();i++)
    {
       if(nums[j]!=nums[i])
           nums[++j] = nums[i];
    }
    return j+1;
}

std::vector<int> replaceElements(std::vector<int>& arr)
{
    int i;
    std::pair<int,int> MaxAndInd(-1,-1);
    for(i=0; i<arr.size()-1;i++)
    {
        if(MaxAndInd.second<=i)
        {
         MaxAndInd = std::make_pair(-1,-1);
            for(int j=i+1;j<arr.size();j++)
            {
                if(MaxAndInd.first<arr[j])
                {
                    MaxAndInd = std::make_pair(arr[j],j);
                }
            }
        }
        arr[i] = MaxAndInd.first;
    }
    arr[i]=-1;
    return arr;
}

int removeElement(std::vector<int>& nums, int val)
{
    int size = nums.size();
    for (int i=0;i<size;i++)
    {
        if(nums[i] == val)
        {
            for(int k=i;k<size-1;k++)
            {
                nums[k] = nums[k+1];
            }
            size--;
            i--;
        }
    }
    return size;
}

std::vector<int> sortedSquares(std::vector<int>& A)
{
  std::vector<int> result(A.size());
  int beg=0,end=A.size()-1,fill=A.size()-1;
  while(beg<=end)
  {
      if(abs(A[end])<abs(A[beg]))
      {
          result[fill--]=A[beg]*A[beg];
          beg++;
      }
      else
      {
        result[fill--]=A[end]*A[end];
          end--;
      }
  }
  return result;
}

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

int thirdMax(std::vector<int>& nums)
{
  std::map<int,int> max;
  bool IntMinExists =false;
  max.insert(std::pair<int,int>(1,INT_MIN));
  max.insert(std::pair<int,int>(2,INT_MIN));
  max.insert(std::pair<int,int>(3,INT_MIN));
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

std::vector<int> productExceptSelf(std::vector<int>& nums)
{
  std::vector<int> ans(nums.size(),1);
   for(int i=1;i<nums.size();i++)
   {
       ans[i]=ans[i-1]*nums[i-1];
   }

   int right=nums[nums.size()-1];
   for(int i=nums.size()-2;i>=0;i--)
   {
       ans[i]=ans[i]*right;
       right=right*nums[i];
   }

   return ans;
}

int minCostToMoveChips(std::vector<int>& position)
{
    int even=0 , odd=0;
    for(int i=0;i<position.size();i++)
    {
        if(position[i]%2 ==0)
            even ++;
        else
            odd++;
    }
    return std::min(even,odd);
}

int smallestDivisor(std::vector<int>& nums, int threshold)
{
    int sum,hi=nums[nums.size()-1],lo = 1,mid;
    while(lo<=hi)
    {
        sum=0;
        mid = (lo+hi)/2;
        for(int j=0;j<=(nums.size()-1)/2;j++)
        {
            sum+=(int)ceil(nums[j]*1.0/mid);
            if(j<nums.size()-1-j)
            {
                sum+=(int)ceil(nums[nums.size()-1-j]*1.0/mid);
            }
        }
        if(sum<=threshold)
        {
            hi=mid-1;
        }
        else
        {
            lo = mid+1;
        }
    }
    return lo;
}

bool VectorMains(int ProgNumber)
{
  std::vector<int> numbers;
  int len = -1;
  switch(ProgNumber)
  {
    case 1:
    {
      numbers = InputVector("Enter a vector of size n with numbers between 1 and n \n ",1);
      numbers = findDisappearedNumbers(numbers);
      std::cout << "The Disappeared Numbers are" << '\n';
      /* this solution was 88ms */
      break;
    }
    case 2:
    {
      numbers = InputVector("Enter a vector of numbers of max length 10000 with numbers between 0 and 9. If there are invalid numbers they, will be discarded \n ",0,9,10000);
      std::cout << "The array after duplicating Zeroes and keeping the same size is " << '\n';
      duplicateZeros(numbers);
      /* this solution was 8ms */
      break;
    }
    case 3:
    {
      numbers = InputVector("Enter a vector of numbers of max length 500 with numbers between 1 and 10^5. If there are invalid numbers they, will be discarded \n",1,100000,500);
      std::cout << "The number of numbers with even number of digits are " << findNumbers(numbers)<< '\n';
      /* this solution was 8ms */
      return true;
    }
    case 4:
    {
      numbers = InputVector("Enter a vector of numbers of max length 100 with numbers between 1 and 100. If there are invalid numbers they, will be discarded \n",1,100,100);
      std::cout << "The minimum number of students to be moved are " << heightChecker(numbers)<< '\n';
      /* this solution was 4ms */
      return true;
    }
    case 5:
    {
      numbers = InputVector("Enter a vector of max length 10000 with only ones and zeroes. If there are invalid numbers they, will be discarded \n",0,1,10000);
      std::cout << "The maximum number of 1s in a row is " << findMaxConsecutiveOnes(numbers)<< '\n';
      /* this solution was 72ms */
      return true;
    }
    case 6:
    {
      int m,n;
      numbers= InputVector("Enter a sorted vector of max length 10000 with numbers between -10^9 and 10^9. If there are invalid numbers they, will be discarded \n",-1*pow(10,9),pow(10,9),10000);
      std::vector<int> numbers2 = InputVector("Enter another sorted vector of max length 10000 of numbers between -10^9 and 10^9. If there are invalid numbers they, will be discarded \n",-1*pow(10,9),pow(10,9),10000);
      m = numbers.size();
      n = numbers2.size();
      numbers.resize(m+n);
      std::cout << "The array after merge sort is" << '\n';
      merge(numbers,m,numbers2,n);
      /* this solution was 4ms */
      break;
    }
    case 7:
    {
      numbers = InputVector("Enter a vector of max length 10000 with numbers between 0 and 10000. If there are invalid numbers they, will be discarded \n",0,10000,10000);
      std::string descision = validMountainArray(numbers)?"is ": "isn't ";
      std::cout << "The array " << descision << "a mountain array \n";
      /* this solution was 56ms */
      return true;
    }
    case 8:
    {
      numbers = InputVector("Enter a vector of numbers of max length 10000. If there are invalid numbers they, will be discarded \n",INT_MIN,INT_MAX,10000);
      std::cout << "The array after moving Zeroes and keeping the same size is " << '\n';
      moveZeroes(numbers);
      /* this solution was 8ms */
      break;
    }
    case 9:
    {
      numbers = InputVector("Enter a vector of sorted numbers of max length 10000. If there are invalid numbers they, will be discarded \n",INT_MIN,INT_MAX,10000);
      std::cout << "The array after removing duplicates is " << '\n';
      len = removeDuplicates(numbers);
      break;
      /* this solution was 16ms */
    }
    case 10:
    {
      int val;
      numbers = InputVector("Enter a vector of sorted numbers of max length 100000. If there are invalid numbers they, will be discarded \n",INT_MIN,INT_MAX,10000);
      std::cout << "Please enter the value to remove from this" << '\n';
      getIntIP(val);
      std::cout << "The array after removing duplicates is " << '\n';
      len = removeElement(numbers,val);
      break;
      /* this solution was 0ms */
    }
    case 11:
    {
      numbers = InputVector("Enter a vector of numbers from 1 to 100000. If there are invalid numbers they, will be discarded \n",1,100000,10000);
      std::cout << "The array after replacing each element with the largest on the right is " << '\n';
      numbers=replaceElements(numbers);
      break;
      /* this solution was 24ms */
    }
    case 12:
    {
      numbers = InputVector("Enter a vector of max length 5000 with numbers between 0 and 5000. If there are invalid numbers they, will be discarded \n",0,5000,5000);
      std::cout << "The array sorted by parity is " << '\n';
      numbers = sortArrayByParity(numbers);
      break;
      /* this solution was 16ms */
    }
    case 13:
    {
      numbers = InputVector("Enter a vector of numbers between -10000 and 10000 If there are invalid numbers they, will be discarded \n",-10000,10000,10000);
      std::cout << "the array of sorted Squares is " << '\n';
      numbers = sortedSquares(numbers);
      break;
      /* this solution was 44ms */
    }
    case 14:
    {
      numbers = InputVector("Enter a vector of numbers of max length 10000. If there are invalid numbers they, will be discarded. If there are less than 3 distinct numbers the largest will be displayed. \n",INT_MIN,INT_MAX,10000);
      std::cout << "the 3rd largest number is " << thirdMax(numbers)<< '\n';
      return true;
      /* this solution was 24ms */
    }
    case 15:
    {
      numbers = InputVector("Enter a vector of length 10000 with numbers greater than 0. If there are invalid numbers they, will be discarded\n",0,INT_MAX,10000);
      std::cout << "The array after multiplying all elements except nth " << '\n';
      numbers = productExceptSelf(numbers);
      break;
      /* this solution was 44ms */
    }
    case 16:
    {
      numbers = InputVector("Enter a vector of length 100 with numbers between 1 and 10^9 representing the coins on the ith column. Invalid numbers will be discarded \n",1,pow(10,9),100);
      std::cout << "The minimum cost required to make all the coins on the same column is " << minCostToMoveChips(numbers) << '\n';
      return true;
      /* this solution was 0ms */
    }
    case 17:
    {
      numbers = InputVector("Enter a vector of max length 50000 with numbers between 1 and 10^6. If there are invalid numbers they, will be discarded. \n",1,pow(10,6),50000);
      int threshold;
      std::cout << "Enter a threshold between the vector length and 10^6" << '\n';
      getIntIP(threshold,numbers.size(),pow(10,6));
      std::cout << "The smallest divisor to get a sum under the threshold is" << smallestDivisor(numbers,threshold)<< '\n';
      return true;
      /* this solution was 56ms */
    }
    default:
      return false;
  }
  displayVector(numbers,len);
  return true;
}

#include "VectorOperations.h"

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
            result = std::max(result,current);
            current =0;
        }
    }
    if(current>=0 && current>result)
    {
        return current;
    }
    return result;
}

void flipUpd(int &cur,int &flipped,int i)
{
   if(flipped<0)
   {
       cur++;
       flipped =i;
   }
   else
   {
       cur = i-flipped;
       flipped = i;
   }
}

int findMaxConsecutiveOnesFlipped(std::vector<int>& nums)
{
   int maxi=0,cur=0,flipped = -1;
   if(nums.size()==1)
       return 1;
   for(int i=0;i<nums.size();i++)
   {
       if(nums[i] == 1)
       {
           cur++;
       }
       if(nums[i] == 0)
       {
           if(i==0  || i== nums.size()-1)
           {
               int ele = i==0?1:nums.size()-2;
               if(nums[ele] == 0)
               {
                   continue;
               }
               else
               {
                   flipUpd(cur,flipped,i);
               }
           }
           else
           {
               if(nums[i-1]==0 && nums[i+1]==0)
               {
                   cur = 0;
                   flipped = -1;
               }
               else
               {
                  flipUpd(cur,flipped,i);
               }
           }
       }
       maxi = std::max(maxi,cur);
   }
   return std::max(1,maxi);
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

int shortestDistance(std::vector<std::string>& words, std::string word1, std::string word2)
{
    int w1 = -1, w2= -1;
    int minDis = words.size();
    for (int i=0;i<words.size();i++)
    {
       if(words[i] == word1)
       {
           w1 = i;
       }
       else if(words[i] == word2)
       {
            w2 = i;
       }
        if(w1 > -1 && w2 >-1 )
            minDis = std::min(minDis,std::abs(w1 - w2));
    }
    return minDis;
}

bool canPlaceFlowers(std::vector<int>& flowerbed, int n) 
{
  if (n == 0)
    return true;
  if(flowerbed.size()==1)
    return flowerbed[0] == 0;
  for(int i=0;i<flowerbed.size();i++)
  {
    if(flowerbed[i] == 0)
    {
      if(i==0  || i== flowerbed.size()-1)
      {
        int ele = i==0?1:flowerbed.size()-2;
        if(flowerbed[ele] == 0)
        {
          n--;
          flowerbed[i] = 1;
        }
      }
      else
      {
        if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
        {
          n--;
          flowerbed[i] = 1;
        }
      }
    }
  }
  return n<=0;    
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
    case 6:
    {
      numbers = InputVector("Enter a vector of max length 10000 with only ones and zeroes. If there are invalid numbers they, will be discarded \n",0,1,10000);
      if(ProgNumber ==5)
      {
        std::cout << "The maximum number of 1s in a row is " << findMaxConsecutiveOnes(numbers)<< '\n';
        /* this solution was 72ms */
      }
      else
      {
        std::cout << "The maximum number of 1s in a row having flipped at most one 0 is" <<findMaxConsecutiveOnesFlipped(numbers) <<'\n';
        /* this solution was 72ms */
      }
      return true;
    }
    case 7:
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
    case 8:
    {
      numbers = InputVector("Enter a vector of max length 10000 with numbers between 0 and 10000. If there are invalid numbers they, will be discarded \n",0,10000,10000);
      std::string descision = validMountainArray(numbers)?"is ": "isn't ";
      std::cout << "The array " << descision << "a mountain array \n";
      /* this solution was 56ms */
      return true;
    }
    case 9:
    {
      numbers = InputVector("Enter a vector of numbers of max length 10000. If there are invalid numbers they, will be discarded \n",INT_MIN,INT_MAX,10000);
      std::cout << "The array after moving Zeroes and keeping the same size is " << '\n';
      moveZeroes(numbers);
      /* this solution was 8ms */
      break;
    }
    case 10:
    {
      numbers = InputVector("Enter a vector of sorted numbers of max length 10000. If there are invalid numbers they, will be discarded \n",INT_MIN,INT_MAX,10000);
      std::cout << "The array after removing duplicates is " << '\n';
      len = removeDuplicates(numbers);
      break;
      /* this solution was 16ms */
    }
    case 11:
    {
      int val;
      numbers = InputVector("Enter a vector of sorted numbers of max length 100000. If there are invalid numbers they, will be discarded \n",INT_MIN,INT_MAX,10000);
      std::cout << "Please enter the value to remove from this" << '\n';
      getIP(val);
      std::cout << "The array after removing duplicates is " << '\n';
      len = removeElement(numbers,val);
      break;
      /* this solution was 0ms */
    }
    case 12:
    {
      numbers = InputVector("Enter a vector of numbers from 1 to 100000. If there are invalid numbers they, will be discarded \n",1,100000,10000);
      std::cout << "The array after replacing each element with the largest on the right is " << '\n';
      numbers=replaceElements(numbers);
      break;
      /* this solution was 24ms */
    }
    case 13:
    {
      numbers = InputVector("Enter a vector of max length 5000 with numbers between 0 and 5000. If there are invalid numbers they, will be discarded \n",0,5000,5000);
      std::cout << "The array sorted by parity is " << '\n';
      numbers = sortArrayByParity(numbers);
      break;
      /* this solution was 16ms */
    }
    case 14:
    {
      numbers = InputVector("Enter a vector of numbers between -10000 and 10000 If there are invalid numbers they, will be discarded \n",-10000,10000,10000);
      std::cout << "the array of sorted Squares is " << '\n';
      numbers = sortedSquares(numbers);
      break;
      /* this solution was 44ms */
    }
    case 15:
    {
      numbers = InputVector("Enter a vector of numbers of max length 10000. If there are invalid numbers they, will be discarded. If there are less than 3 distinct numbers the largest will be displayed. \n",INT_MIN,INT_MAX,10000);
      std::cout << "the 3rd largest number is " << thirdMax(numbers)<< '\n';
      return true;
      /* this solution was 24ms */
    }
    case 16:
    {
      numbers = InputVector("Enter a vector of length 10000 with numbers greater than 0. If there are invalid numbers they, will be discarded\n",0,INT_MAX,10000);
      std::cout << "The array after multiplying all elements except nth " << '\n';
      numbers = productExceptSelf(numbers);
      break;
      /* this solution was 44ms */
    }
    case 17:
    {
      numbers = InputVector("Enter a vector of length 100 with numbers between 1 and 10^9 representing the coins on the ith column. Invalid numbers will be discarded \n",1,pow(10,9),100);
      std::cout << "The minimum cost required to make all the coins on the same column is " << minCostToMoveChips(numbers) << '\n';
      return true;
      /* this solution was 0ms */
    }
    case 18:
    {
      numbers = InputVector("Enter a vector of max length 50000 with numbers between 1 and 10^6. If there are invalid numbers they, will be discarded. \n",1,pow(10,6),50000);
      int threshold;
      std::cout << "Enter a threshold between the vector length and 10^6" << '\n';
      getIP(threshold,numbers.size(),pow(10,6));
      std::cout << "The smallest divisor to get a sum under the threshold is" << smallestDivisor(numbers,threshold)<< '\n';
      return true;
      /* this solution was 56ms */
    }
    case 19:
    {
      std::vector<std::string> stringVec = InputVectorString("Enter a vector of strings.\n");
      std::string s1,s2;
      std::cout << "Enter a string to find in this vector" << '\n';
      getIP(s1);
      std::cout << "Enter another word to find in this vector but it should be different that the first string to find." << '\n';
      getIP(s2);
      std::cout << "The minimum distance between these 2 words is: " << shortestDistance(stringVec,s1,s2)<< '\n';
      return true;
    }
    case 20:
    {
      numbers = InputVector("Enter a vector of max length 20000 made up of only 0s and 1s. 1s means a plant is potted. Invalid numbers will be discared.\n",0,1,20000);
      int input;
      std::cout<<"Enter the number of plants you would like to pot.\n";
      getIP(input,0,numbers.size());
      std::string descision = canPlaceFlowers(numbers,input)?"is ": "isn't ";
      std::cout<<"It "<<descision<<" possible to pot these plants\n";
    }
    default:
      return false;
  }
  displayVector<int>(numbers,len);
  return true;
}

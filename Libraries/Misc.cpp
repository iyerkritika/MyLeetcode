#include "Misc.h"

std::string get_num(int num_h,int num_t,int num_ones)
{
  std::string word;
  // this check is to see if there is any number in the hundreds tens or ones place fo cases like 1000 or 123000 etc
  if(num_h==0 && num_t==0&& num_ones==0)
  return "";
  // if there is something in those places we parse them
  if (num_h!=0)
  {
    switch(num_h)
    {
      case 1: {word+="One Hundred ";break;}
      case 2: {word+="Two Hundred ";break;}
      case 3: {word+="Three Hundred ";break;}
      case 4: {word+="Four Hundred ";break;}
      case 5: {word+="Five Hundred ";break;}
      case 6: {word+="Six Hundred ";break;}
      case 7: {word+="Seven Hundred ";break;}
      case 8: {word+="Eight Hundred ";break;}
      case 9: {word+="Nine Hundred ";break;}
    }
  }
  //words are different for 10 - 19
  if(num_t==1)
  {
    switch(num_ones)
    {
      case 0: {word+="Ten ";break;}
      case 1: {word+="Eleven ";break;}
      case 2: {word+="Twelve ";break;}
      case 3: {word+="Thirteen ";break;}
      case 4: {word+="Fourteen ";break;}
      case 5: {word+="Fifteen ";break;}
      case 6: {word+="Sixteen ";break;}
      case 7: {word+="Seventeen ";break;}
      case 8: {word+="Eighteen ";break;}
      case 9: {word+="Nineteen ";break;}
    }
    return word;
  }
  if(num_t>1)
  {
    switch(num_t)
    {
      case 2: {word+="Twenty ";break;}
      case 3: {word+="Thirty ";break;}
      case 4: {word+="Forty ";break;}
      case 5: {word+="Fifty ";break;}
      case 6: {word+="Sixty ";break;}
      case 7: {word+="Seventy ";break;}
      case 8: {word+="Eighty ";break;}
      case 9: {word+="Ninety ";break;}
    }
  }

  switch(num_ones)
  {
    case 1: {word+="One ";break;}
    case 2: {word+="Two ";break;}
    case 3: {word+="Three ";break;}
    case 4: {word+="Four ";break;}
    case 5: {word+="Five ";break;}
    case 6: {word+="Six ";break;}
    case 7: {word+="Seven ";break;}
    case 8: {word+="Eight ";break;}
    case 9: {word+="Nine ";break;}
  }
  return word;
}

std::string numberToWords(int num)
{
    std::string words;
    int part[10],prev=0,place;
    // edge case and reduces computation time for this
    if(num==0)
        return"Zero";
    // iterating through the numbers now (10 is max becasue that is the max value we are inputting)
    for(place=10;place>0;place--)
    {
      // converting the int to an array
       part[place-1]=num/(pow(10,place-1));
       num-=part[place-1]*(pow(10,place-1));
    }
    if(part[9]!=0)
    {
      // special Billion case because we cannot have anything avout 2 billion we do not need to parse anything but the ones place for billions
        words+=get_num(0,0,part[9]);
        words+="Billion ";
    }
    for(int i=8;i>1;i-=3)
    {
      //parsing the rest of the string with Hundreds , tens and ones places
        words+=get_num(part[i],part[i-1],part[i-2]);
        if(get_num(part[i],part[i-1],part[i-2])!="")
        {
            if(i==8)
                words+="Million ";
            if(i==5)
                words+= "Thousand ";
        }
    }
    // erasing the space at the end
    words.erase(words.end()-1);
    return words;
}

int compareVersion(std::string version1, std::string version2)
{
  std::size_t found1,found2;
  if(version1==version2)
      return 0;
  found1=version1.find('.');
  found2=version2.find('.');
  while(found1!=std::string::npos||found2!=std::string::npos)
   {
      if(std::stoi(version1.substr(0,found1))>std::stoi(version2.substr(0,found2)))
          return 1;
      else if(std::stoi(version1.substr(0,found1))<std::stoi(version2.substr(0,found2)))
          return -1;
      else
      {
          version1 = found1 == std::string::npos? "0" :version1.substr(++found1);
          version2 = found2 == std::string::npos? "0" :version2.substr(++found2);
          found1=version1.find('.');
          found2=version2.find('.');
      }
   }
  if(std::stof(version1)==std::stof(version2))
    return 0;
  else  if(std::stof(version1)>std::stof(version2))
      return 1;
  else
    return -1;
}

int maxPower(std::string s)
{
    int result =1;
    int current = 1;
    char curChar = s[0];
    for (int i=1; i<s.length();i++)
    {
        if(s[i]==curChar)
        {
            current ++;
        }
        else
        {
            if(current>result)
            {
                result = current;
            }
            current =1;
            curChar = s[i];
        }
    }
    if(current>=1 && current>result)
    {
        return current;
    }
    return result;
}

int kthFactor(int n, int k) 
{
  if(n==1)
    return 1;
  std::set<int> factors;
  for(int i=1;i<=n/2;i++)
  {
    if(n%i == 0)
    {
      factors.insert(i);
      factors.insert(n/i);
    }
  }
  if(k>factors.size())
  {
    return -1;
  }
  else
  {
    std::set<int>::iterator it=factors.begin();
    for(int i=1; i<k; i++)
    {
      it++;
    }
    return *it;
  }
}

std::string decodeAtIndex(std::string S, int K) 
{
  long totallength = 0;
  int i = 0;
  for (; i < S.size(); i++) 
  {
    if (isdigit(S[i])) 
    {
      totallength *= (S[i] - '0');
    } else 
    {
      totallength++;
    }
    if (totallength >= K) 
    {
      break;
    }
  }
  std::string res;
  for (; i >= 0; i--) 
  {
    K %= totallength;
    if (K == 0 && isalpha(S[i])) 
    {
      res.push_back(S[i]);
      return res;
    }
    if (isdigit(S[i])) 
    {
      totallength /= (S[i] - '0');
    } else 
    {
      totallength--;
    }
  }
  return res;
}

bool MiscMains(int ProgNumber)
{
   switch (ProgNumber)
   {
     case 1:
     {
       int number;
       std::cout << "Enter a number from 1 to 2^31-1" << '\n';
       getIP(number,1);
       std::cout << "The number in words is:" << '\n'<<numberToWords(number)<<"\n";
       break;
     }
     case 2:
     {
       std::string s1,s2;
       int answer;
       std::cout << "Enter first version number.\n" ;
       getIP(s1);
       std::cout << "Enter second version number.\n" ;
       getIP(s2);
       answer = compareVersion(s1,s2);
       if(answer==0)
       {
         std::cout<<"The version numbers are the same. \n";
       }
       else if(answer == 1)
       {
         std::cout<<"Version 1 is bigger. \n";
       }
       else
       {
         std::cout<<"Version 2 is bigger. \n";
       }
       break;
     }
     case 3:
     {
       std::string s;
       std::cout << "Enter a string of less than 500 characters." << '\n';
       getIP(s);
       std::cout << "the maximum length of the same letter in the string is "<<maxPower(s.length()>500?s.substr(0,500):s) << '\n';
       break;
     }
     case 4:
     {
        int n,k;
        std::cout<<"Enter a number between 1 and 1000.\n";
        getIP(n,1,1000);
        std::cout<<"Enter the number k to get the kth factor of the number entered.\n";
        getIP(k,1,n);
        std::cout<< "The "<<k<<"th factor of "<<n<<"is :"<< kthFactor(n,k)<<"\n";
        break;
     }
     case 5:
     {
      std::string s;
      int inp;
      std::cout<<"Enter a string made up of letters(lowercase) and numbers(2 to 9) of max length 100 and min length 2. It should start with a letter. The numbers will repeat the current tape x number of times. \n";
      getIP(s);
      std::cout<<"Enter the number letter in the tape you want to know. \n";
      getIP(inp,1,pow(10,9));
      std::cout<<"The letter at the spot is"<< decodeAtIndex(s,inp)<<'\n';
      break;
     }
     default:
      return false;
   }
   return true;
}

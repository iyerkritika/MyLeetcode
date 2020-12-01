#include "Common.h"

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
    inp = input;
  input = std::max(min,input);
  input = std::min(max,input);
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

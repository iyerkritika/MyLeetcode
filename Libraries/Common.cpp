#include "Common.h"

std::vector<int> InputVector(std::string inputMsg, int min,int max,int len)
{
  std::vector<int> v;
  int length;
  int input;
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

std::vector<std::string> InputVectorString(std::string inputMsg)
{
  std::vector<std::string> v;
  std::string input;
  std::string line;
  std::cout<< inputMsg;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input)
    v.push_back(input);
  return v;
}

template<class R>
void getIPStream(R &ip)
{
  R input;
  std::string line;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  if(stream >> input)
    ip = input;
}

void getIP(int &inp,int mini,int maxi)
{
  int input;
  getIPStream<int>(input);
  input = std::max(mini,input);
  input = std::min(maxi,input);
}

void getIP(std::string &inp)
{
  std::string input;
  getIPStream<std::string>(input);
}

void displayVectorOfVector(std::vector<std::vector<int>> v)
{
  for (int i=0;i<v.size();i++)
  {
    displayVector<int>(v[i]);
  }
  std::cout << '\n';
}

template<class V>
void displayVector(std::vector<V> result,int len)
{
  if(len == -1)
    len = result.size();
  for (int i=0;i<len;i++)
  {
    std::cout << result[i]<<' ';
  }
  std::cout << '\n';
}

template void displayVector<int>(std::vector<int> result,int len);
template void displayVector<std::string>(std::vector<std::string> result,int len);

using namespace std;
#include <array>
#include <vector>
#include <iostream>

std::array<int, 2> pairProduct(std::vector<int> numbers, int target) {
  // todo
  array <int,2> prodPlaces={0,0};
  
  
  for (int i=0; i<numbers.size();i++)
  {
    for (int j=i+1; j<numbers.size(); j++)
    {
      
      if (numbers[i]*numbers[j]==target)
      {
        prodPlaces[0]=i;
        prodPlaces[1]=j;
      }
    }
  }
  return prodPlaces;
}

int main()
{
  vector<int> info={2,3,5,7,11,13};
  pairProduct(info, 14);
}
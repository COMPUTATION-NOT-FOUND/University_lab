#include <iostream>
#include <ranges>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int start,end,sum,size;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  
  cin>>start>>end;
  
  auto subrange = arr| std::ranges::views::take(end+1)|std::ranges::views::drop(start);
  
  
  if(!std::ranges::empty(subrange))
  {
  for(auto it: subrange){
      cout<<it;
  }
  sum=accumulate(ranges::begin(subrange),ranges::end(subrange),0);
  size=ranges::size(subrange);
  cout<<"sum is"<< sum << "and size is" << size;
  }
  else {
      cout<<"empty";
  }
  
}

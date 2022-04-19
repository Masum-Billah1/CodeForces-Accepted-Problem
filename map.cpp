// map::begin/end
#include <iostream>
#include <map>

int main ()
{
  std::map<int,int> mymap;

  mymap[10] = 100;
  mymap[5] = 200;
  mymap[20] = 300;

  // show content:
  for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}

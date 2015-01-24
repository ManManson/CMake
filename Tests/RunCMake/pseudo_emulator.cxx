#include <iostream>

int main(int argc, char * argv[] )
{
  std::cout << "Command:";
  for(int ii = 1; ii < argc; ++ii )
    {
    std::cout << " " << argv[ii];
    }
  std::cout << std::endl;

  return 42;
}

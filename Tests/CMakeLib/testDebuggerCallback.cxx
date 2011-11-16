#include <iostream>
#include <string>
#include <vector>

#include "cmake.h"
#include "cmListFileCache.h"
#include "cmSystemTools.h"

void PrintingInfoDebuggerCallback(cmListFileFunction * lff, void * clientData )
{
  std::cout << "Name: " << lff->Name << '\n';
  std::cout << "FilePath: " << lff->FilePath << '\n';
  std::cout << "Line: " << lff->Line << '\n';
  typedef std::vector<cmListFileArgument> ArgumentsType;
  std::cout << "Arguments: ";
  for( ArgumentsType::const_iterator it = lff->Arguments.begin();
    it != lff->Arguments.end();
    ++it )
    {
    if( it->Quoted )
      {
      std::cout << '"' << it->Value << "\" ";
      }
    else
      {
      std::cout << it->Value << ' ';
      }
    }
  std::cout << std::endl;
}

int main(int argc, char** argv)
{
  cmSystemTools::FindExecutableDirectory("cmake");
  std::vector<std::string> args;
  for( unsigned int i = 0; i < argc; ++i )
    {
    args.push_back( argv[i] );
    }
  cmake cm;
  cm.SetDebuggerCallback( &PrintingInfoDebuggerCallback );
  return cm.Run( args );
}

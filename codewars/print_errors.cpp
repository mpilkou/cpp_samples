#include <string>
#include <map>
#include <iterator>

#include <iostream>

class Printer
{
public:
    static std::string printerError(const std::string &s){
      std::string::const_iterator it = s.begin();
      int counter = 0;
      while (it != s.end()){
        if(*it < 97 || *it >109){
          counter++;
        }
        it++;
      }
      return std::to_string(counter) + "/" + std::to_string(s.size());
    };
};

/*
class Printer
{
public:
    static std::string printerError(const std::string &s)
    {
      return std::to_string(count_if(s.begin(), s.end(), [](char c){ return c>'m';})) + "/" + std::to_string(s.size());
    }
};
*/


int main(int argc, char **){
    Printer p1;
    std::cout << p1.printerError("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") <<  "\t 3/56"<<std::endl;
    
}
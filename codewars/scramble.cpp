#include <iostream>
#include <map>

bool scramble(const std::string& s1, const std::string& s2){
  //your code here
  std::map<char, int> table;
  for(auto i : s1){
    table[i]++;
  }
  
  for(auto i: s2){
    //result = (table[std::tolower(x)]==1)? "(":")";
    if(table[i]==0){
      return false;
    }
    table[i]--;
  }
  return true;
}

int main(int argc, char **){
    std::cout << scramble("rkqodlw", "world")<< "\ttrue" << std::endl;
    std::cout << scramble("cedewaraaossoqqyt", "codewars")<< "\ttrue" << std::endl;
    std::cout << scramble("katas", "steak")<< "\tfalse" << std::endl;
    std::cout << scramble("scriptjavx", "javascript")<< "\tfalse" << std::endl;
    std::cout << scramble("scriptingjava", "javascript")<< "\ttrue" << std::endl;
    std::cout << scramble("scriptsjava", "javascript")<< "\ttrue" << std::endl;
    std::cout << scramble("javscripts", "javascript")<< "\tfalse" << std::endl;
    std::cout << scramble("aabbcamaomsccdd", "commas")<< "\ttrue" << std::endl;
    std::cout << scramble("commas", "commas")<< "\ttrue" << std::endl;
    std::cout << scramble("sammoc", "commas")<< "\ttrue" << std::endl;
}
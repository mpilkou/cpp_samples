#include <string>
#include <map>
#include <iterator>

#include <iostream>


std::map<int, char> declaration1(){
  std::map<int, char> numerals;
  numerals[1] = 'I';
  numerals[5] = 'V';
  numerals[10]= 'X';
  numerals[50]= 'L';
  numerals[100]= 'C';
  numerals[500]= 'D';
  numerals[1000]= 'M';
  return numerals;
}

std::map<char, int> declaration2(){
  std::map<char, int> numerals;
  numerals['I'] = 1;
  numerals['V'] = 5;
  numerals['X'] = 10;
  numerals['L'] = 50;
  numerals['C'] = 100;
  numerals['D'] = 500;
  numerals['M'] = 1000;
  return numerals;
}

std::string solution1(int number){
  // convert the number to a roman numeral
  std::string result = "";

  std::map<int, char> test = declaration1();

  std::map<int, char>::iterator it = test.end();
  //auto it = test.begin();
  
  while(it != test.begin()){
    it--;
    if(number > it->first){
        while(number - it->first >= 0){
            result += it->second;
            number -= it->first;
        }
    }
    
  }

  return result;
}


std::string solution2(int number){
  // convert the number to a roman numeral
  std::string result = "";

  std::map<int, char> test = declaration1();

  std::map<int, char>::iterator it = test.end();
  //auto it = test.begin();
  
  while(it != test.begin()){
    it--;
    if(number > it->first){
        while(number - it->first >= 0){
            result += it->second;
            number -= it->first;
        }
    }
    
  }

  return result;
}

int main(int argc, char **){
    std::cout << solution1(182) <<  "\t CLXXXII"<<std::endl;
    std::cout << solution1(1990)<<  "\t MCMXC"<<std::endl;
    std::cout << solution1(1875)<<  "\t MDCCCLXXV"<<std::endl;

    std::cout << solution2(182) <<  "\t CLXXXII"<<std::endl;
    std::cout << solution2(1990)<<  "\t MCMXC"<<std::endl;
    std::cout << solution2(1875)<<  "\t MDCCCLXXV"<<std::endl;
}
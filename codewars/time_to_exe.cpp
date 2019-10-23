#include <iostream>

#include <vector>
#include <regex>
#include <iterator>
#include <map>

int countSmileys(std::vector<std::string> arr)
{
  std::vector<std::string>::iterator it = arr.begin();
  int count = 0;
  while(it != arr.end()){
    char begin = *((*it).begin());
    char middle = *((*it).begin()+1);
    char end = *((*it).end() - 1);
    
    bool eyes = (begin == ':' || begin == ';');
    bool nose = (middle == 'D' || middle == ')' || middle == '-' || middle == '~');
    bool smile = (end == 'D' || end == ')');
    if(eyes && nose && smile){
        count++;
    };
    it++;
  }
  return count;
}

int countSmileys2(std::vector<std::string> arr)
{
  int count = 0;
  std::regex smiles_regex("[:|;](-|~)?[)|D]");
  
  for (auto &smile : arr) {
    if (std::regex_match(smile, smiles_regex))
      count++;
  }

  return count;
}


double test(){   
    std::vector<std::string> arr = {":>", ";-D", ":D", ":>", ";(", ";~)", ";)"};
    countSmileys(arr);
    countSmileys({":>", ";-D", ";~)", ";~)", ":>", ";)", ":>"});
    countSmileys({":->", ":)", ":->", ";~)", ";)", ";->", ";>"});
    countSmileys({":>", ":~)", ";-D", ":~>", ":->", ":~)", ":oD"});
}

double test2(){   
    std::vector<std::string> arr = {":>", ";-D", ":D", ":>", ";(", ";~)", ";)"};
    countSmileys2(arr);
    countSmileys2({":>", ";-D", ";~)", ";~)", ":>", ";)", ":>"});
    countSmileys2({":->", ":)", ":->", ";~)", ";)", ";->", ";>"});
    countSmileys2({":>", ":~)", ";-D", ":~>", ":->", ":~)", ":oD"});
}

int main(int argc, char **){
    
    clock_t begin = clock();
    test();
    clock_t end = clock();
    double time = (double(end - begin) / CLOCKS_PER_SEC);
    
    
    clock_t begin2 = clock();
    test2();
    clock_t end2 = clock();
    double time2 = (double(end2 - begin2) / CLOCKS_PER_SEC);


    std::cout << time << std::endl;
    std::cout << time2 << std::endl;
    std::cout << (time2 - time) << std::endl;
}
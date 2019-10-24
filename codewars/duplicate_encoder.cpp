#include <iostream>
#include <map>

std::string duplicate_encoder(const std::string& word){
  
  std::map<char,int> map;
  std::string result = "";
  auto it = word.begin();
  char c;
  while(it != word.end()){
    c = std::tolower(*it);
    auto find = map.find(c);
    if(find != map.end()){
      find->second++;
    }else{
      map.insert({c,1});
    }
    it++;
  }

  it = word.begin();
  while(it != word.end()){
    c = std::tolower(*it);
    auto find = map.find(c);
    if(find != map.end()){
      if(find->second == 1){
        result.append(1,'(');
      }else{
        result.append(1,')');
      }
    }else{
      return 0;
    }
    it++;
  }
  return result;
}

int main(int argc, char **){
    std::cout << duplicate_encoder("din") << "\t(((" <<std::endl;
    std::cout << duplicate_encoder("recede") << "\t()()()" <<std::endl;
    std::cout << duplicate_encoder("Success") << "\t)())())" <<std::endl;
    std::cout << duplicate_encoder("CodeWarrior") << "\t()(((())())" <<std::endl;
    std::cout << duplicate_encoder("Supralapsarian") << "\t)()))()))))()(" <<std::endl;
    std::cout << duplicate_encoder("(( @") << "\t))((" <<std::endl;
    std::cout << duplicate_encoder(" ( ( )") << "\t)))))(" <<std::endl;
}
#include <string>
#include <iostream>
#include <sstream>

std::string highAndLow(const std::string& numbers){
    //your code here

    std::stringstream ss(numbers);
    int i = 0;
    int max = stoi(numbers);
    int min = max;


    while(ss >> i){
        if(i > max)
            max = i;
        else if(i < min)
            min = i;
    }
    

   //for(std::string::iterator it = numbers.begin(); it != numbers.end();it++)
    
    return std::to_string(max)+ " " + std::to_string(min);
}

int main(int argc, char **){
    std::cout << highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4") << std::endl;
}
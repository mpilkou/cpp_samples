#include <map>
#include <iterator>

#include <iostream>




#include <bits/stdc++.h> 
using namespace std; 
  
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

bool isPrime1(int num) {
  // your code here..
  int current = 5;
    
  if(num <= 1){
    return false;
  }
  if (num <= 3){
    return true;
  }

  if (num % 2 == 0 || num % 3 == 0) 
      return false; 
  
  while(current < num)
  {
    if(num % current == 0){
      return false;
    }
    current+=6;
  }
  return true;
}

bool isPrime2(int num) {
  // your code here..
  int current = 2;
    
  if(num <= 1){
    return false;
  }
  
  while(current < num)
  {
    if(num % current == 0){
      return false;
    }
    current++;
  }
  return true;
}


int main(int argc, char **){




    clock_t begin = clock();
    for (int i = 0; i <300; i++){
      isPrime(i);
    }
    clock_t end = clock();
    double time = (double(end - begin) / CLOCKS_PER_SEC);
    
    clock_t begin1 = clock();
    for (int i = 0; i <300; i++){
      isPrime1(i);
    }
    clock_t end1 = clock();
    double time1 = (double(end1 - begin1) / CLOCKS_PER_SEC);

    clock_t begin2 = clock();
    for (int i = 0; i <300; i++){
      isPrime2(i);
    }
    clock_t end2 = clock();
    double time2 = (double(end2 - begin2) / CLOCKS_PER_SEC);

    std::cout << time  << std::endl;
    std::cout << time1 << std::endl;
    std::cout << time2 << std::endl;

    std::cout << (time1 > time) << std::endl;
    std::cout << (time2 > time) << std::endl;

    
}
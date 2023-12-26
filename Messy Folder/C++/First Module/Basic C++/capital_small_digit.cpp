#include <iostream>

int main(){
 char x;
 std::cin >> x;
 int asciiValue = x; 

 if(asciiValue >= 48 && asciiValue <= 57)
 {
  std::cout << "IS DIGIT" << std::endl; 
 } else if(asciiValue >= 65 && asciiValue <= 90) {
  std::cout << "ALPHA" << std::endl;
  std::cout << "IS CAPITAL" << std::endl;
 } else if(asciiValue >= 97 && asciiValue <= 122) {
  std::cout << "ALPHA" << std::endl;
  std::cout << "IS SMALL" << std::endl;
 }

 return 0;
}
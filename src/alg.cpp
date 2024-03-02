// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t num){
  if (num <= 1){
    return false;
  }

    for (int i = 2; i * i <= num; i++){
      if (num % i == 0){
        return false;
      }
    }
      return true;
    uint64_t nextPrime(uint64_t n){
      if (n <= 0){
        return 0;
    }
uint64_t count = 0;
  uint64_t num = 2;
    while (count < n){
     if (isPrime(num)){
       count++;
     }
     num++;
   }
int main(){
uint64_t n;
std::cout << 'Введите номер простого числа';
std::cin >> n;
uint64_t result = nPrime(n);
std::cout << 'Простое число под номером ' << n << 'равно ' << result << std::endl;
return 0;
}
 

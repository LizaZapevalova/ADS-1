// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (num <= 1){
      return false;
  }

  for (int i = 2; i * i <= num; i++){
      if (num % i == 0){
        return false;
      }
  }

  return true;
}

int checkPrime(uint64_t value) {
  while (true){
    num++;
    if (isPrime(num)){
      return num;
    }
}

// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value){
  if (num <= 1){
    return false;
  }
  uint64_t nPrime(uint64_t n){
    for (int i = 2; i * i <= num; i++){
      if (num % i == 0){
        return false;
      }
    }
    uint64_t nextPrime(uint64_t value){
      return true;
    }
     uint64_t sumPrime(uint64_t hbound){
       while (true){
         num++;
         if (isPrime(num)){
           return num;
         }
       }
     }

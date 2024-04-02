// Copyright 2021 NNTU-CS
#include <alg.h>
#include <iostream>
#include <cstdint>

int countPairs1(int *arr, int len, int value) {
  int summ = 0;
  for (int i = 0; i < len; ++i) {
    for (int j = i + 1; j < len; ++j) {
      if (value == arr[i] + arr[j]) {
        summ++;
      }
    }
  }
  return summ;
}
int countPairs2(int *arr, int len, int value) {
  int sum = 0;
  for (int i = 0; i < len; ++i) {
    for (int j = len - 1; j > i; --j) {
      if (value == arr[i] + arr[j]) {
        sum++;
          }
    }
  }
  return sum;
}
int countPairs3(int *arr, int len, int value) {
    int count = 0;
    int i = 0;
    while (i < len) {
        int number = value - arr[i];
        count = count + cbinsearch(&arr[i + 1], len - i - 1, number);
        i++;
    }
    return count;
}

/*
 * Copyright 2025 Albibenni
 * All rights reserved.
 */
#include <stdio.h>

int main(void) {
  int a[100];
  int sum = 0;

  for (int i = 0; i < 100; i++) {
    a[i] = i + 1;
  }

  for (int i = 0; i < 100; i++) {
    if (a[i] % 2 == 0) {
      sum += a[i];
    }
  }

  printf("Sum of arr is: %d\n", sum);

  return 0;
}

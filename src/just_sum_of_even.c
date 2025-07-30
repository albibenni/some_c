/*
 * Copyright 2025 Albibenni
 * All rights reserved.
 */
#include <stdio.h>
void do_sum(int *a, int *sum) {
  for (int i = 0; i < 100; i++) {
    if (a[i] % 2 == 0) {
      *sum += a[i];
    }
  }

  printf("Sum of arr is: %d\n", *sum);
}

void bit_op(int *a) {
  int sum[2] = {0, 0};
  for (int i = 0; i < 100; i++) {
    sum[a[i] & 1] += a[i];
  }

  printf("Bit operator -> even sum: %d and odd sum: %d\n", sum[0], sum[1]);
}

int main(void) {
  int a[100];
  int sum = 0;

  for (int i = 0; i < 100; i++) {
    a[i] = i + 1;
  }

  do_sum(a, &sum);
  int new_sum = 0;

  bit_op(a);

  return 0;
}

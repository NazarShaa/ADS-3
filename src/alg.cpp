// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0, right = size, temp = size/2, k = 0;
  while (temp != 0) {
    if (arr[temp] > value)
      right = temp;
    else 
      left = temp;
    temp /= 2;
  }
  for (int i = left; i < right; i++) {
    if (arr[i] == value)
      k++;
  }
  return k;
}


#include <stdio.h>
void displayNumbers(int num[2][2]);

int main() {
  int i, j, num[2][2];
  printf("Enter 4 numbers:\n");
  for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      scanf("%d", &num[i][j]);
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num);
  getchar();
  return 0;
}

void displayNumbers(int num[2][2]) {
  int i, j;
  printf("Displaying:\n");
  for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      printf("%d\n", num[i][j]);
      getchar();
    }
  }
}

//https://www.programiz.com/c-programming/c-pointers
//https://www.programiz.com/c-programming/c-arrays-functions

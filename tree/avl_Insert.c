#include<stdio.h>
#include<stdlib.h>

struct Node {
  int key;
  struct Node *left;
  struct Node *right;
  int height;
};

int max(int a, int b);

int height(struct Node *N){
  if(N == NULL)
    return 0;
  return N->height;
}

int main() {
  printf("%d", (int)NULL);
  return 0;
}

#include "../stdc++.h"
#include <string>
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
#define CHARACTERS 26
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

using namespace std;

struct TrieNode
{
  struct TrieNode *children[CHARACTERS];
  bool isLeaf;
};

int main() {
  printf("%d\n", CHAR_TO_INDEX('z'));
  return 0;
}

#include <stdio.h>

char put_five_for(char* x, int reps) {
  for (int i = 0; i < reps; i++) {
    puts(x);
  }
  return 0;
}

char put_five_while(char* x, int reps) {
  int i = 0;
  while (i < reps) {
    puts(x);
    i = i + 1;
  }
  return 0;
}

int main(int argc, char** argv) {
  put_five_for("Hello, World! For!", 5);
  put_five_while("Hello, World! While!", 5);
  return 0;
}

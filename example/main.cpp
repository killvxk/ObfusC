
[[mba]] int foo(int a) {
  return a * 2;
}

int main(int argc, char *argv[]) {
  int a = 1;
  int ret = 0;

  ret += foo(a);

  return ret;
}
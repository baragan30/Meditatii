void foo(int a, {int? b, int? c, required int d}) {
  print("$a $b $c $d");
}

void main() {
  foo(1, d: 9);
  foo(1, d: 2, b: 7);
}

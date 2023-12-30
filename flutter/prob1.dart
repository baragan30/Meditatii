///https://www.pbinfo.ro/probleme/489/afisare1

void main() {
  List<int> list = [7, 4, 9, 6, 2];
  int max = list[0];
  int pozMax = 0, pozMin = 0;
  for (int i = 1; i < list.length; i++) {
    int x = list[i];
    if (x > max) {
      max = x;
      pozMax = i;
    }
  }
  for (int i = pozMax; i <= pozMin; i++) {
    print(list[i]);
  }
}

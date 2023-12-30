void displayLast(List<int> list) {
  print(list[list.length - 1]);
}

void display(List<int> list) {
  String text = "";
  for (int i = 0; i < list.length; i++) {
    text = text + '${list[i]} ';
  }
  print(text);
}

void main() {
  display([1, 8, 3]);
  List<int> l1 = [29, 13];
  display(l1);
  l1.add(-234);
  l1.add(123);
  display(l1);
  for (int i = 1; i <= 100; i++) {
    l1.add(i);
  }
  display(l1);
}

List<int> list = [3];

void main() {
  list.add(Ceva());
  for (int i = 1; i <= 20; i++) {
    List<Ceva> toAdd = [];
    List<Ceva> toRemove = [];

    // Collect changes without modifying the original list
    for (Ceva c in list) {
      c.year++;
      if (c.year == 3) {
        toRemove.add(c);
      } else {
        toAdd.add(Ceva());
      }
    }

    // Apply collected changes
    list.addAll(toAdd);
    list.removeWhere((element) => toRemove.contains(element));

    print("year $i :${list.length} * 10 =  ${list.length * 15}");
  }
}

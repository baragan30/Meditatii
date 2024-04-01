class Animal {
  int nuberLegs;
  String? name;
  Animal({
    required this.nuberLegs,
    this.name,
  });
  void sayHello() {
    print('Hello fron ${name}');
  }
}

class Dog extends Animal {
  Dog({required super.name}) : super(nuberLegs: 4);
  @override
  void sayHello() {
    super.sayHello();
    print('Ham fron ${name}');
  }
}

void callHam(Animal animal) {
  animal.sayHello();
}

void f(int a, {required int b, int c = 0, int? d}) {}

void main() {
  Animal caine1 = Animal(nuberLegs: 4, name: "Rex");
  Animal caine2 = Dog(name: "Max");
  callHam(caine1);
  callHam(caine2);
}

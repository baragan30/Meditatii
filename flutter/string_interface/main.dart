import './screen.dart';
import './template.dart';

void function1() {
  Screen screen = Screen(
    width: 3,
    height: 4,
  );
  screen.drawBody();
  screen.display();
}

void function2() {
  Screen screen = Screen(
      width: 3,
      height: 4,
      body: Container(
        height: 2,
        width: 2,
        color: "Ana",
      ));
  screen.drawBody();
  screen.display();
}

void function3() {
  Screen screen = Screen(
    width: 4,
    height: 5,
    body: Column(
      children: [
        Container(
          color: "a",
          width: 3,
          height: 3,
          child: Container(
            color: "G",
            height: 2,
            width: 2,
          ),
        ),
        Container(
          color: "b",
          width: 2,
          height: 2,
        ),
      ],
    ),
  );
  screen.drawBody();
  screen.display();
}

void main() {
  // function1();
  // function2();
  function3();
}

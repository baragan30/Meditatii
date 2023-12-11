import 'dart:math';
import 'screen.dart';

class Container extends Widget {
  Container({
    this.width = 0,
    this.height = 0,
    this.color = "0",
    this.child,
  });
  int width;
  int height;
  String color;
  Widget? child;

  @override
  Space drawWidget(
      Function(int p1, int p2, String p3) drawPixel, Space maxSpace) {
    Space actualSpace = Space.fromMaxSpace(
      maxSize: maxSpace,
      width: width,
      height: height,
    );
    for (int y = actualSpace.yStart; y < actualSpace.yEnd; y++) {
      for (int x = actualSpace.xStart; x < actualSpace.xEnd; x++) {
        drawPixel(x, y, color);
      }
    }
    child?.drawWidget(drawPixel, actualSpace);
    return actualSpace;
  }
}

class Column extends Widget {
  Column({
    required this.children,
  });
  List<Widget> children;

  @override
  Space drawWidget(
      Function(int p1, int p2, String p3) drawPixel, Space maxSpace) {
    Space actualSpace = Space.fromMaxSpace(
      maxSize: maxSpace,
      width: 0,
      height: 0,
    );
    for (Widget child in children) {
      Space space = Space(
        maxSpace.xStart,
        actualSpace.yEnd,
        maxSpace.xEnd,
        maxSpace.yEnd,
      );
      space = child.drawWidget(drawPixel, space);
      actualSpace.xEnd = max(actualSpace.xEnd, space.xEnd);
      actualSpace.yEnd += space.yEnd;
    }
    return actualSpace;
  }
}

void main() {
  // Screen screen = Screen(
  //   width: 3,
  //   height: 4,
  //   body: Container(
  //     color: "c",
  //     width: 2,
  //     height: 3,
  //   ),
  // );
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

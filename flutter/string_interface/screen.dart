import 'dart:math';

class Space {
  Space(this.xStart, this.yStart, this.xEnd, this.yEnd);
  Space.fromMaxSpace(
      {required Space maxSpace, required int width, required int height})
      : xStart = maxSpace.xStart,
        yStart = maxSpace.yStart,
        xEnd = min(maxSpace.xEnd, maxSpace.xStart + width),
        yEnd = min(maxSpace.yEnd, maxSpace.yStart + height);

  int xStart, xEnd, yStart, yEnd;
  @override
  String toString() {
    String text = "($xStart $yStart) ($xEnd $yEnd)";
    return text;
  }
}

class Screen {
  Screen({
    required this.width,
    required this.height,
    this.body,
  }) : this.matrix = [
          for (int i = 0; i < height; i++)
            String.fromCharCodes([for (int i = 0; i < width; i++) 48])
        ];

  int width;
  int height;
  List<String> matrix;
  Widget? body;
  void drawPixel(int x, int y, String color) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
      String line = matrix[y];
      matrix[y] = line.replaceRange(x, x + 1, color.substring(0, 1));
    }
  }

  void drawBody() {
    body?.drawWidget(
      drawPixel,
      Space(0, 0, width, height),
    );
  }

  void display() {
    for (int i = 0; i < matrix.length; i++) {
      print(matrix[i]);
    }
  }
}

abstract class Widget {
  Widget();
  Space drawWidget(Function(int, int, String) drawPixel, Space maxSpace);
}

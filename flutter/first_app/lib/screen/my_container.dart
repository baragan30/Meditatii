import 'package:flutter/material.dart';

class MyContainer extends StatelessWidget {
  MyContainer({required this.text});
  String text;

  @override
  Widget build(BuildContext context) {
    return Container(
      margin: const EdgeInsets.all(15.0),
      padding: const EdgeInsets.all(5.0),
      decoration: BoxDecoration(border: Border.all(color: Colors.blueAccent)),
      child: Text(
        text,
        style: TextStyle(fontSize: 30),
      ),
    );
  }
}

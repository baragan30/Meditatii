import 'package:first_app/screen/my_container.dart';
import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';

//Container, Column, Row, Spacer, Expanded, SizedBox,
class MainScreen extends StatelessWidget {
  const MainScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Column(
        // mainAxisAlignment: MainAxisAlignment.start,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          Container(
            alignment: Alignment.centerLeft,
            child: MyContainer(text: "Zero"),
          ),
          Spacer(),
          MyContainer(text: "First"),
          MyContainer(text: "Second"),
          MyContainer(text: "Third"),
          Spacer()
        ],
      ),
    );
  }
}

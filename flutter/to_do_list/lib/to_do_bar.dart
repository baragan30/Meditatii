import 'package:flutter/material.dart';

class ToDoBar extends StatelessWidget {
  const ToDoBar({required this.text, required this.onDelete});
  final String text;
  final VoidCallback onDelete;

  @override
  Widget build(BuildContext context) {
    return Container(
      margin: EdgeInsets.symmetric(horizontal: 10, vertical: 5),
      padding: EdgeInsets.symmetric(horizontal: 15),
      alignment: Alignment.center,
      decoration: const BoxDecoration(
        borderRadius: BorderRadius.all(
          Radius.circular(30),
        ),
        color: Colors.blue,
      ),
      child: Row(mainAxisAlignment: MainAxisAlignment.spaceBetween, children: [
        Text(text),
        IconButton(
            onPressed: () {
              onDelete();
            },
            icon: Icon(Icons.delete))
      ]),
    );
  }
}

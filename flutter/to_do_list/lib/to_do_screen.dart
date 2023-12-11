import 'package:flutter/material.dart';
import 'package:to_do_list/to_do_bar.dart';

class ToDoScreen extends StatefulWidget {
  const ToDoScreen({super.key});

  @override
  State<ToDoScreen> createState() => _ToDoScreenState();
}

class _ToDoScreenState extends State<ToDoScreen> {
  final TextEditingController _controller = TextEditingController();
  final List<String> _list = <String>[for (int i = 0; i < 100; i++) "text $i"];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Column(children: [
        Row(
          children: [
            Expanded(
              child: TextField(
                controller: _controller,
              ),
            ),
            IconButton(
              onPressed: () {},
              icon: const Icon(Icons.add_outlined),
            )
          ],
        ),
        Expanded(
          child: ListView(
            children: [
              for (String text in _list)
                ToDoBar(
                    text: text,
                    onDelete: () {
                      print(text);
                    })
            ],
          ),
        )
      ]),
    );
  }
}

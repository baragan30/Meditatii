    char source[] = "abcdefghij";
    char destination[50] = "123456789";
    strncpy(destination + 1, source + 2, 5);
    destination[8] = '\0';
    cout << destination << endl;
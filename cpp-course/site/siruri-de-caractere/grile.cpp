   //grila
   
   char s[50] = "Bercea Ana\0Popescu";
   char id[50] = "";
   char *p ;
   p = strchr(s, ' ') + 1;
   p = strtok(p," ");
   p = strtok(NULL, " ");
   cout << s << "\n";
   cout << p;



      char s[50] = "Bercea Ana Popescu";
   char id[50] = "";
   char *p ;
   p = strstr(s, "A") + 1;
   strtok(p," ");
   strcat(p, "123");
   cout << s << "\n";
   cout << p;
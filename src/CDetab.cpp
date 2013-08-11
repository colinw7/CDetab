#include <cstdio>

int
main(int, char **)
{
  int char_no = 0;

  int c = fgetc(stdin);

  while (c != EOF) {
    if (c == '\n')
      char_no = -1;

    if (c == '\t') {
      int tab_spaces = 8 - (char_no % 8);

      while (tab_spaces > 0) {
        fputc(' ', stdout);

        tab_spaces--;

        char_no++;
      }
    }
    else {
      fputc(c, stdout);

      char_no++;
    }

    c = fgetc(stdin);
  }

  return 0;
}

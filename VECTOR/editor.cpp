#include <iostream>
#include <string>

class string
{
    int length;
    char* contents;
public:
    int get_length() { return length; }
    char *get_contents() { return contents; } 
    ~string() { delete contents;
}

class edit_string::public string
{
    int cursor;
public:
    int get_cursor_pos() { return cursor; }
    void move_cursor(int how_much) {cursor = how_much; }
}
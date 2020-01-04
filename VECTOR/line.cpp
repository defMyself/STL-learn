#include <iostream>
#include <fstream>
#include <stdlib.h>

int main()
{
    fstream oufile;
    fstream infile;
    infile.open("abc.txt",ios::in);
    if(!infile)
    {
        cout << "abc.txt can't open" << endl;
        abort();
    }
    outfile.open("abc1.txt",ios::out);
    if(!outfile)
    {
        cout << "abc1.txt can't created" << endl;
        abort();
    }
    char buf[80];
    int i=0;
    while (!infile.eof())
    {   
        infile.getline(buf,sizeof(buf));
        outfile << i++ << ":" << buf << endl;
    }
    cout << "abc.txt=>abc1.txt转换成功! " << endl;
    infile.close();
    outfile.close();
}
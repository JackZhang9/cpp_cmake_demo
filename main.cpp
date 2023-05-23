#include "interface.h"
#include<iostream>

int main(int argc,char **argv)
{
    int cnt=std::atoi(argv[1]);
    PrintJZ pjz;
    pjz.print(cnt);
    return 0;
}
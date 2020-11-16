#include <iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
    int least = atoi(argv[1]);
    for(int i=2;i<argc;i++)
    {
        if (atoi(argv[i]) < least)
        {
            least = atoi(argv[i]);
        }
    }
    cout<<"The least is: "<<least;
    return 0;
}
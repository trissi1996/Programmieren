#include <iostream>
#include <string>



using namespace std;


string getString(string bla,string bla1)
{
    return bla + bla1;
}
string getString(string bla,string bla1, string bla2)
{
    return bla + bla1 + bla2;
}

void HalloWelt()
{
    cout << getString("Hello World!","!","!");
}




int main(int argc, char* argv[])
{
    HalloWelt();
    return 0;
}

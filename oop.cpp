#include <iostream>
#include <string>
using namespace std;
class stperson
{
private:
    string name;
    int number;

public:
    void SetName(string _name)
    {
        name = _name;
    }

    string GetName()
    {
        return name;
    }
    __declspec(property(get = GetName, put = SetName))
    string _name;
};
int main()
{

    stperson goal;

    goal.SetName("alice");
    goal.name = "mohmed";

    system("pause>0");

        return 0;
}

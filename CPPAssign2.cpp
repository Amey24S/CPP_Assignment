#include <iostream>
#include <string>
using namespace std;

class charInput
{
public:
    string str = "";
    void add(char c)
    {
        str = str + (c);
    }
    std::string getValue()
    { 
        return str; 
    }
};

class numInput : public charInput
{
    public:
        string getValue()
        {
            return numInput::str;
        }

        void add(char ch){
            if(ch >= 'a' && ch <= 'z')
            {
                return;
            }
            else
            {
                charInput::add(ch);
            }
        }

};

int main()
{
    charInput *inputC = new charInput();
    numInput *inputN = new numInput();
    inputN->add('1');
    inputN->add('a');
    inputN->add('0');
    cout << inputN->getValue();

return 0;   
}

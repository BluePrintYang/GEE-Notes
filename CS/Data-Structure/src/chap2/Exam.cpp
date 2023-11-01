#include <iostream>
using namespace std;

void move_array()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    cout << "\n";

    int p = 4;
    int pre = 0, cur = length - p;
    for (; pre < p; cur++, pre++)
    {
        int tmp = array[pre];
        array[pre] = array[cur];
        array[cur] = tmp;
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    cout << "\n";
}

int Exam_2011()
{
    
}

int main()
{
    cout << "Hello World" << endl;
    move_array();
    return 0;
}
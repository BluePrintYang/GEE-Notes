#include <iostream>
#include <vector>

typedef int ElemType;

class List
{
public:
    List(int maxSize);
    ~List();

    bool ListInsert(int position, ElemType element);
    bool ListDelete(int position, ElemType &element);
    int LocateElem(ElemType element);

    // Function to print the elements
    void PrintElements() const;

private:
    std::vector<ElemType> data;
    int maxSize;
};

List::List(int maxSize)
{
    this->maxSize = maxSize;
}

List::~List()
{
    data.clear();
}

bool List::ListInsert(int position, ElemType element)
{
    if (position < 1 || position > data.size() + 1 || data.size() >= maxSize)
    {
        return false;
    }

    data.insert(data.begin() + position - 1, element);
    return true;
}

bool List::ListDelete(int position, ElemType &element)
{
    if (position < 1 || position > data.size())
    {
        return false;
    }

    element = data[position - 1];
    data.erase(data.begin() + position - 1);
    return true;
}

int List::LocateElem(ElemType element)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == element)
        {
            return i + 1; // 1-based index
        }
    }
    return 0; // Element not found
}

void List::PrintElements() const
{
    for (const auto &elem : data)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void test()
{
    int maxSize = 50;
    List mylist(maxSize);

    ElemType element1 = 10;
    ElemType element2 = 20;
    ElemType element3 = 30;

    mylist.ListInsert(1, element1);
    mylist.ListInsert(2, element2);
    mylist.ListInsert(3, element3);

    std::cout << "Inserted elements:" << std::endl;
    mylist.PrintElements();

    ElemType deletedElement;
    mylist.ListDelete(2, deletedElement);
    std::cout << "Deleted element: " << deletedElement << std::endl;

    ElemType searchElement = 20;
    int position = mylist.LocateElem(searchElement);

    if (position != 0)
    {
        std::cout << "Element found at position: " << position << std::endl;
    }
    else
    {
        std::cout << "Element not found" << std::endl;
    }
}

int main()
{
    test();
    return 0;
}

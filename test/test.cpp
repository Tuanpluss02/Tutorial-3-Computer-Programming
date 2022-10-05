#include "abc.cpp"
#include <iostream>

int main()
{
    abc a;
    vector<double> dataSet;
    dataSet.push_back(1);
    dataSet.push_back(2);
    dataSet.push_back(3);
    a.setData(dataSet);
    cout << a.getData()[0] << endl;
    cout << a.getData()[1] << endl;
    cout << a.getData()[2] << endl;
    system("pause");
    return 0;
}
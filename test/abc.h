#ifndef abc_h
#define abc_h
#include <vector>
using namespace std;
class abc
{
private:
    vector<double> data;
    /* data */
public:
    abc();
    ~abc();
    void setData(vector<double>);
    vector<double> getData();
};

#endif
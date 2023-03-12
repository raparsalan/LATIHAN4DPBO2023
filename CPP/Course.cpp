#ifndef COURSE
#define COURSE
#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
    string namaMatkul;
    int jumlahSKS;

public:
    Course()
    {
        namaMatkul = "";
        jumlahSKS = 0;
    };
    Course(string a, string b, string c)
    {
        namaMatkul = a;
        jumlahSKS = 0;
    }

    void setNamaMatkul(string a)
    {
        namaMatkul = a;
    }
    void setJumlahSKS(int a)
    {
        jumlahSKS = a;
    }

    string getNamaMatkul()
    {
        return namaMatkul;
    }
    int getJumlahSKS()
    {
        return jumlahSKS;
    }
    ~Course()
    {
    }
};

#endif
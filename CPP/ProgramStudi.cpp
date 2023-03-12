#ifndef PRODI
#define PRODI
#include <iostream>
#include <string>
#include <list>
#include "Course.cpp"

using namespace std;

class ProgramStudi
{
private:
    string kodeProdi;
    string namaProdi;
    list<Course> listCourse;

public:
    ProgramStudi()
    {
        kodeProdi = "";
        namaProdi = "";
    };
    ProgramStudi(string a, string b)
    {
        kodeProdi = a;
        namaProdi = b;
    }

    void setkodeProdi(string a)
    {
        kodeProdi = a;
    }
    void setnamaProdi(string a)
    {
        namaProdi = a;
    }
    void addCourse(string a, int b)
    {
        Course temp;
        temp.setNamaMatkul(a);
        temp.setJumlahSKS(b);
        listCourse.push_back(temp);
    }

    string getkodeProdi()
    {
        return kodeProdi;
    }
    string getnamaProdi()
    {
        return namaProdi;
    }
    list<Course> getCourse()
    {
        return listCourse;
    }
    ~ProgramStudi()
    {
    }
};
#endif
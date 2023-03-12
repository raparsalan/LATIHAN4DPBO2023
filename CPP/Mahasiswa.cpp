#include <iostream>
#include <string>
#include "Sivitas.cpp"

using namespace std;

class Mahasiswa : public Sivitas
{
private:
    string nim;
    int semester;

public:
    Mahasiswa()
    {
        setNik("");
        setNama("");
        setJk("");
        setAsalUniv("");
        setEmailEdu("");
        nim = "";
        semester = 0;
    };
    Mahasiswa(string a, string b, string c, string d, string e, string f, int g, ProgramStudi h)
    {
        setNik(a);
        setNama(b);
        setJk(c);
        setAsalUniv(d);
        setEmailEdu(e);
        nim = f;
        semester = g;
        setProdi(h);
    }

    void setNim(string a)
    {
        nim = a;
    }
    void setsemester(int a)
    {
        semester = a;
    }

    string getNim()
    {
        return nim;
    }
    int getsemester()
    {
        return semester;
    }

    ~Mahasiswa()
    {
    }
};

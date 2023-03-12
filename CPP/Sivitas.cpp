#ifndef SIVITAS
#define SIVITAS
#include <iostream>
#include <string>
#include "ProgramStudi.cpp"
#include "Human.cpp"

using namespace std;

class Sivitas : public Human
{
private:
    string asalUniv;
    string emailEdu;
    ProgramStudi prodi;

public:
    Sivitas()
    {
        setNik("");
        setNama("");
        setJk("");
        asalUniv = "";
        emailEdu = "";
    };
    Sivitas(string a, string b, string c, string d, string e, ProgramStudi f)
    {
        setNik(a);
        setNama(b);
        setJk(c);
        asalUniv = d;
        emailEdu = e;
        prodi = f;
    }

    void setAsalUniv(string a)
    {
        asalUniv = a;
    }
    void setEmailEdu(string a)
    {
        emailEdu = a;
    }
    void setProdi(ProgramStudi a)
    {
        prodi = a;
    }

    string getAsalUniv()
    {
        return asalUniv;
    }
    string getEmailEdu()
    {
        return emailEdu;
    }
    ProgramStudi getProdi()
    {
        return prodi;
    }

    ~Sivitas()
    {
    }
};

#endif
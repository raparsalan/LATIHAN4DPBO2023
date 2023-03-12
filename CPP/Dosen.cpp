#include <iostream>
#include <string>
#include "Sivitas.cpp"

using namespace std;

class Dosen : public Sivitas
{
private:
    string nip;
    string pendTerakhir;
    string keahlian;

public:
    Dosen()
    {
        setNik("");
        setNama("");
        setJk("");
        setAsalUniv("");
        setEmailEdu("");
        nip = "";
        pendTerakhir = "";
        keahlian = "";
    };
    Dosen(string a, string b, string c, string d, string e, string f, string g, ProgramStudi h, string i)
    {
        setNik(a);
        setNama(b);
        setJk(c);
        setAsalUniv(d);
        setEmailEdu(e);
        nip = f;
        pendTerakhir = g;
        keahlian = i;
        setProdi(h);
    }

    void setNip(string a)
    {
        nip = a;
    }
    void setPendTerakhir(string a)
    {
        pendTerakhir = a;
    }
    void setKeahlian(string a)
    {
        keahlian = a;
    }

    string getnip()
    {
        return nip;
    }
    string getPendTerakhir()
    {
        return pendTerakhir;
    }
    string getKeahlian()
    {
        return keahlian;
    }

    ~Dosen()
    {
    }
};

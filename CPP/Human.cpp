#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string nik;
    string nama;
    string Jk;

public:
    Human()
    {
        nik = "";
        nama = "";
        Jk = "";
    };
    Human(string a, string b, string c)
    {
        nik = a;
        nama = b;
        Jk = c;
    }

    void setNik(string a)
    {
        nik = a;
    }
    void setNama(string a)
    {
        nama = a;
    }
    void setJk(string a)
    {
        Jk = a;
    }

    string getNik()
    {
        return nik;
    }
    string getNama()
    {
        return nama;
    }
    string getJk()
    {
        return Jk;
    }
    ~Human()
    {
    }
};

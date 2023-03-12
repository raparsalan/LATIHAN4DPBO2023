#include "Dosen.cpp"
#include "ProgramStudi.cpp"
#include "Course.cpp"
#include "Mahasiswa.cpp"
#include <list>
using namespace std;

int main()
{
    ProgramStudi ilmuKomputer("Ilmu Komputer", "IK");
    ilmuKomputer.addCourse("Sistem Basis Data", 3);
    ilmuKomputer.addCourse("Big Data Platform", 2);

    ProgramStudi pendChina;
    pendChina.setnamaProdi("Pendidikan Bahasa China");
    pendChina.setkodeProdi("PBC");
    pendChina.addCourse("Sastra China", 2);

    list<Mahasiswa> listMhs;
    Mahasiswa bintang;
    bintang.setNik("3202366654");
    bintang.setNama("Bintang");
    bintang.setJk("L");
    bintang.setAsalUniv("Universitas Pendidikan Indonesia");
    bintang.setEmailEdu("bintangfajar77@upi.edu");
    bintang.setNim("2108852");
    bintang.setsemester(6);
    bintang.setProdi(ilmuKomputer);
    listMhs.push_back(bintang);

    Mahasiswa rayhan("3202351254", "Rayhan", "L", "UPN Veteran", "rayhanimoetzz89@upn.edu", "2103366", 4, pendChina);
    listMhs.push_back(rayhan);

    list<Dosen> listDosen;
    Dosen yasin;
    yasin.setNik("32266568475");
    yasin.setNama("M Yasin");
    yasin.setJk("L");
    yasin.setAsalUniv("Universitas Pesantren Indonesia");
    yasin.setEmailEdu("yasindosenidaman@upes.edu");
    yasin.setNip("196533654785");
    yasin.setPendTerakhir("S3 Marketing");
    yasin.setKeahlian("Digital Marketing");
    yasin.setProdi(ilmuKomputer);
    listDosen.push_back(yasin);

    Dosen rifqi("66985547821", "Rifqi Kijar", "L", "UPN Veteran", "rifqiOlo2@upn.edu", "1978555632647", "S3 Design Komunikasi dan Sastra", pendChina, "Komunikasi Visual");
    listDosen.push_back(rifqi);

    cout << "------------------ LIST MAHASISWA ------------------" << endl;
    int jml = 1;
    list<Mahasiswa>::iterator i;
    list<Course>::iterator j;
    for (i = listMhs.begin(); i != listMhs.end(); i++)
    {
        cout << jml << ". NIK            : " << i->getNik() << endl;
        cout << "   Jenis Kelamin  : " << i->getJk() << endl;
        cout << "   Nama           : " << i->getNama() << endl;
        cout << "   Asal Univ      : " << i->getAsalUniv() << endl;
        cout << "   NIM            : " << i->getNim() << endl;
        cout << "   Email          : " << i->getEmailEdu() << endl;
        cout << "   Semester       : " << i->getsemester() << endl;
        cout << "   Program Studi  : " << i->getProdi().getnamaProdi() << endl;
        cout << "   List Matkul    : " << endl;
        list<Course> temp = i->getProdi().getCourse();
        for (j = temp.begin(); j != temp.end(); j++)
        {
            cout << "                   - " << j->getNamaMatkul() << ", " << j->getJumlahSKS() << " SKS" << endl;
        }

        jml++;
    }

    cout << endl
         << "------------------ LIST Dosen ------------------" << endl;
    list<Dosen>::iterator k;
    jml = 1;
    for (k = listDosen.begin(); k != listDosen.end(); k++)
    {
        cout << jml << ". NIK            : " << k->getNik() << endl;
        cout << "   Jenis Kelamin  : " << k->getJk() << endl;
        cout << "   Nama           : " << k->getNama() << endl;
        cout << "   Email          : " << k->getEmailEdu() << endl;
        cout << "   Asal Univ      : " << k->getAsalUniv() << endl;
        cout << "   Program Studi  : " << k->getProdi().getnamaProdi() << endl;
        cout << "   Kode Prodi     : " << k->getProdi().getkodeProdi() << endl;
        cout << "   Pend. Terakhir : " << k->getPendTerakhir() << endl;
        cout << "   Keahlian       : " << k->getKeahlian() << endl;
    }

    return 0;
};
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course
from ProgramStudi import ProgramStudi

ilmuKomputer = ProgramStudi()
ilmuKomputer.setNamaProdi("Ilmu Komputer")
ilmuKomputer.setKodeProdi("IK")
ilmuKomputer.addCourse("Sistem Basis Data", 3)
ilmuKomputer.addCourse("Desain Pemrograman Berorientasi Objek", 4)

pendChina = ProgramStudi()
pendChina.setNamaProdi("Pendidikan Bahasa China")
pendChina.setKodeProdi("PBC")
pendChina.addCourse("Sastra China", 2)

listMhs =  []
bintang = Mahasiswa()
bintang.setNik("3202366654")
bintang.setNama("Bintang")
bintang.setJk("L")
bintang.setAsalUniv("Universitas Pendidikan Indonesia")
bintang.setEmailEdu("bintangfajar77@upi.edu")
bintang.setNim("2108852")
bintang.setSemester(6)
bintang.setProdi(ilmuKomputer)
listMhs.append(bintang)

rayhan = Mahasiswa()
rayhan.setNik("3202351254")
rayhan.setNama("Rayhan")
rayhan.setJk("L")
rayhan.setAsalUniv("UPN Veteran")
rayhan.setEmailEdu("rayhanimoetzz89@upn.edu")
rayhan.setNim("2103366")
rayhan.setSemester(4)
rayhan.setProdi(pendChina)
listMhs.append(rayhan)

listDosen = []
yasin = Dosen()
yasin.setNik("32266568475")
yasin.setNama("M Yasin")
yasin.setJk("L")
yasin.setAsalUniv("Universitas Pesantren Indonesia")
yasin.setEmailEdu("yasindosenidaman@upes.edu")
yasin.setNip("196533654785")
yasin.setPendTerakhir("S3 Marketing")
yasin.setKeahlian("Digital Marketing")
yasin.setProdi(ilmuKomputer)
listDosen.append(yasin)

rifqi = Dosen()
rifqi.setNik("66985547821")
rifqi.setNama("Rifqi Kijar")
rifqi.setJk("L")
rifqi.setAsalUniv("UPN Veteran")
rifqi.setEmailEdu("rifqiOlo2@upn.edu")
rifqi.setNip("1978555632647")
rifqi.setPendTerakhir("S3 Design Komunikasi dan Sastra")
rifqi.setKeahlian("Komunikasi Visual")
rifqi.setProdi(pendChina)
listDosen.append(rifqi)

print("----------- LIST MAHASISWA -------------")
jml = 1
for mhs in listMhs:
   print(str(jml)+". NIK           : ", mhs.getNik())
   print("   NIM           : " , mhs.getNim())
   print("   Nama          : " , mhs.getNama())
   print("   Semester      : " , mhs.getSemester())
   print("   Jenis Kelamin : " , mhs.getJk())
   print("   Asal Univ     : " , mhs.getAsalUniv())
   print("   Kode Prodi    : ", mhs.getProdi().getKodeProdi())
   print("   Asal Prodi    : ", mhs.getProdi().getNamaProdi())
   matkul = 1
   for a in mhs.getProdi().getCourse():
      if matkul == 1:
         print("   List Matkul   :  "+str(matkul)+". "+a.getNamaMatkul()+", "+str(a.getJumlahSKS())+" SKS")
      else:
         print("                 :  "+str(matkul)+". "+a.getNamaMatkul()+", "+str(a.getJumlahSKS())+" SKS")
      matkul+=1
   
   print("   Email         : " , mhs.getEmailEdu())
   jml+=1

jml = 1
print("\n----------- LIST DOSEN -------------")
for dosen in listDosen:
   print(str(jml)+". NIK           : ", dosen.getNik())
   print("   Asal Univ     : " , dosen.getAsalUniv())
   print("   Asal Prodi    : ", dosen.getProdi().getNamaProdi())
   print("   Kode Prodi    : ", dosen.getProdi().getKodeProdi())
   print("   NIP Dosen     : " , dosen.getNip())
   print("   Nama Dosen    : " , dosen.getNama())
   print("   Email         : " , dosen.getEmailEdu())
   print("   Pendidikan    : " , dosen.getPendTerakhir())
   print("   Keahlian      : " , dosen.getKeahlian())
   jml+=1

from Mahasiswa import Mahasiswa
from Course import Course
from ProgramStudi import ProgramStudi

basisData =  Course()
basisData.setNamaMatkul("Sistem Basis Data")
basisData.setJumlahSKS(3)

dpbo = Course()
dpbo.setNamaMatkul("Desain Pemrograman Berorientasi Objek")
dpbo.setJumlahSKS(3)

sastraChina = Course()
sastraChina.setNamaMatkul("Sastra China")
sastraChina.setJumlahSKS(2)

ilmuKomputer = ProgramStudi()
ilmuKomputer.setNamaProdi("Ilmu Komputer")
ilmuKomputer.setKodeProdi("IK")
ilmuKomputer.addCourse(dpbo)
ilmuKomputer.addCourse(basisData)

pendChina = ProgramStudi()
pendChina.setNamaProdi("Pendidikan Bahasa China")
pendChina.setKodeProdi("PBC")
pendChina.addCourse(sastraChina)

listMhs =  []
bintang = Mahasiswa()
bintang.setNik("3202366654")
bintang.setNama("Bintang")
bintang.setJk("L")
bintang.setAsalUniv("UPI")
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

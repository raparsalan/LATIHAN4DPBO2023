from Course import Course

class ProgramStudi:
    __namaProdi = ""
    __kodeProdi = ""
    __listCourse = []

    def __init__(self):
        self.namaProdi =""
        self.kodeProdi = ""
        self.listCourse = []
    
    def setNamaProdi(self, a):
        self.namaProdi = a
    def setKodeProdi(self, a):
        self.kodeProdi = a
    def addCourse(self, nm, sks):
        temp = Course()
        temp.setNamaMatkul(nm)
        temp.setJumlahSKS(sks)
        self.listCourse.append(temp)

    def getNamaProdi(self):
        return self.namaProdi
    def getKodeProdi(self):
        return self.kodeProdi
    def getCourse(self):
        return self.listCourse

    
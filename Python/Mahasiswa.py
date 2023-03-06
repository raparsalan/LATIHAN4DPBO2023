from Sivitas import Sivitas

class Mahasiswa(Sivitas): 
    __nim = ""
    __semester = ""

    def __init__(self):
        super(Mahasiswa, self).__init__()
        self.nim = ""
        self.semester =""

    def setNim(self, a):
        self.nim = a
    def setSemester(self, a):
        self.semester = a
    
    def getNim(self):
        return self.nim
    def getSemester(self):
        return self.semester
    
    


from Human import Human
from ProgramStudi import ProgramStudi

class Sivitas(Human): 
    __asalUniv = ""
    __emailEdu  = ""
    __prodi = ProgramStudi()

    def __init__(self):
        super(Sivitas, self).__init__()
        self.asalUniv = ""
        self.emailEdu = ""
        self.prodi = ProgramStudi()

    def setAsalUniv(self, a):
        self.asalUniv = a
    def setEmailEdu(self, a):
        self.emailEdu = a
    def setProdi(self, a):
        self.prodi = a
    
    def getAsalUniv(self):
        return self.asalUniv
    def getEmailEdu(self):
        return self.emailEdu
    def getProdi(self):
        return self.prodi
    
    


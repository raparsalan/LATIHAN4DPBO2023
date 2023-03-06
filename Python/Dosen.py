from Sivitas import Sivitas

class Dosen(Sivitas): 
    __nip = ""
    __pendTerakhir = ""
    __keahlian = ""

    def __init__(self):
        super(Dosen, self).__init__()
        self.nip = ""
        self.pendTerakhir =""
        self.keahlian = ""

    def setNip(self, a):
        self.nip = a
    def setPendTerakhir(self, a):
        self.pendTerakhir = a
    def setKeahlian(self, a):
        self.keahlian = a
    
    def getNip(self):
        return self.nip
    def getPendTerakhir(self):
        return self.pendTerakhir
    def getKeahlian(self):
        return self.keahlian
    
    


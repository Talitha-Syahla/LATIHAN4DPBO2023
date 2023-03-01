# Membuat kelas baru bernama Mahasiswa, class ini merupakan child class dari SivitasAkademik Class
from SivitasAkademik import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    
    # Inisialisasi variabel untuk setiap objek dari kelas
    nim = ""        # Membuat variabel untuk NIM
    fakultas = ""   # Membuat variabel untuk fakultas
    
    # Konstruktor untuk inisialisasi variabel pada objek dari kelas Mahasiswa
    def __init__(self, NIK = "", name = "", gender = "", asal_univ = "", email_edu = "", nim = "", fakultas = ""):
        super().__init__(NIK, name, gender, asal_univ, email_edu)
        self.nim = nim              # Menginisialisasi variabel nim
        self.fakultas = fakultas    # Menginisialisasi variabel fakultas
        
    # Getter dan Setter untuk NIM
    def get_Nim(self):
        return self.nim
    
    def set_Nim(self, nim):
        self.nim = nim
        
    # Getter dan Setter untuk Fakultas
    def get_Fakultas(self):
        return self.fakultas
    
    def set_Fakultas(self, fakultas):
        self.fakultas = fakultas

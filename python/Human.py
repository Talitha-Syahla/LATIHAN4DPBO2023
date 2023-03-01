# Membuat class bernama Human
class Human:
    
    # Inisialisasi variabel untuk setiap objek dari kelas
    NIK = ""        # Membuat variabel untuk nomor induk kependudukan
    name = ""       # Membuat variabel untuk nama
    gender = ""     # Membuat variabel untuk jenis kelamin
    
    # Konstruktor untuk inisialisasi variabel pada objek dari kelas Human
    def __init__(self, NIK = "", name = "", gender = ""):
        self.NIK = NIK          # Menginisialisasi variabel NIK
        self.name = name        # Menginisialisasi variabel name
        self.gender = gender    # Menginisialisasi variabel gender
        
    # Getter dan Setter untuk NIK
    def get_NIK(self):
        return self.NIK
    
    def set_NIK(self, NIK):
        self.NIK = NIK
        
    # Getter dan Setter untuk Name
    def get_Name(self):
        return self.name
    
    def set_Name(self, name):
        self.name = name
        
    # Getter dan Setter untuk Jenis Kelamin
    def get_Gender(self):
        return self.gender
    
    def set_Gender(self, gender):
        self.gender = gender
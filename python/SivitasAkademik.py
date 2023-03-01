# Membuat kelas baru bernama SivitasAkademik, class ini merupakan child class dari Human Class
from Human import Human

class SivitasAkademik(Human):
    
    # Inisialisasi variabel untuk setiap objek dari kelas
    asal_univ = ""  # Membuat variabel untuk asal universitas
    email_edu = ""  # Membuat variabel untuk email pendidikan
    
    # Konstruktor untuk inisialisasi variabel pada objek dari kelas SivitasAkademik
    def __init__(self, NIK = "", name = "", gender = "", asal_univ = "", email_edu = ""):
        super().__init__(NIK, name, gender)
        self.asal_univ = asal_univ  # Menginisialisasi variabel asal_univ
        self.email_edu = email_edu  # Menginisialisasi variabel email_edu
        
    # Getter dan Setter untuk Asal Universitas
    def get_Asal_univ(self):
        return self.asal_univ
    
    def set_Asal_univ(self, asal_univ):
        self.asal_univ = asal_univ
        
    # Getter dan Setter untuk Email_edu
    def get_Email_edu(self):
        return self.email_edu
    
    def set_Email_edu(self, email_edu):
        self.email_edu = email_edu
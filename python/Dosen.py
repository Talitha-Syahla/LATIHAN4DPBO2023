# Membuat kelas baru bernama Dosen, class ini merupakan child class dari SivitasAkademik Class
from SivitasAkademik import SivitasAkademik

class Dosen(SivitasAkademik):
    
    # Inisialisasi variabel untuk setiap objek dari kelas
    nip = ""            # Membuat variabel untuk nomor induk pegawai   
    fakultas = ""       # Membuat variabel untuk fakultas tempat dosen bekerja
    pend_terakhir = ""  # Membuat variabel untuk pendidikan terakhir dosen
    keahlian = ""       # Membuat variabel untuk keahlian dosen
    
    # Konstruktor untuk inisialisasi variabel pada objek dari kelas Dosen
    def __init__(self, NIK = "", name = "", gender = "", asal_univ = "", email_edu = "", nip = "", fakultas = "", pend_terakhir = "", keahlian = ""):
        super().__init__(NIK, name, gender, asal_univ, email_edu)
        self.nip = nip                      # Menginisialisasi variabel nip
        self.fakultas = fakultas            # Menginisialisasi variabel fakultas
        self.pend_terakhir = pend_terakhir  # Menginisialisasi variabel pend_terakhir
        self.keahlian = keahlian            # Menginisialisasi variabel keahlian
        
    # Getter dan Setter untuk NIP
    def get_Nip(self):
        return self.nip
    
    def set_Nip(self, nip):
        self.nip = nip
        
    # Getter dan Setter untuk Fakultas
    def get_Fakultas(self):
        return self.fakultas
    
    def set_Fakultas(self, fakultas):
        self.fakultas = fakultas
        
    # Getter dan Setter untuk Pend_terakhir
    def get_Pend_terakhir(self):
        return self.pend_terakhir
    
    def set_Pend_terakhir(self, pend_terakhir):
        self.pend_terakhir = pend_terakhir
        
    # Getter dan Setter untuk Keahlian
    def get_Keahlian(self):
        return self.keahlian
    
    def set_Keahlian(self, keahlian):
        self.keahlian = keahlian
        
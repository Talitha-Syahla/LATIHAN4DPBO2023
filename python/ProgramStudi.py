# Membuat class bernama ProgramStudi
# Class ini merupakan composition class dari Class Dosen, Class Mahasiswa, Class Course

class ProgramStudi:
    
    nama_prodi = "" # Membuat variabel untuk Nama prodi
    kode = ""       # Membuat variabel untuk Kode prodi
    dosen = []      # Membuat variabel untuk dosen dan menyimpan list objek tersebut
    mahasiswa = []  # Membuat variabel untuk mahasiswa dan menyimpan list objek tersebut
    course = []     # Membuat variabel untuk course dan menyimpan list objek tersebut
    
    # Konstruktor kelas ProgramStudi
    def __init__(self, nama_prodi, kode):
        self.nama_prodi = nama_prodi    # Menginisialisasi variabel Nama prodi
        self.kode = kode                # Menginisialisasi variabel Kode prodi
    
    # Getter dan Setter untuk Nama_prodi
    def get_Nama_prodi(self):
        return self.nama_prodi
    
    def set_Nama_prodi(self, nama_prodi):
        self.nama_prodi = nama_prodi
        
    # Getter dan Setter untuk Dosen
    def get_Dosen(self):
        return self.dosen
    
    def set_Dosen(self, dosen):
        self.dosen = dosen
    
    # Getter dan Setter untuk Mahasiswa
    def get_Mahasiswa(self):
        return self.mahasiswa
    
    def set_Mahasiswa(self, mahasiswa):
        self.mahasiswa = mahasiswa
        
    # Getter dan Setter untuk Course
    def get_Course(self):
        return self.course
    
    def set_Course(self, course):
        self.course = course
                
    # Getter dan Setter untuk kode
    def get_Kode(self):
        return self.kode
    
    def set_Kode(self, kode):
        self.kode = kode

    # Method untuk menambahkan dosen ke dalam list dosen
    def tambahDosen(self, dosen):
        self.dosen.append(dosen)
    
    # Method untuk menambahkan mahasiswa ke dalam list mahasiswa
    def tambahMahasiswa(self, mahasiswa):
        self.mahasiswa.append(mahasiswa)
    
    # Method untuk menambahkan course ke dalam list course
    def tambahCourse(self, course):
        self.course.append(course)
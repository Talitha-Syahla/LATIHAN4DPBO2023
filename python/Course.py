# Membuat class bernama Course
class Course:
    
    nama_matakuliah = ""    # Membuat variabel untuk nama mata kuliah
    
    # Konstruktor kelas Course
    def __init__(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah  # Membuat variabel untuk nama mata kuliah

    # Getter dan Setter untuk Nama Matakuliah
    def get_Nama_matakuliah(self):
        return self.nama_matakuliah
    
    def set_Nama_matakuliah(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah
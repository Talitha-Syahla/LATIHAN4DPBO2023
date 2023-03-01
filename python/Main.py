# Mengimport beberapa Class dari beberapa file yang berbeda
from Human import Human
from SivitasAkademik import SivitasAkademik
from Dosen import Dosen
from Mahasiswa import Mahasiswa
from ProgramStudi import ProgramStudi
from Course import Course

# Membuat list kosong untuk menampung objek
list = []  

# Membuat objek Mahasiswa dengan parameter yang diberikan (hardcode)
mhs1 = Mahasiswa("3210293089", "Talitha Syahla", "Perempuan", "UPI", "tal@upi.edu", "2101330", "FPMIPA")
mhs2 = Mahasiswa("3210286476", "Park Jimin    ", "Laki-Laki", "UPI", "jim@upi.edu", "2101130", "FPMIPA")
mhs3 = Mahasiswa("3210241637", "Min Yoongi    ", "Laki-Laki", "UPI", "min@upi.edu", "2101209", "FPMIPA")
mhs4 = Mahasiswa("3210212836", "Park Jeongwoo ", "Laki-Laki", "UPI", "woo@upi.edu", "2101299", "FPMIPA")

# Membuat objek Dosen dengan parameter yang diberikan (hardcode)
dosen1 = Dosen("3210287364", "Jongsuk", "Laki-Laki", "UPI", "jongsuk@upi.edu", "11234245", "FPMIPA", "S2", "Sistem Digital")
dosen2 = Dosen("3210291826", "Namjoon", "Laki-Laki", "UPI", "namjoon@upi.edu", "11928308", "FPMIPA", "S1", "Bahasa Inggris")
dosen3 = Dosen("3210212736", "ShinHye", "Perempuan", "UPI", "shinHye@upi.edu", "11298354", "FPMIPA", "S3", "Design Website")

# Membuat objek Course dengan parameter yang diberikan (hardcode)
course1 = Course("Design Website")
course2 = Course("Sistem Digital")
course3 = Course("Sistem Digital")

# Membuat objek ProgramStudi dengan parameter yang diberikan (hardcode)
prodi1 = ProgramStudi("Ilmu Komputer", "P13")

prodi1.tambahDosen(dosen1)
prodi1.tambahDosen(dosen2)
prodi1.tambahDosen(dosen3)

prodi1.tambahMahasiswa(mhs1)
prodi1.tambahMahasiswa(mhs2)
prodi1.tambahMahasiswa(mhs3)
prodi1.tambahMahasiswa(mhs4)

prodi1.tambahCourse(course1)
prodi1.tambahCourse(course2)
prodi1.tambahCourse(course3)

# Menambahkan data dan memasukkannya ke dalam list
list.append(prodi1)

# perulangan untuk mengeluarkan output berupa data-data yang ada di prodi tersebut
# data-data yang akan dikeluarkan oleh program yaitu data-data mengenai data dosen, data course dan data mata kuliah
for temp in list:
    print("\n=============== Data-Data Di", temp.get_Nama_prodi(), "Dengan Kode Prodi", temp.get_Kode(), "===============")
    print("=    Data-Data Tersebut Meliputi Data Dosen, Data Course, dan Data Mahasiswa   =")

    # mengeluarkan data dosen
    print("\n---------------------------------------------------------")
    print("+                    Data Dosen                         +")
    for blank in temp.get_Dosen():
        print("---------------------------------------------------------")
        print("+    NIK                  : ", blank.get_NIK(), "                +")
        print("+    Nama                 : ", blank.get_Name(), "                   +")
        print("+    Jenis Kelamin        : ", blank.get_Gender(), "                 +")
        print("+    Asal Universitas     : ", blank.get_Asal_univ(), "                       +")
        print("+    Email                : ", blank.get_Email_edu(), "           +")
        print("+    NIP                  : ", blank.get_Nip(), "                  +")
        print("+    Fakultas             : ", blank.get_Fakultas(), "                    +")
        print("+    Pendidikan Terakhir  : ", blank.get_Pend_terakhir(), "                        +")
        print("+    Keahlian             : ", blank.get_Keahlian(), "            +")
    print("---------------------------------------------------------")
    
    # mengeluarkan data course
    print("\n---------------------------------------------------------")
    print("+                    Data Course                        +\n")
    for blank in temp.get_Course():
        # print("---------------------------------------------------------")
        print("+    Nama Mata Kuliah     : ", blank.get_Nama_matakuliah(), "            +")
    print("---------------------------------------------------------")
    
    # mengeluarkan data mahasiswa
    print("\n---------------------------------------------------------")
    print("+                    Data Mahasiswa                     +")
    for blank in temp.get_Mahasiswa():
        
        print("---------------------------------------------------------")
        print("+    NIK              : ", blank.get_NIK(), "                    +")
        print("+    Nama             : ", blank.get_Name(), "                +")
        print("+    Jenis Kelamin    : ", blank.get_Gender(), "                     +")
        print("+    Asal Universitas : ", blank.get_Asal_univ(), "                           +")
        print("+    Email            : ", blank.get_Email_edu(), "                   +")
        print("+    NIM              : ", blank.get_Nim(), "                       +")
        print("+    Fakultas         : ", blank.get_Fakultas(), "                        +")
    print("---------------------------------------------------------")    
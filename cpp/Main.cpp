#include <bits/stdc++.h>
using namespace std;

// Memanggil semua class
#include "Human.cpp"
#include "SivitasAkademik.cpp"
#include "Dosen.cpp"
#include "Mahasiswa.cpp"
#include "Course.cpp"
#include "ProgramStudi.cpp"

    /*
        Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
        dalam mata kuliah Desain Pemrograman Berorientasi Objek 
        untuk keberkahanNya maka saya tidak melakukan kecurangan 
        seperti yang telah dispesifikasikan. Aamiin.
    */ 

int main(){
    
    // Membuat vector kosong untuk menampung objek
    vector<Dosen> vec1;
    vector<Mahasiswa> vec2;
    vector<Course> vec3;
    vector<ProgramStudi> vec;
    
    // Membuat objek Mahasiswa dengan parameter yang diberikan (hardcode)
    Mahasiswa mhs1("3210293089", "Talitha Syahla", "Perempuan", "UPI", "tal@upi.edu", "2101330", "FPMIPA");
    Mahasiswa mhs2("3210286476", "Park Jimin    ", "Laki-Laki", "UPI", "jim@upi.edu", "2101130", "FPMIPA");
    Mahasiswa mhs3("3210241637", "Min Yoongi    ", "Laki-Laki", "UPI", "min@upi.edu", "2101209", "FPMIPA");
    Mahasiswa mhs4("3210212836", "Park Jeongwoo ", "Laki-Laki", "UPI", "woo@upi.edu", "2101299", "FPMIPA");
    // Menambahkan data dan memasukkannya ke dalam vector mahasiswa
    vec2.push_back(mhs1);
    vec2.push_back(mhs2);
    vec2.push_back(mhs3);
    vec2.push_back(mhs4);

    // Membuat objek Dosen dengan parameter yang diberikan (hardcode)
    Dosen dosen1("3210287364", "Jongsuk", "Laki-Laki", "UPI", "jongsuk@upi.edu", "11234245", "FPMIPA", "S2", "Sistem Digital");
    Dosen dosen2("3210291826", "Namjoon", "Laki-Laki", "UPI", "namjoon@upi.edu", "11928308", "FPMIPA", "S1", "Bahasa Inggris");
    Dosen dosen3("3210212736", "ShinHye", "Perempuan", "UPI", "shinHye@upi.edu", "11298354", "FPMIPA", "S3", "Design Website");
    // Menambahkan data dan memasukkannya ke dalam vector dosen
    vec1.push_back(dosen1);
    vec1.push_back(dosen2);
    vec1.push_back(dosen3);

    // Membuat objek Course dengan parameter yang diberikan (hardcode)
    Course course1("Design Website");
    Course course2("Sistem Digital");
    Course course3("Bahasa Inggris");
    // Menambahkan data dan memasukkannya ke dalam vector course
    vec3.push_back(course1);
    vec3.push_back(course2);
    vec3.push_back(course3);
    

    // Membuat objek ProgramStudi dengan parameter yang diberikan (hardcode)
    ProgramStudi prodi1("Ilmu Komputer", "P13", vec1, vec2, vec3);

    prodi1.addDosen(dosen1);
    prodi1.addDosen(dosen2);
    prodi1.addDosen(dosen3);

    prodi1.addMahasiswa(mhs1);
    prodi1.addMahasiswa(mhs2);
    prodi1.addMahasiswa(mhs3);
    prodi1.addMahasiswa(mhs4);

    prodi1.addCourse(course1);
    prodi1.addCourse(course2);
    prodi1.addCourse(course3);

    // Menambahkan data dan memasukkannya ke dalam vector programstudi
    vec.push_back(prodi1);

    // Perulangan untuk mengeluarkan output berupa data-data yang ada di prodi tersebut
    // Data-data yang akan dikeluarkan oleh program yaitu data-data mengenai data dosen, data course dan data mata kuliah
    for (auto temp : vec) {
        cout << "\n=============== Data-Data Di " << temp.get_Nama_prodi() << " Dengan Kode Prodi " << temp.get_Kode() << " ===============\n";
        cout << "=    Data-Data Tersebut Meliputi Data Dosen, Data Course, dan Data Mahasiswa   =\n";

        // Mengeluarkan data dosen
        cout << "\n---------------------------------------------------------\n";
        cout << "+                    Data Dosen                         +\n";
        for (auto blank : temp.get_Dosen()) {
            cout << "---------------------------------------------------------\n";
            cout << "+    NIK                  : " << blank.get_NIK() << "                  +\n";
            cout << "+    Nama                 : " << blank.get_Name() << "                     +\n";
            cout << "+    Jenis Kelamin        : " << blank.get_Gender() << "                   +\n";
            cout << "+    Asal Universitas     : " << blank.get_Asal_univ() << "                         +\n";
            cout << "+    Email                : " << blank.get_Email_edu() << "             +\n";
            cout << "+    NIP                  : " << blank.get_Nip() << "                    +\n";
            cout << "+    Fakultas             : " << blank.get_Fakultas() << "                      +\n";
            cout << "+    Pendidikan Terakhir  : " << blank.get_Pend_terakhir() << "                          +\n";
            cout << "+    Keahlian             : " << blank.get_Keahlian() << "              +\n";
        cout << "---------------------------------------------------------\n";
        }

        // Mengeluarkan data course
        cout << "\n---------------------------------------------------------\n";
        cout << "+                    Data Course                        +\n";
        for (auto blank : temp.get_Course()){
            cout << "---------------------------------------------------------\n";
            cout << "+    Nama Mata Kuliah     : " << blank.get_Nama_matakuliah() << "              +\n";
        cout << "---------------------------------------------------------\n";        
        }

        // Mengeluarkan data mahasiswa
        cout << "\n---------------------------------------------------------\n";
        cout << "+                    Data Mahasiswa                     +\n";
        for (auto blank : temp.get_Mahasiswa()){
            cout << "---------------------------------------------------------\n";
            cout << "+    NIK              : " << blank.get_NIK() << "                      +\n";
            cout << "+    Nama             : " << blank.get_Name() << "                  +\n";
            cout << "+    Jenis Kelamin    : " << blank.get_Gender() << "                       +\n";
            cout << "+    Asal Universitas : " << blank.get_Asal_univ() << "                             +\n";
            cout << "+    Email            : " << blank.get_Email_edu() << "                     +\n";
            cout << "+    NIM              : " << blank.get_Nim() << "                         +\n";
            cout << "+    Fakultas         : " << blank.get_Fakultas() << "                          +\n";
        cout << "---------------------------------------------------------\n";        
        }
    }

    return 0;
}
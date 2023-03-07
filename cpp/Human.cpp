#include <iostream>
#include <string>

/*
    Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
    dalam mata kuliah Desain Pemrograman Berorientasi Objek 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
*/

using namespace std;

class Human {
    
    private:
        string NIK;     // Membuat variabel untuk nomor induk kependudukan
        string name;    // Membuat variabel untuk nama
        string gender;  // Membuat variabel untuk jenis kelamin

    public:
        // Konstruktor untuk inisialisasi variabel pada objek dari kelas Human
        Human(){
            this->NIK = "";         // Membuat variabel untuk nomor induk kependudukan
            this->name = "";        // Membuat variabel untuk nama
            this->gender = "";      // Membuat variabel untuk jenis kelamin
        }

        Human(string NIK, string name, string gender){
            this->NIK = NIK;
            this->name = name;
            this->gender = gender;
        }

    // Setter dan Getter

        // Getter dan Setter untuk NIK
        string get_NIK() {
            return NIK;
        }

        void set_NIK(string NIK) {
            this->NIK = NIK;
        }

        // Getter dan Setter untuk Name
        string get_Name() {
            return name;
        }

        void set_Name(string name) {
            this->name = name;
        }

        // Getter dan Setter untuk Jenis Kelamin
        string get_Gender() {
            return gender;
        }

        void set_Gender(string gender) {
            this->gender = gender;
        }

        // Destruktor
        ~Human(){
        }
        
};
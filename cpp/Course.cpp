class Course {
    
    /*
    Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
    dalam mata kuliah Desain Pemrograman Berorientasi Objek 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
    */

    private:
        string nama_matakuliah;     // Membuat variabel untuk nama matakuliah
        
    public:
        // Konstruktor untuk inisialisasi variabel pada objek dari kelas Course
        Course(){
            this->nama_matakuliah = "";         // Membuat variabel untuk nama matakuliah
        }

        Course(string nama_matakuliah){
            this->nama_matakuliah = nama_matakuliah;
        }

    // Setter dan Getter

        // Getter dan Setter untuk Nama_matakuliah
        string get_Nama_matakuliah() {
            return nama_matakuliah;
        }

        void set_Nama_matakuliah(string nama_matakuliah) {
            this->nama_matakuliah = nama_matakuliah;
        }
        
        // Destruktor
        ~Course(){
        }
        
};
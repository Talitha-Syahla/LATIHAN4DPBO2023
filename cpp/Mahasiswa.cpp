class Mahasiswa :  public SivitasAkademik{
    
    /*
    Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
    dalam mata kuliah Desain Pemrograman Berorientasi Objek 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
    */

    private:
        string nim;
        string fakultas;

    public:
    // Constructor
        Mahasiswa(){
            this->nim = "";
            this->fakultas = "";
        }

        Mahasiswa(string NIK, string name, string gender, string asal_univ, string email_edu,string nim, string fakultas) : SivitasAkademik(NIK, name, gender, asal_univ, email_edu){
            this->nim = nim;
            this->fakultas = fakultas;
        }

    // Setter dan Getter

        // Untuk NIM
        string get_Nim(){
            return this->nim;
        }

        void set_Nim(string nim){
            this->nim = nim;
        }

        // Untuk Fakultas
        string get_Fakultas(){
            return this->fakultas;
        }

        void set_Fakultas(string fakultas){
            this->fakultas = fakultas;
        }

        // Destruktor
        ~Mahasiswa(){
        }
    
};
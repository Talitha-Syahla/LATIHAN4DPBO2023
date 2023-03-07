class Dosen :  public SivitasAkademik{
    
    /*
    Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
    dalam mata kuliah Desain Pemrograman Berorientasi Objek 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
    */

    private:
        string nip;
        string fakultas;
        string pend_terakhir;
        string keahlian;

    public:
    // Constructor
        Dosen(){
            this->nip = "";
            this->fakultas = "";
            this->pend_terakhir = "";
            this->keahlian = "";
        }

        Dosen(string NIK, string name, string gender, string asal_univ, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian) : SivitasAkademik(NIK, name, gender, asal_univ, email_edu){
            this->nip = nip;
            this->fakultas = fakultas;
            this->pend_terakhir = pend_terakhir;
            this->keahlian = keahlian;
        }

    // Setter dan Getter

        // Untuk nip
        string get_Nip(){
            return this->nip;
        }

        void set_Nip(string nip){
            this->nip = nip;
        }

        // Untuk Fakultas
        string get_Fakultas(){
            return this->fakultas;
        }

        void set_Fakultas(string fakultas){
            this->fakultas = fakultas;
        }

        // Untuk Pend_terakhir
        string get_Pend_terakhir(){
            return this->pend_terakhir;
        }

        void set_Pend_terakhir(string pend_terakhir){
            this->pend_terakhir = pend_terakhir;
        }

        // Untuk Keahlian
        string get_Keahlian(){
            return this->keahlian;
        }

        void set_Keahlian(string keahlian){
            this->keahlian = keahlian;
        }

        // Destruktor
        ~Dosen(){
        }
    
};
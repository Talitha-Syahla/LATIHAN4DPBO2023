class SivitasAkademik :  public Human{
    
    /*
    Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
    dalam mata kuliah Desain Pemrograman Berorientasi Objek 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
    */

    private:
        string asal_univ;
        string email_edu;

    public:
    // Constructor
        SivitasAkademik(){
            this->asal_univ = "";
            this->email_edu = "";
        }

        SivitasAkademik(string NIK, string name, string gender, string asal_univ, string email_edu) : Human(NIK, name, gender){
            this->asal_univ = asal_univ;
            this->email_edu = email_edu;
        }

    // Setter dan Getter

        // Untuk Asal Universitas
        string get_Asal_univ(){
            return this->asal_univ;
        }

        void set_Asal_univ(string asal_univ){
            this->asal_univ = asal_univ;
        }

        // Untuk Email_edu
        string get_Email_edu(){
            return this->email_edu;
        }

        void set_Email_edu(string email_edu){
            this->email_edu = email_edu;
        }

        // Destruktor
        ~SivitasAkademik(){
        }
    
};
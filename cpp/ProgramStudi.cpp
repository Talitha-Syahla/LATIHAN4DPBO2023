class ProgramStudi{
    
    /*
    Saya Talitha Syahla NIM 2101330 mengerjakan Soal Latihan 4 
    dalam mata kuliah Desain Pemrograman Berorientasi Objek 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
    */

    private:
        string nama_prodi;
        string kode;
        vector<Dosen> dosen;
        vector<Mahasiswa> mahasiswa;
        vector<Course> course; 

    public:
    // Constructor
        ProgramStudi(){
            this->nama_prodi = "";
            this->kode = "";
        }

        ProgramStudi(string nama_prodi, string kode, vector<Dosen> dosen, vector<Mahasiswa> mahasiswa, vector<Course> course){
            this->nama_prodi = nama_prodi;
            this->kode = kode;
            this->dosen = dosen;
            this->mahasiswa = mahasiswa;
            this->course = course;
        }

    // Setter dan Getter

        // Untuk nama_prodi
        string get_Nama_prodi(){
            return this->nama_prodi;
        }

        void set_Nama_prodi(string nama_prodi){
            this->nama_prodi = nama_prodi;
        }

        // Untuk kode
        string get_Kode(){
            return this->kode;
        }

        void set_Kode(string kode){
            this->kode = kode;
        }

        // Untuk Dosen
        vector<Dosen> get_Dosen() {
            return this->dosen;
        }

        void addDosen(Dosen dosen) {
            this->dosen.push_back(dosen);
        }

        // Untuk Mahasiswa
        vector<Mahasiswa> get_Mahasiswa() {
            return this->mahasiswa;
        }

        void addMahasiswa(Mahasiswa mahasiswa) {
            this->mahasiswa.push_back(mahasiswa);
        }
        
        // Untuk Course
        vector<Course> get_Course() {
            return this->course;
        }

        void addCourse(Course course) {
            this->course.push_back(course);
        }

        // Destruktor
        ~ProgramStudi(){
        }
    
};
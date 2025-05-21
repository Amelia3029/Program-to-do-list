#include <stdio.h>

int main() {
    // Identitas
    printf("To-Do List Mahasiswa\n");
    printf("Nama: Amelia Futri\n");
    printf("NIM : 2409438\n\n");

    // Data hari kuliah
    char *hari[] = {"Senin", "Selasa", "Kamis"};
    int jumlah_hari = 3;

    // Kegiatan utama per hari (tanpa angka di depan nama matakuliah)
    char *kegiatan[3][3] = {
        {
            "Pemrograman Dasar (07:50-10:20)",
            "Pengelolaan Kelas (13:00-14:40)",
            "Kurikulum dan Pembelajaran (15:30-17:10)"
        },
        {
            "Pengantar Komputasi (07:00-09:30)",
            "Matematika Diskrit (13:00-15:30)",
            ""
        },
        {
            "Pendidikan Kewarganegaraan (08:40-10:20)",
            "Basis Data dan Sistem Basis Data (13:00-15:30)",
            "Olahraga dan Kebugaran (15:30-17:10)"
        }
    };

    // Jumlah kegiatan kuliah per hari
    int jumlah_kegiatan[3] = {3, 2, 3};

    // Kegiatan tambahan setelah kuliah (tanpa angka)
    char *tambahan[] = {
        "Pulang ke rumah",
        "Bersih-bersih, mandi, solat",
        "Mempelajari kembali materi yang didapat/mengerjakan tugas",
        "Istirahat/tidur"
    };

    // Looping untuk menampilkan jadwal
    for(int i = 0; i < jumlah_hari; i++) {
        printf("Hari %s:\n", hari[i]);
        // Tampilkan kegiatan kuliah tanpa angka di depan
        for(int j = 0; j < jumlah_kegiatan[i]; j++) {
            printf("  %s\n", kegiatan[i][j]);
        }
        // Tampilkan kegiatan tambahan tanpa angka
        for(int k = 0; k < 4; k++) {
            printf("  %s\n", tambahan[k]);
        }
        printf("\n");
    }

    return 0;
}

            
            
    

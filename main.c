#include "linkedlist.h"

int main() {
    address head = NULL, PNew;
    infotype X;
    
    // 1. Masukkan bilangan 7 sebagai elemen pertama
    Create_Node(&PNew);
    if (PNew == NULL) {
        printf("Gagal mengalokasikan memori! Overflow terjadi.\n");
        return 1;
    } else {
        printf("Berhasil mengalokasikan memori.\n");
        Isi_Node(&PNew, 7);
        Ins_Awal(&head, PNew);
        Tampil_List(head);
    }

    // 2. Masukkan bilangan 11 sebagai elemen kedua
    Create_Node(&PNew);
    if (PNew == NULL) {
        printf("Gagal mengalokasikan memori! Overflow terjadi.\n");
        return 1;
    } else {
        printf("Berhasil mengalokasikan memori.\n");
        Isi_Node(&PNew, 11);
        Ins_Akhir(&head, PNew);
        Tampil_List(head);
    }

    // 3. Masukkan bilangan 9 di antara 7 dan 11
    Create_Node(&PNew);
    if (PNew == NULL) {
        printf("Gagal mengalokasikan memori! Overflow terjadi.\n");
        return 1;
    } else {
        printf("Berhasil mengalokasikan memori.\n");
        Isi_Node(&PNew, 9);
        InsertAfter(head, PNew);
        Tampil_List(head);
    }
    
    // 4. Masukkan bilangan 5 di awal
    Create_Node(&PNew);
    if (PNew == NULL) {
        printf("Gagal mengalokasikan memori! Overflow terjadi.\n");
        return 1;
    } else {
        printf("Berhasil mengalokasikan memori.\n");
        Isi_Node(&PNew, 5);
        Ins_Awal(&head, PNew);
        Tampil_List(head);
    }
    
    // 5. Masukkan bilangan 13 di akhir
    Create_Node(&PNew);
    if (PNew == NULL) {
        printf("Gagal mengalokasikan memori! Overflow terjadi.\n");
        return 1;
    } else {
        printf("Berhasil mengalokasikan memori.\n");
        Isi_Node(&PNew, 13);
        Ins_Akhir(&head, PNew);
        Tampil_List(head);
    }

    // 6. Hapus elemen terakhir (bilangan 13) dengan pengecekan underflow
    if (head == NULL) {
        printf("Underflow! Tidak dapat menghapus karena list kosong.\n");
    } else {
        Del_Akhir(&head, &X);
        Tampil_List(head);
    }
    
    // 7. Hapus bilangan 7 dengan pengecekan underflow
    if (head == NULL) {
        printf("Underflow! Tidak dapat menghapus karena list kosong.\n");
    } else {
        DelByValue(&head, 7);
        Tampil_List(head);
    }
    
    // 8. Hapus elemen pertama (bilangan 5) dengan pengecekan underflow
    if (head == NULL) {
        printf("Underflow! Tidak dapat menghapus karena list kosong.\n");
    } else {
        Del_Awal(&head, &X);
        Tampil_List(head);
    }
    
    // 9. Hapus semua elemen list dengan pengecekan underflow
    while (head != NULL) {
        Del_Awal(&head, &X);
    }
    printf("Semua elemen telah dihapus.\n");
    Tampil_List(head);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int bil[20];
}bilangan;

//Mendeklarasikan struktur data elemen.
typedef struct elmt *alamatelmt;


typedef struct elmt{
    bilangan kontainer;
    alamatelmt next;
}elemen;


//Mendeklarasikan list tunggal (single linked list)
typedef struct{
    elemen *first;
}list;


//Mendeklarasikan prosedur createList
void createList(list *L){
    (*L).first = NULL;
}


//Mendeklarasika fungsi countElemen yang menghitung jumlah elemen list.
int countElement(list L){
    int hasil = 0;

    if(L.first != NULL){
        //List tidak kosong
        elemen *bantu = L.first; //pointer yg akan bantu itung berapa elemen dlm linked list

        while(bantu != NULL){
            //proses
            hasil++;
            bantu = bantu->next;
        }
    }
    return hasil;
}


//Mendeklarasikan prosedur addFirst
void addFirst(int bil, list *L){
    elemen *baru = (elemen *) malloc(sizeof(elemen));; //untuk menunjukkan elemen
    baru->kontainer.bil[0] = bil;

    if((*L).first == NULL){
        //Jika list kosong
        baru->next = NULL;
    }else{
        //Jika list tidak kosong
        baru->next = (*L).first;
    }
    (*L).first = baru;
    baru = NULL;
}


//Pendeklarasian elemen setelah elemen lain
void addAfter(elemen *prev, int bil){
    if(prev != NULL){
        elemen *baru = (elemen *) malloc(sizeof(elemen));; //untuk menunjukkan elemen
        baru->kontainer.bil[0] = bil;

        if(prev->next == NULL){
            baru->next = NULL;
        }else{
            baru->next = prev->next;
        }

        prev->next = baru;
        baru = NULL;
    }
}

//Mendeklarasikan prosedur addLast yang menambahkan elemen (node) pada akhir list.
void addLast(int bil, list *L){
    if((*L).first == NULL){
        //Jika list adalah list kosong
        addFirst(bil, L);
    }else{
        //Jika list tdk kosong
        //Mencari elemen terakhir list
        elemen *last = (*L).first;
        
        while(last->next != NULL){
            //Iterasi
            last = last->next;
        }
        addAfter(last, bil);
    }
}

//Mendeklarsaikan prosedur delFirst yang menghapus elemen (node) yang berada di depan list
void delFirst(list *L){
    if((*L).first != NULL){
        //Jika list tidak kosong
        elemen *hapus = (*L).first;
        if(countElement(*L) == 1){
            (*L).first = NULL;
        }else{
            (*L).first = (*L).first -> next;
        }
        hapus -> next = NULL;
        free(hapus);
    }else{
        printf("List Kosong\n");
    }
}

//Mendeklarasikan prosedur delAfter ang menghapus elemen (node) setelah elemen (node) lain pada list.
void delAfter(elemen *prev){
    if(prev != NULL){
        elemen *hapus = prev->next;
        if(hapus != NULL){
            if(hapus->next == NULL){
                prev->next = NULL;
            }else{
                prev->next = hapus->next;
            }
            hapus->next = NULL;
            free(hapus);
        }
    }
}


//Prosedur delLast yang menghapus elemen (node) yang berada di elemen terakhir
void delLast(list *L){
    if((*L).first != NULL){
        //Jika list tidak kosong
        if(countElement(*L) == 1){
            //List terdiri dari satu elemen
            delFirst(L);
        }else{
            //Mencari elemen terakhir list
            elemen *last = (*L).first;
            elemen *before_last;

            while(last->next != NULL){
                //Iterasi
                before_last = last;
                last = last->next;
            }
            delAfter(before_last);
        }
    }
}


//Mendeklarasikan prosedur printElement yang menampilkan isi elemen list
void printElement (list L){
    if(L.first != NULL){
        //Jika tidak kosong
        //Inisialisasi
        elemen *bantu = L.first;
        int i=1;
        while(bantu != NULL){
            //proses
            printf("Elemen ke - %d\n", i);
            printf("Bilangan\t: %d\n", bantu->kontainer.bil[0]);
            printf("=======================================\n");


            //Iterasi
            bantu = bantu -> next;
            i = i+1;
        }
    }else{
        //proses jika list kosong
        printf("List kosong\n");
    }
}


int main(){
    list L;

    printf("=======================================\n");
    createList(&L);
    printElement(L);
    printf("=======================================\n");


    addFirst(5, &L);
    addFirst(7, &L);
    addAfter(L.first->next, 10);
    addLast(15, &L);
    printElement(L);
    printf("=======================================\n");

    delLast(&L);
    delAfter(L.first->next);
    delFirst(&L);
    printElement(L);
    printf("=======================================\n");

    return 0;
}

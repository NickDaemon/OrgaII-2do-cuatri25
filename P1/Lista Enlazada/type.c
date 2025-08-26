#include "type.h"
#include <stdint.h>
#include <stdlib.h>

fat32_t* new_fat32() {
    fat32_t* nuevo = malloc(sizeof(fat32_t));
    return nuevo;
}

ext4_t* new_ext4() {
    ext4_t* nuevo = malloc(sizeof(ext4_t));
    return nuevo;
}

ntfs_t* new_ntfs() {
    ntfs_t* nuevo = malloc(sizeof(ntfs_t));
    return nuevo;
}

ext4_t* copy_ext4(ext4_t* file) {
    ext4_t* nuevo = malloc(sizeof(ext4_t));
    *nuevo = *file;
    return nuevo;
}

ntfs_t* copy_ntfs(ntfs_t* file) {
    ntfs_t* nuevo = malloc(sizeof(ntfs_t));
    *nuevo = *file;
    return nuevo;
}

fat32_t* copy_fat32(fat32_t* file) {
    fat32_t* nuevo = malloc(sizeof(fat32_t));
    *nuevo = *file;
    return nuevo;
}

void rm_fat32(fat32_t* file) {
    if (file != NULL) {
        free(file);
    }
}

void rm_ext4(ext4_t* file) {
    if (file != NULL) {
        free(file);
    }
}

void rm_ntfs(ntfs_t* file) {
    if (file != NULL) {
        free(file);
    }
}
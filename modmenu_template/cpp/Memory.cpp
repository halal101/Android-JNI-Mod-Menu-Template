
#include <cstring>
#include <unistd.h>
#include <sys/mman.h>
#include "Memory.h"

void patchMemory(void* address, const void* patch, size_t size) {
    mprotect((void*)((uintptr_t)address & ~(getpagesize() - 1)), size, PROT_READ | PROT_WRITE | PROT_EXEC);
    memcpy(address, patch, size);
    __builtin___clear_cache((char*)address, (char*)address + size);
}

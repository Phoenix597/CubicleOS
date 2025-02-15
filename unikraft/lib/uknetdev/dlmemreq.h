#ifndef MEMREQ_H
#define MEMREQ_H

void *dl_netdev_malloc(int size);
void *dl_netdev_calloc(int num, int size);
void dl_netdev_free(void *ptr);
char* get_memory_ramfs(unsigned num_bytes);

#endif /*MEMREQ_H*/


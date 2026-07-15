#ifndef __singly_linked_list__
#define __singly_linked-list__
typedef enum status status;
typedef enum state state;
typedef struct List lst;
lst* init_list(void);
int get_data(lst L, int i, int e);
lst* locate_list(lst L, int e);
status insert(lst* L, int i, int elem);
void createlist_head(lst* L, int n);
void createlist_rear(lst* L, int n);
#endif

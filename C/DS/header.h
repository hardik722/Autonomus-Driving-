#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st
{
int rollno;
char name[20];
float t_marks;
struct st *next;
}ST;
extern void add_bigin(ST**);
extern void add_end(ST **);
extern void add_middle(ST**);
extern void print(ST *);
extern int count(ST *);
extern void save(ST *);
extern void read_data(ST **);
extern void fwd_print_rec(ST *);
extern void rev_print_rec(ST *);
extern void fwd_print_aop(ST *);
extern void rev_print_aop(ST *);
extern void rev_print_temp(ST *);
extern void rev_data(ST *);

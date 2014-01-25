//Declare struct residing on the heap.
typedef struct _vulnerable_struct {
	char buff[MAX_LEN];
	int (*cmp)(char*,char*);
} vulnerable;

int is_file_foober_using_heap( vulnerable* s, char* one, char* two){
		// must have strlen(one + strlen(two) < MAX_LEN)
		strcpy( s->buff, one);
		strcat( s->buff, two);
		return s->cmp( s->buff, "file://foobar");
}

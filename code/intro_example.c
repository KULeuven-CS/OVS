int unsafe( char* a, char* b){
	char t[MAX_LEN]; 		// Allocate memory for MAX_LEN chars for variable t
	strcpy(t,a); 			// copy string a into t 
	strcat(t,b); 			// concatenate b to the end of t
	return strcmp(t, "abc"); 	// return the result of comparison 
}

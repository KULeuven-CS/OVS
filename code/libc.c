int median(int* data, int len, void* cmp ){
		//must have 0<len <= MAX-INTS
		int tmp[MAX-INTS];
		memcpy(tmp, data, len*sizeof(int)); // copy the input integers
		qsort(tmp, len, sizeof(int), cmp); // sort the local copy
		return tmp[len/2];
}

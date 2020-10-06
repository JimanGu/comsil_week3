#include "Str.h"
#include <iostream>
#include <string.h>

using namespace std;

Str::Str(int leng) {
	if(leng < 0) {
		cout << "Array bound error!" << endl;
		return;
	}	
	else {
		str = new char(leng);
		len = leng;
	}
}
Str::Str(char *neyong) {
	str = new char(strlen(neyong));
	len=strlen(neyong);
	strcpy(str, neyong);
}

Str::~Str() {
	delete[] str;
}

int Str::length() {
	return len;
}

char* Str::contents() {
	return str;
}

int Str::compare(class Str& a) {
	return strcmp(str, a.contents());
}

int Str::compare(char *a) {
	return strcmp(str, a);
}

void Str::operator=(char *a) {
	delete[] str;
	str = new char(strlen(a));
	strcpy(str, a);
	len = strlen(a);
}

void Str::operator=(class Str& a) {
	delete[] str;
	str = new char(strlen(a.contents()));
	strcpy(str, a.contents());
	len = strlen(a.contents());
}

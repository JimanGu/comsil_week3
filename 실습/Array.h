#ifndef __ARRAY__
#define __ARRAY__
#include <iostream>
#include <cstdlib>
using namespace std;

class Array{
	protected:
		int *data;
		int len;
	
	public:
		Array() {}

		Array(int size) : len(size)
		{
			data = new int[size];
		}
		
		

		int& operator[] (int index) {
			if (index < 0 || index >= len)
				cout << "Array bound Error!" << endl;
				
			return data[index];
		}

		int operator[](int index) const {
			if (index < 0 || index >= len)
				cout << "Array bound Error!" << endl;
			
			return data[index];
		}
		
	
		int length()
		{
			return len;
		}

		

		void print()
		{
			cout << "[";
			for (int i = 0; i < len - 1; i++)
				cout << data[i] << " ";
			cout << data[len - 1];
			cout << "]" << endl;
		}

		 ~Array() {
			delete[]data;
		}
};
#endif	



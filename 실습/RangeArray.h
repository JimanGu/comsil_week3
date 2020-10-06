#include "Array.h"

//*data¶û len Àº ÀÌ¹Ì Á¸Àç(°è½Â)

class RangeArray: public Array{
	protected:
		int low;
		int high;

	public:
		RangeArray(int start, int end) : low(start) , high(end) , Array(end-start+1)
		{
		//	len = high - low + 1;
		//	data = new int[len];

		}
		
		~RangeArray(){
		delete [] this->data;
		}

		int baseValue()
		{
			return low;
		}
		int endValue()
		{
			return high;
		}

		int& operator[](int index) {
			if (index<low||index>high)
				cout << "Array bound Error!" << endl;

			if (low < 0) return data[index - low];
			else if (low > 0) return data[index - low];
			else return data[index];
		}


		int operator[](int index)const {
			if (index<low || index>high)
				cout << "Array bound Error!" << endl;

			if (low < 0) return data[index - low];
			else if (low > 0) return data[index - low];
			else return data[index];
		}

		//~RangeArray() {
		//	delete[]data;
		//}
	};

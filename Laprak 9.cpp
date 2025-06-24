#include <iostream>
using namespace std;

class Laprak {
	private:
		int A[3][3];
		int B[9];
	
	public:
		void input () {
			cout << "Masukkan data array 3x3 : " << endl;
			
			for (int i=0; i<3; i++) {
				for (int j=0; j<3; j++) {
					cin >> A[i][j];
				}
			}
		}
		
		void masukkan_1D () {
			int index = 0;
			
			for (int i=0; i<3; i++) {
				for (int j=0; j<3; j++) {
					B[index] = A[i][j];
					index++;
				}
			}
		}
		
		void sort () {
			int temp;
			
			for (int i=0; i<9-1; i++) {
				for (int j=i+1; j<9; j++) {
					if (B[i] < B[j]) {
						temp = B[i];
						B[i] = B[j];
						B[j] = temp;
				 }
			 }
			}
		}
		
		void masukkan_2D () {
			int index = 0;
			
			for (int i=0; i<3; i++) {
				for (int j=0; j<3; j++) {
					A[i][j] = B[index];
					index++;
				}
			}
		}
		
		void tampil_1D () {
			for (int i=0; i<9; i++) {
				cout << B[i] << " ";
			}
		}
		
		void tampil_2D () {
			for (int i=0; i<3; i++) {
				for (int j=0; j<3; j++) {
					cout << A[i][j] << " ";
				}
				cout << endl;
			}
		}
};

int main() {
	Laprak ke_9;
	
	ke_9.input ();
	cout << endl;
	
	cout << "Sebelum di sorting :" << endl << endl;
	ke_9.tampil_2D ();
	cout << endl;
	
	ke_9.masukkan_1D ();
	ke_9.tampil_1D();
	cout << endl << endl;
	
	cout << "Setelah di sorting :" << endl << endl;
	ke_9.sort ();
	ke_9.tampil_1D();
	cout << endl << endl;
	ke_9.masukkan_2D ();
	ke_9.tampil_2D ();
}
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pnim) { nim = pnim; /*Definisi function*/ }
	static int getNim() { return nim; /*Definisi Function*/ }
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

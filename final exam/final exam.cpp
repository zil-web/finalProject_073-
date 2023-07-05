#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }

	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int a) {
		this->y = a;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukan jejari : ";
		int r;
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}

	void cekUkuran() {
		float hasilLuas = Luas(getX());
		float hasilKeliling = Keliling(getX());

		cout << "Luas lingkaran: " << hasilLuas << endl;
		cout << "Keliling lingkaran: " << hasilKeliling << endl;

		if (hasilKeliling >= 40) {
			cout << "Ukuran lingkaran adalah besar" << endl;
		}
		else if (hasilKeliling > 20) {
			cout << "Ukuran lingkaran adalah sedang" << endl;
		}
		else {
			cout << "Ukuran lingkaran adalah kecil" << endl;
		}
	}
};

class Persegipanjang :public bidangDatar {
public:
	void input() {
		cout << "\nPersegipanjang dibuat" << endl;
		cout << "Masukan Panjang : ";
		int p;
		cin >> p;
		setX(p);

		cout << "Masukan Lebar : ";
		int l;
		cin >> l;
		setY(l);
	}
	float Luas(int p, int l) {
		return p * l;
	}

	float Keliling(int p, int l) {
		return 2 * (p + l);
	}

	void cekUkuran() {
		float hasilLuas = Luas(getX(), getY());
		float hasilKeliling = Keliling(getX(), getY());

		cout << "Luas lingkaran: " << hasilLuas << endl;
		cout << "Keliling lingkaran: " << hasilKeliling << endl;

		if (hasilKeliling >= 40) {
			cout << "Ukuran lingkaran adalah besar" << endl;
		}
		else if (hasilKeliling > 20) {
			cout << "Ukuran lingkaran adalah sedang" << endl;
		}
		else {
			cout << "Ukuran lingkaran adalah kecil" << endl;
		}
	}
};

int main() {
	Lingkaran l;
	Persegipanjang p;

	char ulangi;
	do {
		l.input();
		l.cekUkuran();

		p.input();
		p.cekUkuran();

		cout << "\nApakah ingin mengulang? (y/n): ";
		cin >> ulangi;
	} while (ulangi == 'y' || ulangi == 'Y');

	return 0;
}

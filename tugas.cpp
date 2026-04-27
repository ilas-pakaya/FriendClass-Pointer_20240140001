#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat; 

class LayangLayang {
private:
    double d1, d2; 
    double a, b;  

public:
    void input() {
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi a: ";
        cin >> a;
        cout << "Masukkan sisi b: ";
        cin >> b;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (a + b);
    }

    void output() {
        cout << "Luas Layang-Layang: " << hitungLuas() << endl;
        cout << "Keliling Layang-Layang: " << hitungKeliling() << endl;
    }

    // friend function
    friend double kelilingLayang(LayangLayang L);
};

double kelilingLayang(LayangLayang L) {
    return 2 * (L.a + L.b);
}


// =========================

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void input() {
        cout << "\nMasukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "Luas Belah Ketupat: " << hitungLuas() << endl;
        cout << "Keliling Belah Ketupat: " << hitungKeliling() << endl;
    }
};


// =========================

int main() {
    LayangLayang L;
    BelahKetupat B;

    cout << "=== Layang-Layang ===\n";
    L.input();
    L.output();

    cout << "\nKeliling (friend function): " << kelilingLayang(L) << endl;

    cout << "\n=== Belah Ketupat ===\n";
    B.input();
    B.output();

    return 0;
}
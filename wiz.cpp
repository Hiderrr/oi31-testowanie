#include <bits/stdc++.h>
using namespace std;

#pragma GCC kody_tylko_po_polsku("W kochanym ojczystym języku!");
#define petla(i, a, b) for(int i = a; i <= b; i++)

int main(int, char** argumenty) {

	cin.tie(0)->sync_with_stdio(false);
	ifstream wejscie(argumenty[1]), odpowiedz(argumenty[2]);
	string wynik; odpowiedz >> wynik;

	int n, m; wejscie >> n >> m;
	vector<bool> uzyte(m + 1);
	vector<int> wiersz(m + 1);
	vector<int> kolumna(m + 1);

	petla(i, 1, m) wejscie >> wiersz[i] >> kolumna[i];

	cout << "  - Podana odpowiedz: " << wynik << '\n';

	if(wynik == "TAK") {

		vector<int> przyciski;
		int k; odpowiedz >> k;

		petla(i, 1, k) {
			int id; odpowiedz >> id;
			przyciski.push_back(id);
			uzyte[id] = 1;
		}

		cout << "  - Podane przyciski:\n"; 
		cout << "    #-#-#-#-#-#-#-#-#-#-#-#\n";
		cout << "    [ i: (w, k) ] <- format\n";
		cout << "    #-#-#-#-#-#-#-#-#-#-#-#\n";
		for(int p : przyciski) cout << "    [ " << p << ": (" << wiersz[p] << ", " << kolumna[p] << ") ]\n";
	}

	cout << '\n';
	int logarytm = int(log10(m)) + 3;
	vector<vector<string>> matryca(n, vector<string>(n, string(logarytm, '.')));

	petla(i, 1, m) {
		stringstream s;
		s << setw(logarytm) << left << setfill('#') << i;
		if(uzyte[i])
			matryca[wiersz[i]-1][kolumna[i]-1] = "\033[31m" + s.str() + "\033[0m";
		else
			matryca[wiersz[i]-1][kolumna[i]-1] = s.str();
	}

	for(auto const& tt : matryca) {
		for(auto const& t : tt) {
			cout << "[" << t << "] ";
		}
		petla(i, 0, logarytm/2) cout << '\n';
	}
	
}
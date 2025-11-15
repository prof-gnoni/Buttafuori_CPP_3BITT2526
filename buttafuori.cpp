#include <iostream>
using namespace std;
//max num persone(MAX), maggiorenni(età)>18, età media
//if età<18 non può passare

const int MAX = 100;

int main() {
    int eta, np, nm, nf, genere;
    float mediam, mediaf, sommaf, sommam;
    np = 0;
    nm = 0;
    nf = 0;
    sommaf = 0;
    sommam = 0;
    do {
        do {
            cout << "inserisci la tua eta': ";
            cin >> eta;
        } while (eta < 0);
        if (eta >= 18) {
            cout << "puoi entrare" << endl;
            np++;
            do {
                cout << "inserisci il tuo genere, digitare 1 se sei maschio invece digitare 2 se sei femmina ";
                cin >> genere;
            } while (genere <= 0 || genere >= 3);
            if (genere == 1) {
                nm++;
                sommam += eta;
                mediam = sommam / nm;
            } else {
                nf++;
                sommaf += eta;
                mediaf = sommaf / nf;
            }
        } else {
            cout << "Non puoi entrare." << endl;
        }
        cout << "Il numero di maschi e': " << nm << endl;
        if (nm > 0) {
            cout << "L'eta' media dei maschi e': " << mediam << endl;
        } else {
            cout << "Nessun maschio presente. Media eta' non calcolabile." << endl;
        }
        cout << "Il numero di femmine e': " << nf << endl;
        if (nf > 0) {
            cout << "L'eta' media delle femmine e': " << mediaf << endl;
        } else {
            cout << "Nessuna femmina presente. Media eta' non calcolabile." << endl;
        }
    } while (np < MAX);
    cout << endl << "Capacita' massima raggiunta. Il locale non permette ulteriori ingressi." << endl;

    return 0;
}
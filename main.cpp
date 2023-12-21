#include <iostream>
#include <fstream>

struct Car{
    int Cid, Cs, Ct, Cc, Cd;
};

int main() {
    int T, R, Ccar, save;
    int somma=0, sommaMax=0, count=0;
    Car C;
    std::ifstream in ("input.txt");
    std::ofstream out ("output.txt");

    in >> T;
    for (int i = 0; i < T; ++i) {
        in >> R >> Ccar;
        for (int j = 0; j < Ccar; ++j) {
            in >> C.Cid;
            in >> C.Cs;
            in >> C.Ct;
            in >> C.Cc;
            in >> C.Cd;
            somma+=C.Cs+C.Ct+C.Cc+C.Cd;
            if (somma>sommaMax) {
                sommaMax = somma;
                save=C.Cid;
            }
        }
        out << "Case #" << i+1 << ":" << " " << save << std::endl;
    }
    return 0;
}

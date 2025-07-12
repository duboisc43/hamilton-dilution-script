#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Well {
    string name;
};

void aspirate(int volume, const string& location) {
    cout << "Aspirating " << volume << " µL at " << location << endl;
}

void dispense(int volume, const string& location) {
    cout << "Dispensing " << volume << " µL at " << location << endl;
}

void mix(int cycles, int volume, const string& location) {
    cout << "Mixing " << cycles << " times with " << volume << " µL in " << location << endl;
}

int main() {
    const int DiluentVol = 75;
    const int SampleVol = 25;

    vector<Well> Plate1(96), Plate2(96);
    for (int i = 0; i < 96; ++i) {
        Plate1[i].name = "Plate1_Well_" + to_string(i + 1);
        Plate2[i].name = "Plate2_Well_" + to_string(i + 1);

        cout << "Pick up tip\n";

        aspirate(DiluentVol, Plate2[i].name);
        dispense(DiluentVol, Plate2[i].name);

        aspirate(SampleVol, Plate1[i].name);
        dispense(SampleVol, Plate2[i].name);

        mix(3, 50, Plate2[i].name);

        cout << "Drop tip\n\n";
    }

    return 0;
}

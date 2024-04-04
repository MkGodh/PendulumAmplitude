#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;
int main() {

    setlocale(LC_ALL, "RUS");
    float StarterAmplitude;
    float EndlessAmplitude;
    int counter = 0;
    cout << "Введите начальную амплитуду колебаний в сантиметрах: "; cin >> StarterAmplitude;
    cout << "Введите конечную амплитуду колебаний в сантиметрах: "; cin >> EndlessAmplitude;

    while (StarterAmplitude > EndlessAmplitude) {
        float percentage = StarterAmplitude / 100 * 8.4;
        StarterAmplitude -= percentage;
        counter++;
    }
    cout << "Маятник качнется " << counter << " раз прежде чем остановится.";
    return 0;
}
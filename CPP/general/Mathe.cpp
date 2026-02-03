#include <iostream>
#include <cmath>
int main() {

    double x = 2.5;
    double y = 4;
    double z;
    double q;
    double p;
    double w;
    double r;
    double t;
    double i;
    double v;
    double u;
    double g;
    double e;
    double h;
    z = std::max(x, y); // max funktion, also findet die größere von zwei zahlen heraus
    q = std::min(x, y); // min funktion, also findet die größere von zwei zahlen heraus
    p = pow(2,3); // power funktion, also potenzieren
    w = sqrt(z); // quadratwurzel funktion
    r = abs(-3); // betrag funktion
    t = round(x); // runden
    i = ceil(x); // immer am aufrunden
    v = floor(x); // immer am abrunden
    u = cos(x); // cosinus im bogenmaß (rad)
    g = acos(x/y); // arcus cosinus
    e = log(2.72); // log = ln
    h = log10(200000); // log10 = lg
    // etc.
    std::cout << h;
    return 0;
}
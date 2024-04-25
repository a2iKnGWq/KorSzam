#include "myheader.h"

// I used ChatGPT !!!

int main() {        // Example usage
    Polinom p1({1, 2, 3}); // Polinom with coefficients {1, 2, 3}
    Polinom p2({0, -1, 2}); // Polinom with coefficients {0, -1, 2}

    Polinom sum = p1 + p2;
    Polinom difference = p1 - p2;
    Polinom product = p1 * p2;
    Polinom derivative = p1.derivative();

    cout << "Sum: "; for (double coeffs : sum.coeffs) cout << coeffs << " "; cout << endl;
    cout << "Difference: "; for (double coeffs : difference.coeffs) cout << coeffs << " "; cout << endl;
    cout << "Product: "; for (double coeffs : product.coeffs) cout << coeffs << " "; cout << endl;
    cout << "Derivative: "; for (double coeffs : derivative.coeffs) cout << coeffs << " "; cout << endl;

    return 0;

}
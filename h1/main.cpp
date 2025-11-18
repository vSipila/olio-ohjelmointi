#include <iostream>

using namespace std;
void calcSum(int a, int b) {
    cout << a + b;
}
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "virhe";
    }
    else {
        (cout << a / b);
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;

}
int main()
{
    int a;
    int b;
    cout << "anna luvut";
    cin >> a >> b;

    calcSum(a, b);
    calcDiv(a, b);


    int sum = retSum(a, b);
    cout << "retSum palautti: " << sum;

    try {
        float result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

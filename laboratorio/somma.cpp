#include <iostream>
using namespace std;

int main() {

    int a, b;
    
    cout<< "Inserisci primo valore per la somma: ";
    cin >> a;
    cout<< "Inserisci secondo valore per la somma: ";
    cin >> b;
    
    //somma
    
    int somma= a + b;
    
    cout << "La somma dei due valori è: " << somma << endl;
    
    
    //aggiunta della sottrazione
    
    int sottrazione = a-b;
    cout << "La sottrazione dei due valori è: " << sottrazione;
    
    return 0;
}

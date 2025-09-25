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
    cout << "La sottrazione dei due valori è: " << sottrazione << endl;
    
    //aggiunta moltiplicazione
    
    int moltiplicazione = a*b;
    cout << "La moltiplicazione dei due valori è: " << moltiplicazione;
    
    return 0;
}

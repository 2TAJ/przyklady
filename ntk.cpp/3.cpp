void wypiszWiekszeOd7(Tablica &tablica)
{
    cout << "Liczby większe od 7: ";
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] > 7)
        {
            cout << tablica.elementy[i] << " ";
        }
    }
    cout << endl;
}

void wypiszParzysteNieparzyste(Tablica &tablica)
{
    cout << "Liczby parzyste: ";
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] % 2 == 0)
        {
            cout << tablica.elementy[i] << " ";
        }
    }
    cout << endl;

    cout << "Liczby nieparzyste: ";
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] % 2 != 0)
        {
            cout << tablica.elementy[i] << " ";
        }
    }
    cout << endl;
}
// int przeszukaj(Tablica &tablica, int szukana)
// {
//     for (int i = 0; i < tablica.rozmiar; ++i)
//     {
//         if (tablica.elementy[i] == szukana)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
void przeszukaj(Tablica &tablica, int szukana)
{
    bool znaleziono = false;
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] == szukana)
        {
            cout << "Znaleziono wartość " << szukana << " na indeksie: " << i << endl;
            znaleziono = true;
        }
    }
    if (!znaleziono)
    {
        cout << "Wartość " << szukana << " nie została znaleziona." << endl;
    }
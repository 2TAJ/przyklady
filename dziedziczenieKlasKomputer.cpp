// #include <iostream>
// using namespace std;

// class Procesor
// {
// public:
//   string chipset;
// };

// class Pamiec
// {
// public:
//   int ram;
// };

// class TorbaNaLaptopa
// {
// public:
//   bool czyDac;
// };

// class RozmiarMatrycy
// {
// public:
//   int w;
// };

// class EkranDotykowy
// {
// public:
//   bool czyJest;
// };

// class Desktop : public Procesor, public Pamiec
// {
//   bool czyRgb;

// public:
//   void display()
//   {
//     cout << "chipset:" << chipset << " pamiec:" << ram << " czyRgb:" << czyRgb << endl;
//   }
// };

// class Laptop : public Procesor,
//                public Pamiec,
//                public TorbaNaLaptopa,
//                public RozmiarMatrycy,
//                public EkranDotykowy
// {
// public:
//   string marka;
//   void display()
//   {
//     cout << "chipset:" << chipset << " pamiec:" << ram << " ekran dotykowy:" << czyJest << " rozmiar matrycy:" << w << " torba na laptop:" << czyDac << " marka:" << marka << endl;
//   }
// };

// class Tablet : public Procesor,
//                public Pamiec,
//                public RozmiarMatrycy,
//                public EkranDotykowy
// {
// public:
//   string marka;
//   void display()
//   {
//     cout << "chipset:" << chipset << " pamiec:" << ram << " ekran dotykowy:" << czyJest << " rozmiar matrycy:" << w << " marka:" << marka << endl;
//   }
// };

// int main()
// {
//   Laptop laptop;
//   laptop.ram = 8;
//   laptop.chipset = "intel";
//   laptop.czyDac = true;
//   laptop.w = 4000;
//   laptop.czyJest = false;
//   laptop.marka = "lenovo";

//   laptop.display();

//   return 0;
// }
#include <iostream>
#include <iomanip>
using namespace std;
class Food
{
    public:
    int paneerfull = 0;
    int paneerhalf = 0;
    int mashroomfull = 0;
    int mashroomhalf = 0;
    int tandoorifull = 0;
    int tandoorihalf = 0;
    int paneermalaifull = 0;
    int paneermalaihalf = 0;
    void paneer(int full, int half){
        paneerfull = full;
        paneerhalf = half;
    }
    void mashroom(int full, int half){
        mashroomfull = full;
        mashroomhalf = half;
    }
    void tandoori(int full, int half){
        tandoorifull = full;
        tandoorihalf = half;
    }
    void malai(int full, int half){
        paneermalaifull = full;
        paneermalaihalf = half;
    }
    void Bill(void){
        int rupeepaneer = paneerfull*270+paneerhalf*160;
        int rupeemashroom = mashroomfull*285+mashroomhalf*180;
        int rupeetandoori = tandoorifull*260+tandoorihalf*150;
        int rupeepaneermalai = paneermalaifull*285+paneermalaihalf*180;
        int Finalamt = rupeepaneer+rupeemashroom+rupeetandoori+rupeepaneermalai;
        cout<<"|================================================================================================|"<<endl;
        cout<<"|      |******************************|                                                          |"<<endl;
        cout<<"|      |   Welcome To Our Restaurant  |                                                          |"<<endl;
        cout<<"|      |      |------------------|    |                                                          |"<<endl;
        cout<<"|      |      |   The Khana Hub  |    |                                                          |"<<endl;
        cout<<"|      |      |------------------|    |                                                          |"<<endl;
        cout<<"|      |******************************|                                                          |"<<endl;
        cout<<"|                                                                                                |"<<endl;
        cout<<"|               {BILL GENERATED}                                                                 |"<<endl;
        if (rupeepaneer!=0)
        {
        cout<<"| 1.Paneer Tikka                 Quantity of FULL = "<<left<<setw(6)<<paneerfull<<"============================================"<<endl;
        cout<<"|                                Quantity of half = "<<left<<setw(6)<<paneerhalf<<"============================================"<<endl;
        cout<<"|                                Amount = "<<left<<setw(6)<<rupeepaneer<<"============================================"<<endl;
        }
        if (rupeemashroom!=0)
        {
        cout<<"| 1.mashroom Tikka               Quantity of FULL = "<<left<<setw(6)<<mashroomfull<<"============================================"<<endl;
        cout<<"|                                Quantity of half = "<<left<<setw(6)<<mashroomhalf<<"============================================"<<endl;
        cout<<"|                                Amount = "<<left<<setw(6)<<rupeemashroom<<"============================================"<<endl;
        }
        if (rupeetandoori!=0)
        {
        cout<<"| 1.tandoori Tikka               Quantity of FULL = "<<left<<setw(6)<<tandoorifull<<"============================================"<<endl;
        cout<<"|                                Quantity of half = "<<left<<setw(6)<<tandoorihalf<<"============================================"<<endl;
        cout<<"|                                Amount = "<<left<<setw(6)<<rupeetandoori<<"============================================"<<endl;
        }
        if (rupeepaneer!=0)
        {
        cout<<"| 1.paneermalai Tikka            Quantity of FULL = "<<left<<setw(6)<<paneermalaifull<<"============================================"<<endl;
        cout<<"|                                Quantity of half = "<<left<<setw(6)<<paneermalaihalf<<"============================================"<<endl;
        cout<<"|                                Amount = "<<left<<setw(6)<<rupeepaneermalai<<"============================================"<<endl;
        }
        
       
        
        
    }
};
int main(){
    Food obj;
    int option;
    int full;
    int half;



    do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;

      cout<<"|===============================================|"<<endl;
      cout<<"|      |   Welcome To Our Restaurant  |         |"<<endl;
      cout<<"|      |******************************|         |"<<endl;
      cout<<"|      |      |------------------|    |         |"<<endl;
      cout<<"|      |      |   The Khana Hub  |    |         |"<<endl;
      cout<<"|      |      |------------------|    |         |"<<endl;
      cout<<"|      |******************************|         |"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"|                  {Vegetables}                 |"<<endl;
      cout<<"|                   (Starters)                  |"<<endl;
      cout<<"|                                 Full   Half   |"<<endl;
      cout<<"| 1.Paneer Tikka                 Rs.270  Rs.160 |"<<endl;
      cout<<"| 2.Mashroom Tikka               Rs.285  Rs.180 |"<<endl;
      cout<<"| 3.Tandoori Malai Chaap         Rs.260  Rs.150 |"<<endl;
      cout<<"| 4.Paneer malai tikka           Rs.285  Rs.180 |"<<endl;
      cout<<"|                                               |"<<endl;
      cout<<"|               {Non-Vegetarian}                |"<<endl;
      cout<<"|                  (Starters)                   |"<<endl;
      cout<<"|                                 Full   Half   |"<<endl;
      cout<<"| 1.Tandoori Chicken             Rs.280  Rs.150 |"<<endl;
      cout<<"| 2.Chicken Tikka                Rs.300  Rs.160 |"<<endl;
      cout<<"| 3.Chicken Seek Kabab           Rs.90    N/A   |"<<endl;
      cout<<"| 4.Mutton Kabab Roll            Rs.100   N/A   |"<<endl;
      cout<<"|                  (Order NOw)                  |"<<endl;
      cout<<"|===============================================|"<<endl;


    cout << "1. paneer()" << endl;
    cout << "2. mashroom()" << endl;
    cout << "3. tandoori()" << endl;
    cout << "4. malai()" << endl;
    cout << "5. GENERATE BILL" << endl;
    cout << "6. Clear Screen" << endl << endl;
    

    cin >> option;
    switch (option) {
    case 0:

      break;
    case 1:
      cout << "Paneer" << endl;
      cin >> full;
      cin >> half;
      obj.paneer(full,half);
      break;

    case 2:
      cout << "mashroom" << endl;
      cin >> full;
      cin >> half;
      obj.mashroom(full,half);
      break;
    case 3:
      cout << "tandoori" << endl;
      cin >> full;
      cin >> half;
      obj.tandoori(full,half);
      break;
    case 4:
      cout << "malai" << endl;
      cin >> full;
      cin >> half;
      obj.malai(full,half);
      break;
    case 5:
      obj.Bill();
      option=0;
      break;
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);



    return 0;
}
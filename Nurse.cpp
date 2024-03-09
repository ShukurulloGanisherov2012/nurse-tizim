#include <iostream>
using namespace std;
int main(){
    string ismlar[1000],manzillar[1000],yonalishlar[1000],familiyalar[1000];
    int yillar[10000];
    int N=0;
    while(true){
        cout << "_________________________________________________________________________________\n";
        cout << "1.Add     2.Show     3.Search(F.I.O)     4.Search(address)     5.Search(direction\n";
        int a;
        cout << "Tanlang: ";
        cin >> a;
        if(a==1){
            cout << "Siz shifokorlar qo'shish menyusini tanladingiz!\n\n";
            string name,surname,direction,address;
            int year;
            cout << "Shifokorning ismini kiriting: ";
            cin >> name;
            cout << "Shifokorning familiyasini kiriting: ";
            cin >> surname;
            cout << "Shifokorning yilini kiriting: ";
            cin >> year;
            cout << "Shifokorning yo'nalishi kiriting: ";
            cin >> direction;
            cout << "Shifokorning manzili kiriting: ";
            cin >> address;
            ismlar[N] = name;
            familiyalar[N] = surname;
            yillar[N] = year;
            yonalishlar[N] = direction;
            manzillar[N] = address;
            N++;
            cout << "Yangi shifokor qo'shildi\n";
        }else if(a==2){
            cout << "Siz shifokorlarni ko'rish menyusini tanladingiz\n\n";
            for(int i=0;i<N;i++){
                cout << i+1 << ") "
                << familiyalar[i] << " " << ismlar[i] << " (yili - "
                << yillar[i] << ", yo'nalishi - " << yonalishlar[i] << ", manzili - "
                << manzillar[i] << endl;
            }
        }else if(a==3){
            cout << "Siz shifokorni F.I.O bo'yicha qidirish menyusini tanladingiz!\n\n";
            string n,s;
            cout << "Qidirilayotgan shifokorni ismini kiriting: ";
            cin >> n;
            cout << "Qidirilayotgan shifokorni familiyasini kiriting: ";
            cin >> s;
            for(int i=0;i<N;i++){
                if(n==ismlar[i] and s==familiyalar[i]){
                    cout << i+1 << ") "
                << familiyalar[i] << " " << ismlar[i] << " (yili - "
                << yillar[i] << ", yo'nalishi - " << yonalishlar[i] << ", manzili - "
                << manzillar[i] << endl;
                }
            }
        }else if(a==4){
            cout << "Siz shifokorni manzili bo'yicha qidirish menyusini tanladingiz!\n\n";
            string k;
            cout << "Qidirilayotgan shifokorni manzilini kiriting: ";
            cin >> k;
            for(int i=0;i<N;i++){
                if(k==manzillar[i]){
                    cout << i+1 << ") "
                << familiyalar[i] << " " << ismlar[i] << " (yili - "
                << yillar[i] << ", yo'nalishi - " << yonalishlar[i] << ", manzili - "
                << manzillar[i] << endl;
                }
            }
        }else if(a==5){
            cout << "Siz shifokorni yo'nalishi bo'yicha qidirish menyusini tanladingiz!\n\n";
            string l;
            cout << "Qidirilayotgan shifokorni yo'nalishini kiriting: ";
            cin >> l;
            for(int i=0;i<N;i++){
                if(l==yonalishlar[i]){
                    cout << i+1 << ") "
                << familiyalar[i] << " " << ismlar[i] << " (yili - "
                << yillar[i] << ", yo'nalishi - " << yonalishlar[i] << ", manzili - "
                << manzillar[i] << endl;
                }
            }
        }else {
            cout << "Bunday menu yo'q\n";
        }
    }
}

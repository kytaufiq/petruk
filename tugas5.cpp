#include<iostream>
#include<cstring>
using namespace std;

void kapital(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
        
    }
}
bool kata(const char* word, const char matrix[][24], int size) {
    int panjangKata = strlen(word);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= size; j++) {
            bool found = true;
            for (int k = 0; k < panjangKata; k++) {
                if (matrix[i][j + k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return true;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= size; j++) {
            bool found = true;
            for (int k = 0; k < panjangKata; k++) {
                if (matrix[i][j - k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return true;
            }
        }
    }

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    char words[n][25];
    
    const char matrix[24][24] = {
        "AAFLKHPFSSUFICICLESGNNH",
        "SFVREOMRWLRTTSXOQQNAOAO",
        "QEIAIFXAEIRFVFYSXIMINJI",
        "WSTRLGOCAPBIAFIWIWTUACM",
        "FEYAEAISTPCRLUJKOAKCERS",
        "RVDAKPNDEEHDEMSNCKKFOAH",
        "MRNEDSLCRRIWNRSAAFITMMI",
        "YAAECIEAHYMOTAVHRSSTISB",
        "RJSEWELCCENNIETOHWSGLSE",
        "ATANYYMOIEESNESIOIRELTR",
        "UTENEWEBHMYBETNNRAIEBEN",
        "RCLKUTEAEQJLSGSHTGDSKOA",
        "BHOICATNRRSDDECEHOOLGIT",
        "ENSLUARIRSETALOCOHCTOHE",
        "FZFUDQJYMADOYIWYGLOVESU",
        "TEKALFWONSNAEBMIEJTZNTG",
        "ESWPOSJXEUTUYOZUWAKEZHM",
        "KZUHBPEZEERFLMSNOWBALLH",
        "NSNOWBOARDYTVWYCLEVOHSA",
        "ACOCRQLGZIYCHODRAZZILBI",
        "LBVKKWANZAAQINWOLPWONSL",
        "BFREEZINGRAINSLILGTMELT",
        "HQPYLWHFMNFFUFPSWXNUMMV"
    };

    for (int i = 0; i < n; i++) {
        cin.getline(words[i], 25);
        kapital(words[i]);
    }    
return 0;
}

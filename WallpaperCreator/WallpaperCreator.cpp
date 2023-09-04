#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

// Função para criar o arquivo HTML com o código do papel de parede
void createWallpaperFile(const string& htmlCode, const string& cssCode) {
    ofstream outputFile("wallpaper.html");

    outputFile << "style\n" << style "\n</style>\n";
    outputFile << htmlCode;

    outputFile.close();
}

// Função para abrir o papel de parede no navegador
void openWallpaperInBrowser() {
    ShellExecute(NULL, "open", "wallpaper.html", NULL, NULL, SW_SHOWNORMAL);
}

int main() {
    cout << "Bem-vindo ao Wallpaper Animator!" << endl;

    string htmlCode;
    string cssCode;

    cout << "Digite o HTML do papel de parede animado: " << endl;
    getline(cin, htmlCode);

    cout << "Digite o CSS do papel de parede animado: " << endl;
    getline(cin, cssCode);

    createWallpaperFile(htmlCode, cssCode);

    cout << "Papel de parede criado com sucesso!" < endl;
    cout << "Pressione Enter para visualizar o papel de parede." << endl;
    cin.get();

    openWallpaperInBrowser();

    return 0;

}
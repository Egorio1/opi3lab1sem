#include <iostream>
// LavrinovichEgor2007  
// Windows1251 I 4C 61 76 72 69 6E 6F 76 69 63 68 I 45 67 6F 72 I 32 30 30 37
// UTF-16 I 4C 61 76 72 69 6E 6F 76 69 63 68 I 45 67 6F 72 I 32 30 30 37
// UTF-8 I 4C 61 76 72 69 6E 6F 76 69 63 68 I 45 67 6F 72 I 32 30 30 37              
// Ћавринович≈гор¬ладимирович2007
// Windows1251 I CB E0 E2 F0 E8 ED EE E2 E8 F7 I C5 E3 EE F0 I C2 EB E0 E4 E8 EC E8 F0 EE E2 E8 F7 I 32 30 30 37
// UTF-16 I 41B 430 432 440 438 43D 43E 432 438 447 I 415 433 43E 440 I 412 43B 430 434 438 43C 438 440 43E 432 438 447 I 32 30 30 37
// UTF-8 I D0 9B D0 B0 D0 B2 D1 80 D0 B8 I D0 BD D0 BE I D0 B2 D0 B8 D1 87 D0 95 D0 B3 D0 BE 
// Ћавринович2007Egor
// Windows1251 I CB E0 E2 F0 E8 ED EE E2 E8 F7 I 32 30 30 37 I 45 67 6F 72
// UTF-16 I 41B 430 432 440 438 43D 43E 432 438 447 I 32 30 30 37 I 45 67 6F 72
// UTF-8 I D0 9B D0 B0 D0 B2 D1 80 D0 B8 I 32 30 30 37  I 45 67 6F 72

int main() {
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfile[] = "LavrinovichcEgor2007 ";
	char rfile[] = "Ћавринович≈гор2007 ";
	char lr[] = "Ћавринович2007Egor ";

	wchar_t Lfile[] = L"LavrinovichcEgor2007";
	wchar_t Rfile[] = L"Ћавринович≈гор2007 ";
	wchar_t LR[] = L"Ћавринович2007Egor ";
	std::cout << hello << lfile << std::endl;
	return 0;
}

	
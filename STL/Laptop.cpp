#include<iostream>
#include<list>
#include <string>
using namespace std;

class Laptop {
	string firm;
	string color;
	int weight;
	bool GPU;
	int storage;
public:
	friend ostream& operator<<(ostream& os, Laptop& obj);
	Laptop() {
		firm = "";
		color = "";
		weight = 0;
		GPU = false;
		storage = 0;
	}
	Laptop(string a, string b, int c, bool d, int e) {
		firm = a;
		color = b;
		weight = c;
		GPU = d;
		storage = e;
	}
	void SetFirm(string a) {
		firm = a;
	}
	void SetColor(string a) {
		color = a;
	}
	void SetWeight(int a) {
		weight = a;
	}
	void SetGpu(bool a) {
		GPU = a;
	}
	void SetStorage(int a) {
		storage= a;
	}


	string GetFirm(string a) {
		return firm;
	}
	string GetColor(string a) {
		return color ;
	}
	int GetWeight(int a) {
		return weight;
	}
	bool GetGpu(bool a) {
		return GPU;
	}
	int GetStorage(int a) {
		return storage;
	}
	void Show() {
		cout << "Firm:" << firm <<" ";
		cout << "Color:" << color << " " ;
		cout << "Weight:" << weight <<" kg" << " ";
		cout << "Storage:" << storage<<" Gb" <<  " ";
		cout << endl;

	}
	

};
ostream& operator<<(ostream& os, Laptop& obj) {
	os << "Firm:" << obj.firm << " ";
	os << "Color:" << obj.color << " ";
	os << "Weight:" << obj.weight << " kg" << " ";
	os << "Storage:" << obj.storage << " Gb" << " ";
	os<< endl;	
	return os;
}
int main() {
	Laptop Laptop1("Asus","black",3,true,120);
	Laptop Laptop2("Mac", "gray", 1, false, 60);
	Laptop Laptop3("Acer", "black", 2, true, 300);

	list<Laptop> arr;
	arr.push_back(Laptop1);
	arr.push_back(Laptop2);
	arr.push_back(Laptop3);

	for (auto i = arr.begin(); i != arr.end(); i++) {
		(*i).Show();
	}

	arr.push_back(Laptop("Samsung", "gray", 4, true, 60));
	arr.push_back(Laptop("Asus tuf", "black", 3, true, 240));

	arr.push_front(Laptop("Lenovo", "black", 2, false, 120));
	arr.push_front(Laptop("Asus Rog Strix", "black", 4, false, 240));
	cout << endl;
	for (auto i = arr.begin(); i != arr.end(); i++) {
		cout<<(*i);
	}
}
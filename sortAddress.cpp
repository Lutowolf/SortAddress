#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Address {
private:
	string City;
	string Street;
	int building=0;
	int room=0;
public:
	Address() {};
	Address(string City, string Street, int building, int room) {
		this->City = "undefined";
		this->Street = "undefined";
		this->building = 0;
		this->room = 0;
	}
	string GetCityAndStreet() {
		return City, Street;
	}
	int GetBuildingAndRoom() {
		return building, room;
	}
};

void sort(Address* address,int size) {

}

int main()
{
	int size = 0;
	ifstream intext("in.txt");
	ofstream outext("out.txt");
	intext >> size;
	string City;
	string Street;
	int building=0;
	int room = 0;
	outext << size << endl;
	Address* address = new Address[size];
	for (int i = 0; i < size; i++) {
		int Address_counter = 0;
		intext >> City >> Street >> building >> room;
		address[i] (City, Street, building, room);
		Address_counter++;
	}
	sort(address, size);
	for (int i = 0; i < size; i++) { outext << City << ", " << Street << ", " << building << ", " << room << endl; }
	intext.close();
	outext.close();
	delete[] address;
}
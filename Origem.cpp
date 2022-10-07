
#include<iostream>
#include <fstream> // Read and Write image

using namespace std;

int main() {
	//Create images
	std::ofstream image;

	image.open("./images/RGB-01.ppm");
	if (image.is_open()) {
		// Header 
		image << "P3" << endl;
		image << "3 2" << endl;
		image << "255" << endl;

		// Image Body
		image << "255 0 0" << endl;
		image << "0 255 0" << endl;
		image << "0 0 255" << endl;
		image << "255 255 0" << endl;
		image << "255 255 255" << endl;
		image << "0 0 0" << endl;

		
		
	}
	image.close();
}
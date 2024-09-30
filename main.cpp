#include "tgaimage.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);


int main(int argc, char** argv) {
	const int iWidth = 500;
	const int iHeight = 500;
	TGAImage image(iWidth, iHeight, TGAImage::RGB);

	
	image.set(iWidth / 2, iHeight / 2, red);

	image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
	image.write_tga_file("output.tga");
	return 0;
}


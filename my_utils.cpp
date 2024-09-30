#include "tgaimage.h"

// 设置图片背景
void setBackgroundColor(TGAImage& image, TGAColor color) {
	int iWidth = image.get_width();
	int iHeight = image.get_height();
	for (int i = 0; i < iWidth; i++) {
		for (int j = 0; j < iHeight; j++) {
			image.set(i, j, color);
		}
	}
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1) {
		int height, width, hypotenuse;
		int temp = 0;
		cin >> height >> width >> hypotenuse;
		if (height == 0 && width == 0 && hypotenuse == 0) return 0;
		
		if (height > width) {
			temp = width;
			width = height;
			height = temp;
		}

		if (width > hypotenuse) {
			temp = hypotenuse;
			hypotenuse = width;
			width = temp;
		}

		if (hypotenuse*hypotenuse == height * height + width * width) cout << "right\n";
		else cout << "wrong\n";
	}
}
#include <iostream>

int main(int argc, char **argv)
{
	// Image
	const int imageWidth = 256;
	const int imageHeight = 256;

	// Render
	std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

	for (int y = imageHeight - 1; y >= 0; y--)
	{
		std::cerr << "\rScanlines remaining: " << y << std::flush;
		for (int x = 0; x < imageWidth; x++)
		{
			double r = static_cast<double>(x) / (imageWidth - 1);
			double g = static_cast<double>(y) / (imageHeight - 1);
			double b = 0.25;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}

	std::cerr << "\nDone.\n";
}
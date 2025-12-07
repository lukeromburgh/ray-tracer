#include <fstream>

class Vector {
    double x,y,z;
    public:
        Vector() { x = y = z = 0; }
    Vector(double a, double b, double c){x=a, y=b, z=c;}
};

class Ray {
    Vector origin;
    Vector direction;
    public:
        Ray(Vector k, Vector l) {origin = k, direction = l;}
};

class Sphere {
    Vector center;
    double radius;
    public:
        Sphere(Vector i, double j){center = i, radius = j;}
};

int main() {

    const int ImageWidth = 500;
    const int ImageHeight = 500;

    for (int j = 0; j < ImageHeight; ++j) {
        for (int i = 0; i < ImageWidth; ++i) {
            //primary Ray
            Ray primaryRay(Vector(i, j, -50), Vector(0,0,1));
        }
    }
}
#include <fstream>

class Vector {
    double x,y,z;
    public:
        Vector() { x = y = z = 0; }
        Vector(double a, double b, double c){x=a, y=b, z=c;}

        // Overload the subtraction operator
        Vector operator-(const Vector& other) const {
            return Vector(x - other.x, y - other.y, z - other.z);
        }
};

class Ray {
    public:
        Vector origin;
        Vector direction;
        Ray(Vector k, Vector l) {origin = k, direction = l;}
};

class Sphere {
    Vector center;
    double radius;
    public:
        Sphere(Vector i, double j){center = i, radius = j;}
    bool intersect(Ray ray, double &t) {
        Vector origin = ray.origin;
        Vector direction = ray.direction;
        Vector oc = origin-center;
        double 
    };
};

int main() {

    const int ImageWidth = 500;
    const int ImageHeight = 500;

    for (int j = 0; j < ImageHeight; ++j) {
        for (int i = 0; i < ImageWidth; ++i) {
            //primary Ray
            Ray primaryRay(Vector(i, j, -50), Vector(0,0,1));

            if(sphere.intersect(ray))
        }
    }
}
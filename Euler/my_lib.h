// typedef struct{
//     double x;
//     double y;
// } Point;

/*
double fun(double x){
    return x*x;
};

double eval(double (*f)(double), double x_0, string name){
    return f(x_0)
};

eval(fun,5,"X*X")
*/

// #include <cstdio>
// using namespace std;
// #include <stdio.h>
#include <cmath>

class Point {
    private:
        double x;
        double y;

    protected:
        static int standart_obj_counter;
    public:
        Point(){
            this->x = 0;
            this->y = 0;
            standart_obj_counter++;
        };
        Point(double x, double y){
            (*this).x = x;
            (*this).y = y;
            standart_obj_counter++;
        };
        // double getLength( void );
        void print(void);

        Point operator+(Point &point){
            Point new_point;
            new_point.x = ((x + point.x)/2);
            new_point.y = ((this->y + point.y)/2);
            return new_point;
        };

        void setX(int x){
            this->x = x;
        };

        double getX(){
            return this->x;
        };

        double getY(){
            return this->y;
        };

        static void print_obj_counter(void){
            printf("%d\n",Point::standart_obj_counter);
        };

        ~Point(){
            printf("--Class %s been deleated\n",typeid(this).name());
        };
};
int Point::standart_obj_counter = 0;

void Point::print(void){
    printf("Point (%.3f,%.3f)\n",this->x,this->y);
};

/////////////////////////////////
class Point1 {
    private:
        double x;
        double y;

    protected:
        static int standart_obj_counter;
    public:
        Point1(){
            this->x = 0;
            this->y = 0;
            standart_obj_counter++;
        };
        Point1(double * x, double * y){
            (*this).x = *x;
            (*this).y = *y;
            standart_obj_counter++;
        };
        // double getLength( void );
        void print(void);

        Point1 operator+(Point1 &point){
            Point1 new_point;
            new_point.x = ((x + point.x)/2);
            new_point.y = ((this->y + point.y)/2);
            return new_point;
        };

        void setX(int x){
            this->x = x;
        };

        static void print_obj_counter(void){
            printf("%d\n",Point1::standart_obj_counter);
        };

        ~Point1(){
            printf("--Class %s been deleated\n",typeid(this).name());
        };
};
int Point1::standart_obj_counter = 0;

void Point1::print(void){
    printf("Point1 (%.3f,%.3f)\n",this->x,this->y);
};
/////////////////////////////////////////////////////////////////////////////////////////////////





class Parallelogram
{
protected:
    Point point_1;
    Point point_2;
    Point point_3;
    Point point_4;
public:
    Parallelogram(Point point_1, Point point_2, Point point_3, Point point_4);
    ~Parallelogram();
    void print(void);
    double squere();
};

Parallelogram::Parallelogram(Point point_1, Point point_2, Point point_3, Point point_4)
{
    this->point_1 = point_1;
    this->point_2 = point_2;
    this->point_3 = point_3;
    this->point_4 = point_4;
};

Parallelogram::~Parallelogram()
{
    printf("Parallelogram\n");
    printf("Class %s been deleated\n",typeid(this).name());
};

void Parallelogram::print(void){
    printf("----------------\n");
    this->point_1.print();
    this->point_2.print();
    this->point_3.print();
    this->point_4.print();
    printf("----------------\n");
};

double Parallelogram::squere(){
    return abs(this->point_1.getX()-this->point_2.getX())*abs(this->point_1.getX()-this->point_3.getX())*(0.5);
};


class Square : public Parallelogram
{
public:
    Square(Point point_1, Point point_2, Point point_3, Point point_4, bool idSquere);
    ~Square();
};

Square::Square(Point point_1, Point point_2, Point point_3, Point point_4, bool idSquere):Parallelogram(point_1, point_2, point_3, point_4)
{
    this->point_1 = point_1;
    this->point_2 = point_2;
    this->point_3 = point_3;
    this->point_4 = point_4;
};

Square::~Square()
{
    printf("Square\n");
    printf("Class %s been deleated\n",typeid(this).name());
};




class Triangle
{
    private:
        Point point_1;
        Point point_2;
        Point point_3;
    public:
        Triangle(/* args */);
        ~Triangle();
};

Triangle::Triangle(/* args */)
{
};

Triangle::~Triangle()
{
};






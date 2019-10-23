#include <iostream>
#include "my_lib.h"

using namespace std;


int main(int argc, char const *argv[])
{
    Point point_1;
    Point point_2(1,0);
    Point * point_3 = new Point(1,1);
    
    Point::print_obj_counter();

    (point_1+point_2).print();


    point_1.print();
    point_2.print();
    (*point_3).print();

    Point::print_obj_counter();

    Parallelogram * parallelogram = new Parallelogram(point_1,point_2,*(new Point(0,1)),*point_3);
    
    Point::print_obj_counter();

    (*parallelogram).print();

    point_1.setX(500);
    point_2.setX(500);
    (*point_3).setX(500);
    // (*point_3).print();
    (*parallelogram).print();
    // delete parallelogram;


    double a = 1;
    Point1 tmp_point_1(&a,&a);
    Point1 * tmp_point_2 = new Point1(&a,&a);

    tmp_point_1.print();
    (*tmp_point_2).print();
    Point1::print_obj_counter();
    // cout << (-2>>3) << "\n";
    // printf("%b",(-2>>2));
    // 235 
    // 286
    // 330

    return 0;
}

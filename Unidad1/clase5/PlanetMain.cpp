#include <Star.h>
#include <Planet.h>

int main(){

  double possun[] = {0,0,0};
  double pos[] = {1,1,1};
  Star sun(possun,1.989*10e30, 5778, "sun");
  Earth e(pos);

  cout<<"LA masa de nuestra estrella es = "<<sun.getMass()<<endl;
  cout<<"La distancia entre el sol y la tierra es = "<<sun.distance(e)<<endl;
  return 0;
}

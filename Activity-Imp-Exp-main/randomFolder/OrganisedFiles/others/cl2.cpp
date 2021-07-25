#include<iostream>

class counter{
        private:
            int count;
            public:
            counter():count(0)
            {

            }
            void inc_count(){
                count++;
                      }
            int get_count(){
            return count;
                  }
            };
     int main(){
        counter c1,c2;
        std::cout<<"c1="<<c1.get_count()<<","<<"c2="<<c2.get_count()<<std::endl;
        c1.inc_count();
        c2.inc_count();
        c2.inc_count();

        std::cout<<"c1="<<c1.get_count()<<","<<"c2="<<c2.get_count();
        return 0;
        }

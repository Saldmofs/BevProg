+#include "GUI/Graph.h"
#include "GUI/Simple_window.h"

#include <string>
#include <iostream>

using namespace Graph_lib;

int main(){
       try{
              Point t1(300,50);
              Simple_window win(t1, 1000, 800, "My window");
              win.wait_for_button();     
              
              Lines grid;
              int x_size = 800;
              int y_size = 800;
              for(int i = 100; i<=x_size; i+=100)
              {
              grid.add(Point(i,0), Point(i, y_size));
              grid.add(Point(0,i), Point(x_size, i));
              }
              win.attach(grid);
              win.wait_for_button();
              
              vector<Rectangle> v;
              for(int i=0; i<8; i++)
              {
              v.push back(new Rectangle(Point(i*100,i*100),100,100));
              v[v.size()-1].set_fill_color(Color::red);
              win.attach(v[v.size()-1]);
              }
             
        }
        catch (exception& e){
        cerr <<"Error: " << e.what() << endl;
        return 1;
        }
        catch(...){
        cerr << "exeption\n";
        return 2;
        }
  }

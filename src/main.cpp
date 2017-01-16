#include <iostream>

using namespace std;

int main()
{
	    
	return 0;
}

void save_setting()
{
    ofstream sav("setting.dat");
    colour[5] = ':';
    sav<<colour<<"\n";
    sav<<screensav<<"\n";
    sav<<log_out_time<<"\n";
    sav<<screen_saver_wait_time<<"\n";
    sav.close();
}
// TODO: use the libconfig
void load_setting()
{
    ifstream load("setting.dat");
    load>>colour;
    colour[5] = ' ';
    load>>screensav;
    load>>log_out_time;
    load>>screen_saver_wait_time;
    load.close();
}

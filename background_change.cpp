#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


int main() {
    FreeConsole();				      
    string next[10];
    int time = 0;
    while (1 == 1){
        // Settings
        string line;
        int line_num = 0;
        next[0] = "	--background-image: url();";  //background_img_url
        next[1] = "	--background-image: url();";
        next[2] = "	--background-image: url();";
        next[3] = "	--background-image: url();";
        next[4] = "	--background-image: url();";
        next[5] = "	--background-image: url();";
        if (time == 6){
            time -= 6;
        }
        // Open File
        ifstream myFile;
        myFile.open("Template.css");
        ofstream Dc_css("		.css",ios::trunc); //Theme css
        while (getline(myFile, line)) {
            if (line_num + 1 !=  ){         //line_num
                Dc_css << line << "\n";
            }
            else{
                Dc_css << next[time] << "\n";
            }
            line_num++;
        }
        time++;
        // Close file
        myFile.close();
        Sleep(); 		//Waiting time
    }
    return 0;
}

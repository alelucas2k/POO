#ifndef APP_H
#define APP_H
#include <string>

using std::string;

class App{
public:
    App();
    App(string name, string version);
    
    void setname(string name);
    void setversion(string version);

    string getname()const{return name;}
    string getversion()const{return version;}

    virtual void run() = 0;

protected:
    string name;
    string version;
};

#endif
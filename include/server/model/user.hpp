#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

// User表的ORM类
class User
{
public:
    User(int id = -1, string name = "", string pwd = "", string state = "offline")
    :id_(id),name_(name),password_(pwd),state_(state)
    {
    }

    void setId(int id) { id_ = id; }
    void setName(string name) { name_ = name; }
    void setPwd(string pwd) { password_ = pwd; }
    void setState(string state) { state_ = state; }

    int getId() { return id_; }
    string getName() { return name_; }
    string getPwd() { return password_; }
    string getState() { return state_; }

protected:
    int id_;
    string name_;
    string password_;
    string state_;
};

#endif
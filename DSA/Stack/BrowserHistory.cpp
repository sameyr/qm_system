#include <iostream>
#include <stack>

using namespace std;

class BrowserHistroy 
{
private:
    stack<string> history;

public:
    void visit(const string &url)
    {
        cout << "Visviting " << url << endl;
        history.push(url);
    }

    void back()
    {
        cout << "Navigating back: " << endl;
        if (!history.empty()){
            history.pop();
        }
    }

    string current()
    {

        if (history.empty()){
            return "No sites currently being viewed";
        }

        return history.top();
            
    }

};

int main (){
    BrowserHistroy bh;

    bh.visit("github.com");
    bh.visit("youtube.com");
    bh.visit("google.com");
    cout << "current site is : " << bh.current() << endl;

    bh.back();
    cout << "current site is : " << bh.current() << endl;

}
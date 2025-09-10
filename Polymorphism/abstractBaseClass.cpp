#include<bits/stdc++.h>
using namespace std;

// Abstract Base Class: class contatining atleast one pure virtual functions

class CWH //Abstratc Base Class: made in order to derive further classes from it
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0; //DO-NOTHING FUNCTION OR PURE VIRTUAL FUNCTION: THIS is a function that will be defined by other derived functions.
};

class CWHvideo : public CWH
{
    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "rating : " << rating << endl;
        cout << "video length : " << videoLength << endl;
    }
};

class CWHtext : public CWH
{
    int wordCount;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        wordCount = wc;
    }
    void display()
    {
        cout << "this is an amazing tetx lesson with title " << title << endl;
        cout << "rating : " << rating << endl;
        cout << "word Count : " << wordCount << endl;
    }
}; 

int main()
{
    float rating, vlen;
    int words;
    // video
    string title = "video title";
    rating = 4.9;
    vlen = 5.89;
    words = 6473;

    CWHvideo vid(title, rating, vlen);

    // text
    title = "text title";
    rating = 4.9;
    words = 6473;

    CWHtext txt(title, rating, vlen);
    txt.display();

    CWH *tuts[2];
    tuts[0] = &vid;
    tuts[1] = &txt;

    tuts[0]->display(); // since we put virtual function in CWH doing this dalls each of the derived classes own deisplay fuinctin. but if we remove the virtual fuinction then base class display() function will be called
    tuts[1]->display();
    return 0;
}
// by ad73prem

/*
//Rules for Virtual Function
    1. they cannot be static
    2. they are accessed by object pointers
    3. virtual functions can be friend of naother class
    4. a virtual function in base class might not be used
    5. if a virtual function dfined in the base class, there is no necessity of redifining them in derived class. if it doesnt ifnd it in derived class then it will happily call the base class

*/
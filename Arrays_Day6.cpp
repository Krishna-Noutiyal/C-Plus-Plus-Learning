#include <iostream>

using namespace std;

int main()
{

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string longString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque pellentesque sapien ac libero vehicula, non tincidunt mi ullamcorper. Donec faucibus libero id ex tincidunt, et dictum ligula ultrices. Morbi et ex a urna suscipit gravida. Nullam ut augue nulla. Sed vel mauris eu elit convallis bibendum. Phasellus vestibulum eros id viverra efficitur. Aenean tincidunt orci ut leo varius, id dignissim lorem dignissim. Praesent vel mi et odio sodales congue. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. In hac habitasse platea dictumst. Nam vel dui ac ligula cursus posuere. Integer ut purus vitae nisl auctor lacinia.";

    long double a= 34.3;

    string name[] = {"Krishna ", "Gauri ", "Ishika ", "Rishu ", "Chirag "};
    cout << name[0] << " : " << &name[0] << endl;
    cout << name[1] << " : " << &name[1] << endl;
    cout << &name[2] - &name[1] << endl;
    // cout << num[0] << endl;
    cout << sizeof(a) << endl;
    // cout << name[0].length() << endl;

    // cout << longString.length() << endl;
    // for (int i=0; i <= 256;i++){
    //     cout << i << " : " << (char)i << endl;
    // }

    // getchar();

    return 0;
}
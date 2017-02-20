#include <iostream>

void PostOrder(std::string pre, std::string in) {
    auto c = pre[0];
    auto i = in.find(c);

    if (i > 0) {//如果i==0就只有右子树

        std::string pre1 = pre.substr(1, i);
        std::string in1 = in.substr(0, i);
        PostOrder(pre1, in1);

    }

    if (i < in.length() - 1) {//如果i==in.length()-1就只有左子树

        std::string pre2 = pre.substr(i + 1);
        std::string in2 = in.substr(i + 1);
        PostOrder(pre2, in2);

    }

    std::cout << c;
}

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    PostOrder(s1, s2);
    std::cout << std::endl;
    return 0;
}
#include <ostream>
using namespace std;

class Binomial {
        friend Binomial operator-(Binomial &bin);
        friend ostream &operator<<(ostream &out, Binomial &bin);
        //friend Binomial operator+(Binomial &bin1, Binomial &bin2);
    public:
        Binomial(int a, int b);
        ~Binomial();
        int getA();
        int getB();
        //Binomial operator-();
        Binomial operator++();
        Binomial operator++(int);// 该int值表示是操作符的重载是做后置++的重载
        Binomial operator+(Binomial &bin);
    private:
        int m_a;
        int m_b;
};
Binomial::Binomial(int a, int b) {
    m_a = a;          
    m_b = b;
}
Binomial::~Binomial(){
}
int Binomial::getA() {
    return m_a;       
}
int Binomial::getB() {
    return m_b;
}
//Binomial Binomial::operator-() {
//    this->m_a = -(this->m_a);
//    m_b = -m_b;
//    return *this;
//}

Binomial operator-(Binomial &bin) {
    bin.m_a = -bin.m_a;
    bin.m_b = -bin.m_b;
    return bin;
}

Binomial Binomial::operator++() {
    m_a++;
    m_b++;
    return *this;
}

Binomial Binomial::operator++(int) {
    Binomial old(*this);
    m_a++;
    m_b++;
}

Binomial Binomial::operator+(Binomial &bin) {
    Binomial temp(0, 0);
    temp.m_a = m_a + bin.m_a;
    temp.m_b = m_b + bin.m_b;
    return temp;
}

ostream &operator<<(ostream &out, Binomial &bin) {
    out << bin.m_a << "x + (" << bin.m_b << ")";
    return out;
}

//Binomial operator+(Binomial &bin1, Binomial &bin2) {
//    Binomial temp(0, 0);
//    temp.m_a = bin1.m_a + bin2.m_a;
//    temp.m_b = bin1.m_b + bin2.m_b;
//    return temp;
//}

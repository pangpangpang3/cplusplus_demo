class Binomial {
        friend Binomial operator-(Binomial &bin);
    public:
        Binomial(int a, int b);
        ~Binomial();
        int getA();
        int getB();
        //Binomial operator-();
        Binomial operator++();
        Binomial operator++(int);// 该int值表示是操作符的重载是做后置++的重载
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

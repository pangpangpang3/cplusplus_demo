class Binomial {

    public:
        Binomial(int a, int b);
        ~Binomial();
        int getA();
        int getB();
        Binomial operator-();
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
Binomial Binomial::operator-() {
    this->m_a = -(this->m_a);
    m_b = -m_b;
    return *this;
}



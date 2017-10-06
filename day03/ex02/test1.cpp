struct Trivial
{
    int a;
    int b;
 
    //Функции не запрещены
    int mul()
    {
        return a*b;
    }
};
 
struct TrivialDefault
{
    int a;
    int b;
 
    TrivialDefault() = default;
    ~TrivialDefault() = default;
    //Удалять методы нам никто не запрещал!
    TrivialDefault(const TrivialDefault&) = delete;
    TrivialDefault(TrivialDefault&&) = default;
    TrivialDefault& operator=(const TrivialDefault&) = default;
    TrivialDefault& operator=(TrivialDefault&&) = delete;
 
};
 
struct TrivialComposition
{
    Trivial a;
    TrivialDefault b;
};
 
struct TrivialDerived : public Trivial, public TrivialDefault
{
    //Статические члены не запрещены
    static int c;
};
 
struct TrivialDerivedPrivate : private TrivialDerived
{
    int d;
};
 
 
struct NonTrivialVirtual
{
    int a;
    int b;
    virtual void foo() 
    {
    }
};
 
struct NonTrivialVirtualBase : public virtual Trivial
{
    int c;
};
 
struct NonTrivialComposition
{
    NonTrivialVirtual a;
};
 
struct NonTrivialDtor
{
    ~NonTrivialDtor()
    {
    }
};
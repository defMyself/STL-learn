vector<list<int> >;
vector<list<int>>;

void f(int);
void f(void*);

f(0);
f(NULL);
f(nullptr);


auto i = 42;
double f();
auto d = f();

auto i;// ERROR
static auto vat = 0.19;

vector<string> v;
auto pos = b.begin();
vector<string>::iterator pos = v.begin();

auto l = [](int x) -> bool {
    };
    
// Uniform Initialization
int values[] {1,2,3};
std::vector<int> v {1, 2, 3, 4, 6, 7};
std::vector<std::string> cities {
    "Berlin", "New York", "Lodon", "Braunscheig"
    };
    
std::complex<double> c{4.0, 3.0};  //


int i;
int j{};
int* p;
int* q{};


for (decl : coll) {
    statement
}

for( int i : {2, 3, 5, 7, 9, 13, 17, 19 }) {
    std::cout << i << std::endl;
}



std::vector<double> vec;
for (auto& elem : vec) {
    elem *= 3;
}


template <typename T>
void printElements(const T& coll)
{
    for(const auto& elem : coll) {
        std::cout << elem << std::endl;
    }
}
    
for(auto _pos=coll.begin(); _pos != coll.end(); ++_pos) {
    const auto& elem = *_pos;
    std::cout << elem << std::endl;
}


























#include "Serial.h"

uintptr_t serialize(Data* ptr)
{
	uintptr_t t = reinterpret_cast<uintptr_t>(ptr);
	return (t);
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data t = Data(42);
	Data *h = deserialize(serialize(&t));

	std::cout << "Original : " << &t << "\nNew : " << h << std::endl;

	std::cout << "Original : " << t.getFoo() << "\nNew : " << h->getFoo() << std::endl;

	return (0);
}


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
	Data t = Data('c');
	Data *h = deserialize(serialize(&t));

	std::cout << "Original : " << &t << "\nNew : " << h << std::endl;
	return (0);
}

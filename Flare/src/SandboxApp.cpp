#include <Spark.h>

class Flare : public Spark::Application
{

public:
	Flare()
	{

	}

	~Flare()
	{

	}

};

Spark::Application* Spark::CreateApplication()
{

	return new Flare();

}
#pragma once
class DataBase
{
public:
	DataBase(const char*);
	virtual ~DataBase();
	char* lex;

};

template<typename T>
class Data : public DataBase
{
public:
	T data;


	Data(const char* lex, T* data)
	{
		this->lex = lex;
		this->data = data;
	}
	virtual ~Data() {};


};
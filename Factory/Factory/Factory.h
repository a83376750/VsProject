#pragma once
#ifndef _FACTORY_H_
#define _FACTORY_H_


class Product;
//¹¤³§
class CFactory
{
public:
	virtual ~CFactory() = 0;
	virtual Product* CreateProduct() = 0;
protected:
	CFactory();

};



#endif // _FACTORY_H_

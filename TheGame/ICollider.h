#pragma once

class ICollider
{
public:
	ICollider() {};
	~ICollider() {};
	 
	virtual void OnCollision(ICollider* obj) =0;
private:

};




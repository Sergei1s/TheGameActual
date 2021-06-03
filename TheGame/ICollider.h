#pragma once

class ICollider
{
public:
	ICollider() {};
	~ICollider() {};
	 
	virtual void OnCollision(ICollider* obj) =0;
	bool GetState() {return IsDestructed;};
	void SetState(bool _IsDestructed) { IsDestructed = _IsDestructed; };
protected:
	bool IsDestructed = false;
};




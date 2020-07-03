#pragma once
class Player : public IGameObject
{
public:
	Player();
	~Player();

	bool Start();
	void Update();

	void SetPosition(const CVector3 pos)
	{
		m_position = pos;
	}
	CVector3 const GetPosition()
	{
		return m_position;
	}

private:
	CVector3 m_position = CVector3::Zero;
};


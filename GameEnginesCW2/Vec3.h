#ifndef VEC_3_H
#define VEC_3_H

#include <math.h>

template<class T>
class Vec3
{
private:

	T m_x, m_y, m_z;

public:

	Vec3()
	{
		m_x = m_y = m_z = 0;
	}

	Vec3(const Vec3& v)
	{
		m_x = v.getX();
		m_y = v.getY();
		m_z = v.getZ();
	}

	Vec3(T x, T y, T z)
	{
		this->m_x = x;
		this->m_y = y;
		this->m_z = z;
	}

	const T& getX() const { return m_x; }
	const T& getY() const { return m_y; }
	const T& getZ() const { return m_z; }

	void setX(T x) { this->m_x = x; }
	void setY(T y) { this->m_y = y; }
	void setZ(T z) { this->m_z = z; }

	Vec3 operator+ (const Vec3& v) const
	{
		return Vec3(m_x + v.getX(), m_y + v.getY(), m_z + v.getZ());
	}

	Vec3 operator- () const
	{
		return Vec3(-m_x, -m_y, -m_z);
	}

	Vec3 operator- (const Vec3& v) const
	{
		return Vec3(m_x - v.getX(), m_y - v.getY(), m_z - v.getZ());
	}

	Vec3 operator* (float s) const
	{
		return Vec3(s*m_x, s*m_y, s*m_z);
	}

	Vec3 operator/ (float s) const
	{
		return Vec3(m_x / s, m_y / s, m_z / s);
	}

	T operator[] (int i) const
	{
		if (i < 0 || i >2) return 0;
		const T * p = &m_x;
		return *(p + i);
	}

	T dotProduct(const Vec3& v) const
	{
		return m_x*v.getX() + m_y*v.getY() + m_z*v.getZ();
	}

	Vec3 crossProduct(const Vec3& v) const
	{
		return Vec3(m_y*v.getZ() - m_z*v.getY(), m_z*v.getX() - m_x*v.getZ(), m_x*v.getY() - m_y*v.getX());
	}

	T getLength() const
	{
		return sqrt(pow(m_x, 2) + pow(m_y, 2) + pow(m_z, 2));
	}

	Vec3 getNormal() const
	{
		return Vec3(m_x / getLength(), m_y / getLength(), m_z / getLength());
	}
};

#endif
﻿#include "Vector.h"

namespace SWGL {

    Vector::Vector(float x, float y, float z, float w) {
    
        m_data[0] = w;
        m_data[1] = z;
        m_data[2] = y;
        m_data[3] = x;
    }



    // Access to a certain vector element
    float &Vector::x() { return m_data[3]; }
    float &Vector::y() { return m_data[2]; }
    float &Vector::z() { return m_data[1]; }
    float &Vector::w() { return m_data[0]; }
    const float &Vector::x() const { return m_data[3]; }
    const float &Vector::y() const { return m_data[2]; }
    const float &Vector::z() const { return m_data[1]; }
    const float &Vector::w() const { return m_data[0]; }

    float &Vector::r() { return m_data[3]; }
    float &Vector::g() { return m_data[2]; }
    float &Vector::b() { return m_data[1]; }
    float &Vector::a() { return m_data[0]; }
    const float &Vector::r() const { return m_data[3]; }
    const float &Vector::g() const { return m_data[2]; }
    const float &Vector::b() const { return m_data[1]; }
    const float &Vector::a() const { return m_data[0]; }

    float &Vector::operator[](int idx) { return m_data[idx]; }
    const float &Vector::operator[](int idx) const { return m_data[idx]; }



    // Return address of the first vector element
    const float *Vector::data() const { return m_data; }



    // Scalar multiplication
    Vector &Vector::operator*=(const float &rhs) {

        m_data[0] *= rhs;
        m_data[1] *= rhs;
        m_data[2] *= rhs;
        m_data[3] *= rhs;

        return *this;
    }



    // Linear interpolation between two vectors
    Vector Vector::lerp(const Vector &vA, const Vector &vB, const float t) {

        return Vector(

            vA.x() + t * (vB.x() - vA.x()),
            vA.y() + t * (vB.y() - vA.y()),
            vA.z() + t * (vB.z() - vA.z()),
            vA.w() + t * (vB.w() - vA.w())
        );
    }

    // Dot product of two vectors
    float Vector::dot(const Vector &vA, const Vector &vB) {

        return vA.x() * vB.x() +
               vA.y() * vB.y() +
               vA.z() * vB.z() +
               vA.w() * vB.w();
    }
}

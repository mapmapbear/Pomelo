#pragma once
#include <cmath>
#include <iostream>

namespace pomelo {
template <class T> class vec2 {
public:
  vec2() : m_x(0), m_y(0){};
  vec2(T x, T y) : m_x(x), m_y(y) {}

public:
  friend std::ostream &operator<<(std::ostream &output, const vec2<T> &_vec) {
    output << _vec.m_x << std::endl;
    output << _vec.m_y << std::endl;
    return output;
  }
  friend const vec2<T> operator+(const vec2<T> &_vec1, const vec2<T> &_vec2) {
    return vec2<T>(_vec1.m_x + _vec2.m_x, _vec1.m_y + _vec2.m_y);
  }
  friend const vec2<T> operator-(const vec2<T> &_vec1, const vec2<T> &_vec2) {
    return vec2<T>(_vec1.m_x - _vec2.m_x, _vec1.m_y - _vec2.m_y);
  }
  friend const vec2<T> operator*(vec2<T> &_vec, T num) {
    return vec2<T>(_vec.m_x * num, _vec.m_y * num);
  }
  friend const vec2<T> operator*(T num, vec2<T> &_vec) {
    return vec2<T>(num * _vec.m_x, num * _vec.m_y);
  }
  vec2<T> negative(vec2<T> _vec) {
    return vec2<T>(-1 * _vec.m_x, -1 * _vec.m_y);
  }
  T dot(vec2<T> &_vec) { return this->m_x * _vec.m_x + this->m_y * _vec.m_y; }
  double norm() {
    return std::sqrt(this->m_x * this->m_x + this->m_y * this->m_y);
  }
  const vec2<float> unit() {
    return vec2<float>(this->m_x * (1 / this->norm()),
                       this->m_y * (1 / this->norm()));
  }

private:
  T m_x;
  T m_y;
};

template <class T> class vec3 {
public:
  vec3() : m_x(0), m_y(0){};
  vec3(T x, T y, T z) : m_x(x), m_y(y), m_z(z) {}

public:
  friend std::ostream &operator<<(std::ostream &output, const vec3<T> &_vec) {
    output << _vec.m_x << std::endl;
    output << _vec.m_y << std::endl;
    output << _vec.m_z << std::endl;
    return output;
  }
  friend const vec3<T> operator+(const vec3<T> &_vec1, const vec3<T> &_vec2) {
    return vec3<T>(_vec1.m_x + _vec2.m_x, _vec1.m_y + _vec2.m_y,
                   _vec1.m_z + _vec2.m_z);
  }
  friend const vec3<T> operator-(const vec3<T> &_vec1, const vec3<T> &_vec2) {
    return vec3<T>(_vec1.m_x - _vec2.m_x, _vec1.m_y - _vec2.m_y,
                   _vec1.m_z - _vec2.m_z);
  }
  friend const vec3<T> operator*(vec3<T> &_vec, T num) {
    return vec3<T>(_vec.m_x * num, _vec.m_y * num, _vec.m_z * num);
  }
  friend const vec3<T> operator*(T num, vec3<T> &_vec) {
    return vec3<T>(num * _vec.m_x, num * _vec.m_y, num * _vec.m_z);
  }
  vec3<T> negative(vec3<T> _vec) {
    return vec3<T>(-1 * _vec.m_x, -1 * _vec.m_y, -1 * _vec.m_z);
  }
  T dot(vec3<T> &_vec) {
    return this->m_x * _vec.m_x + this->m_y * _vec.m_y + this->m_z * _vec.m_z;
  }
  double norm() {
    return std::sqrt(this->m_x * this->m_x + this->m_y * this->m_y +
                     this->m_z * this->m_z);
  }
  const vec3<float> unit() {
    return vec3<float>(this->m_x * (1 / this->norm()),
                       this->m_y * (1 / this->norm()),
                       this->m_z * (1 / this->norm()));
  }

private:
  T m_x;
  T m_y;
  T m_z;
};

template <class T> class vec4 {
public:
  vec4() : m_x(0), m_y(0), m_z(0){};
  vec4(T x, T y, T z, T u) : m_x(x), m_y(y), m_z(z), m_u(u) {}

public:
  friend std::ostream &operator<<(std::ostream &output, const vec4<T> &_vec) {
    output << _vec.m_x << std::endl;
    output << _vec.m_y << std::endl;
    output << _vec.m_z << std::endl;
    output << _vec.m_u << std::endl;
    return output;
  }
  friend const vec4<T> operator+(const vec4<T> &_vec1, const vec4<T> &_vec2) {
    return vec4<T>(_vec1.m_x + _vec2.m_x, _vec1.m_y + _vec2.m_y,
                   _vec1.m_z + _vec2.m_z, _vec1.m_u + _vec2.m_u);
  }
  friend const vec4<T> operator-(const vec4<T> &_vec1, const vec4<T> &_vec2) {
    return vec4<T>(_vec1.m_x - _vec2.m_x, _vec1.m_y - _vec2.m_y,
                   _vec1.m_z - _vec2.m_z, _vec1.m_u - _vec2.m_u);
  }
  friend const vec4<T> operator*(vec4<T> &_vec, T num) {
    return vec4<T>(_vec.m_x * num, _vec.m_y * num, _vec.m_z * num,
                   _vec.m_u * num);
  }
  friend const vec4<T> operator*(T num, vec4<T> &_vec) {
    return vec4<T>(num * _vec.m_x, num * _vec.m_y, num * _vec.m_z,
                   num * _vec.m_u);
  }
  vec4<T> negative(vec4<T> _vec) {
    return vec4<T>(-1 * _vec.m_x, -1 * _vec.m_y, -1 * _vec.m_z, -1 * _vec.m_u);
  }
  T dot(vec4<T> &_vec) {
    return this->m_x * _vec.m_x + this->m_y * _vec.m_y + this->m_z * _vec.m_z +
           this->m_u * _vec.m_u;
  }
  double norm() {
    return std::sqrt(this->m_x * this->m_x + this->m_y * this->m_y +
                     this->m_z * this->m_z + this->m_u * this->m_u);
  }
  const vec4<float> unit() {
    return vec4<float>(
        this->m_x * (1 / this->norm()), this->m_y * (1 / this->norm()),
        this->m_z * (1 / this->norm()), this->m_u * (1 / this->norm()));
  }

private:
  T m_x;
  T m_y;
  T m_z;
  T m_u;
};

}; // namespace pomelo
//
// Created by frasse_l on 04/12/2016.
//

#ifndef BIND_TYPELIST_HPP
#define BIND_TYPELIST_HPP

struct TypeList0;

template <typename P1>
struct TypeList1;

template <typename P1, typename P2>
struct TypeList2;

template <typename P1, typename P2, typename P3>
struct TypeList3;

template <typename P1, typename P2, typename P3, typename P4>
struct TypeList4;

template <typename P1, typename P2, typename P3, typename P4, typename P5>
struct TypeList5;

template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
struct TypeList6;

#include "Storage.hpp"
#include "Caller.hpp"
#include "TypeTraits.hpp"

struct TypeList0 : private Storage0
{
    typedef Storage0 BaseClass;

    TypeList0() : BaseClass() {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller();
    }
};

template <typename P1>
struct TypeList1 : private Storage1<P1>
{
    typedef Storage1<P1> BaseClass;

    TypeList1(P1 p1) : BaseClass(p1) {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller(list[BaseClass::_t1]);
    }
};

template <typename P1, typename P2>
struct TypeList2 : private Storage2<P1, P2>
{
    typedef Storage2<P1, P2> BaseClass;

    TypeList2(P1 p1, P2 p2) : BaseClass(p1, p2) {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller(list[BaseClass::_t1],
                      list[BaseClass::_t2]);
    }
};

template <typename P1, typename P2, typename P3>
struct TypeList3 : private Storage3<P1, P2, P3>
{
    typedef Storage3<P1, P2, P3> BaseClass;

    TypeList3(P1 p1, P2 p2, P3 p3) : BaseClass(p1, p2, p3) {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller(list[BaseClass::_t1],
                      list[BaseClass::_t2],
                      list[BaseClass::_t3]);
    }
};

template <typename P1, typename P2, typename P3, typename P4>
struct TypeList4 : private Storage4<P1, P2, P3, P4>
{
    typedef Storage4<P1, P2, P3, P4> BaseClass;

    TypeList4(P1 p1, P2 p2, P3 p3, P4 p4) : BaseClass(p1, p2, p3, p4) {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller(list[BaseClass::_t1],
                      list[BaseClass::_t2],
                      list[BaseClass::_t3],
                      list[BaseClass::_t4]);
    }
};

template <typename P1, typename P2, typename P3, typename P4, typename P5>
struct TypeList5 : private Storage5<P1, P2, P3, P4, P5>
{
    typedef Storage5<P1, P2, P3, P4, P5> BaseClass;

    TypeList5(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) : BaseClass(p1, p2, p3, p4, p5) {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller(list[BaseClass::_t1],
                      list[BaseClass::_t2],
                      list[BaseClass::_t3],
                      list[BaseClass::_t4],
                      list[BaseClass::_t5]);
    }
};

template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
struct TypeList6 : private Storage6<P1, P2, P3, P4, P5, P6>
{
    typedef Storage6<P1, P2, P3, P4, P5, P6> BaseClass;

    TypeList6(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) : BaseClass(p1, p2, p3, p4, p5, p6) {}

    template <typename T>
    T& operator[](Value<T> &value)
    {
        return value.get();
    }

    template <typename ReturnType, typename Caller, typename List>
    ReturnType operator()(TypeTraits<ReturnType>, Caller& caller, List &list)
    {
        return caller(list[BaseClass::_t1],
                      list[BaseClass::_t2],
                      list[BaseClass::_t3],
                      list[BaseClass::_t4],
                      list[BaseClass::_t5],
                      list[BaseClass::_t6]);
    }
};

#endif //BIND_TYPELIST_HPP

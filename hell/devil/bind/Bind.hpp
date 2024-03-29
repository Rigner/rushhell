//
// Created by frasse_l on 04/12/2016.
//

#ifndef BIND_BIND_HPP
#define BIND_BIND_HPP

#include "TypeList.hpp"
#include "Wrapper.hpp"

template <typename ReturnType>
Caller<ReturnType, ReturnType(*)(), typename Traits0::Type>
bind(ReturnType(*f)())
{
    typedef TypeList0 ListType;
    ListType l;
    return Caller<ReturnType, ReturnType(*)(), ListType> (f, l);
}

template <typename ReturnType, typename X1, typename Param1>
Caller<ReturnType, ReturnType(*)(X1), typename Traits1<Param1>::Type>
bind(ReturnType(*f)(X1), Param1 p1)
{
    typedef typename GetType<Param1>::Type P1;
    typedef TypeList1<P1> ListType;
    ListType l(p1);
    return Caller<ReturnType, ReturnType(*)(X1), ListType> (f, l);
}

template <typename ReturnType, typename X1, typename X2, typename Param1, typename Param2>
Caller<ReturnType, ReturnType(*)(X1, X2), typename Traits2<Param1, Param2>::Type>
bind(ReturnType(*f)(X1, X2), Param1 p1, Param2 p2)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef TypeList2<P1, P2> ListType;
    ListType l(p1, p2);
    return Caller<ReturnType, ReturnType(*)(X1, X2), ListType> (f, l);
}

template <typename ReturnType, typename X1, typename X2, typename X3, typename Param1, typename Param2, typename Param3>
Caller<ReturnType, ReturnType(*)(X1, X2, X3), typename Traits3<Param1, Param2, Param3>::Type>
bind(ReturnType(*f)(X1, X2, X3), Param1 p1, Param2 p2, Param3 p3)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef TypeList3<P1, P2, P3>ListType;
    ListType l(p1, p2, p3);
    return Caller<ReturnType, ReturnType(*)(X1, X2, X3), ListType> (f, l);
}

template <typename ReturnType, typename X1, typename X2, typename X3, typename X4, typename Param1, typename Param2, typename Param3, typename Param4>
Caller<ReturnType, ReturnType(*)(X1, X2, X3, X4), typename Traits4<Param1, Param2, Param3, Param4>::Type>
bind(ReturnType(*f)(X1, X2, X3, X4), Param1 p1, Param2 p2, Param3 p3, Param4 p4)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef TypeList4<P1, P2, P3, P4>ListType;
    ListType l(p1, p2, p3, p4);
    return Caller<ReturnType, ReturnType(*)(X1, X2, X3, X4), ListType> (f, l);
}

template <typename ReturnType, typename X1, typename X2, typename X3, typename X4, typename X5, typename Param1, typename Param2, typename Param3, typename Param4, typename Param5>
Caller<ReturnType, ReturnType(*)(X1, X2, X3, X4, X5), typename Traits5<Param1, Param2, Param3, Param4, Param5>::Type>
bind(ReturnType(*f)(X1, X2, X3, X4, X5), Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef typename GetType<Param5>::Type P5;
    typedef TypeList5<P1, P2, P3, P4, P5>ListType;
    ListType l(p1, p2, p3, p4, p5);
    return Caller<ReturnType, ReturnType(*)(X1, X2, X3, X4, X5), ListType> (f, l);
}

template <typename ReturnType, typename X1, typename X2, typename X3, typename X4, typename X5, typename X6, typename Param1, typename Param2, typename Param3, typename Param4, typename Param5, typename Param6>
Caller<ReturnType, ReturnType(*)(X1, X2, X3, X4, X5, X6), typename Traits6<Param1, Param2, Param3, Param4, Param5, Param6>::Type>
bind(ReturnType(*f)(X1, X2, X3, X4, X5, X6), Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef typename GetType<Param5>::Type P5;
    typedef typename GetType<Param6>::Type P6;
    typedef TypeList6<P1, P2, P3, P4, P5, P6>ListType;
    ListType l(p1, p2, p3, p4, p5, p6);
    return Caller<ReturnType, ReturnType(*)(X1, X2, X3, X4, X5, X6), ListType> (f, l);
}

template <typename ReturnType, typename Object>
Caller<ReturnType, Object, typename Traits0::Type>
bind(Object f)
{
    typedef TypeList0 ListType;
    ListType l;
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Param1, typename Object>
Caller<ReturnType, Object, typename Traits1<Param1>::Type>
bind(Object f, Param1 p1)
{
    typedef typename GetType<Param1>::Type P1;
    typedef TypeList1<P1> ListType;
    ListType l(p1);
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Param1, typename Param2, typename Object>
Caller<ReturnType, Object, typename Traits2<Param1, Param2>::Type>
bind(Object f, Param1 p1, Param2 p2)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef TypeList2<P1, P2> ListType;
    ListType l(p1, p2);
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Param1, typename Param2, typename Param3, typename Object>
Caller<ReturnType, Object, typename Traits3<Param1, Param2, Param3>::Type>
bind(Object f, Param1 p1, Param2 p2, Param3 p3)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef TypeList3<P1, P2, P3> ListType;
    ListType l(p1, p2, p3);
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Param1, typename Param2, typename Param3, typename Param4, typename Object>
Caller<ReturnType, Object, typename Traits4<Param1, Param2, Param3, Param4>::Type>
bind(Object f, Param1 p1, Param2 p2, Param3 p3, Param4 p4)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef TypeList4<P1, P2, P3, P4> ListType;
    ListType l(p1, p2, p3, p4);
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Param1, typename Param2, typename Param3, typename Param4, typename Param5, typename Object>
Caller<ReturnType, Object, typename Traits5<Param1, Param2, Param3, Param4, Param5>::Type>
bind(Object f, Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef typename GetType<Param5>::Type P5;
    typedef TypeList5<P1, P2, P3, P4, P5> ListType;
    ListType l(p1, p2, p3, p4, p5);
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Param1, typename Param2, typename Param3, typename Param4, typename Param5, typename Param6, typename Object>
Caller<ReturnType, Object, typename Traits6<Param1, Param2, Param3, Param4, Param5, Param6>::Type>
bind(Object f, Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef typename GetType<Param5>::Type P5;
    typedef typename GetType<Param6>::Type P6;
    typedef TypeList6<P1, P2, P3, P4, P5, P6> ListType;
    ListType l(p1, p2, p3, p4, p5, p6);
    return Caller<ReturnType, Object, ListType> (f, l);
}

template <typename ReturnType, typename Object>
Caller<ReturnType, ObjectWrapper0<ReturnType, Object>, typename Traits0::Type>
bind(ReturnType (Object::*f)(), Object *o)
{
    typedef TypeList0 ListType;
    typedef ObjectWrapper0<ReturnType, Object> ObjectWrapper;
    ListType l;
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

template <typename ReturnType, typename Object, typename Param1>
Caller<ReturnType, ObjectWrapper1<ReturnType, Object, Param1>, typename Traits1<Param1>::Type>
bind(ReturnType (Object::*f)(Param1), Object *o, Param1 p1)
{
    typedef typename GetType<Param1>::Type P1;
    typedef TypeList1<P1> ListType;
    typedef ObjectWrapper1<ReturnType, Object, Param1> ObjectWrapper;
    ListType l(p1);
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

template <typename ReturnType, typename Object, typename Param1, typename Param2>
Caller<ReturnType, ObjectWrapper2<ReturnType, Object, Param1, Param2>, typename Traits2<Param1, Param2>::Type>
bind(ReturnType (Object::*f)(Param1, Param2), Object *o, Param1 p1, Param2 p2)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef TypeList2<P1, P2> ListType;
    typedef ObjectWrapper2<ReturnType, Object, Param1, Param2> ObjectWrapper;
    ListType l(p1, p2);
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

template <typename ReturnType, typename Object, typename Param1, typename Param2, typename Param3>
Caller<ReturnType, ObjectWrapper3<ReturnType, Object, Param1, Param2, Param3>, typename Traits3<Param1, Param2, Param3>::Type>
bind(ReturnType (Object::*f)(Param1, Param2, Param3), Object *o, Param1 p1, Param2 p2, Param3 p3)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef TypeList3<P1, P2, P3> ListType;
    typedef ObjectWrapper3<ReturnType, Object, Param1, Param2, Param3> ObjectWrapper;
    ListType l(p1, p2, p3);
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

template <typename ReturnType, typename Object, typename Param1, typename Param2, typename Param3, typename Param4>
Caller<ReturnType, ObjectWrapper4<ReturnType, Object, Param1, Param2, Param3, Param4>, typename Traits4<Param1, Param2, Param3, Param4>::Type>
bind(ReturnType (Object::*f)(Param1, Param2, Param3, Param4), Object *o, Param1 p1, Param2 p2, Param3 p3, Param4 p4)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef TypeList4<P1, P2, P3, P4> ListType;
    typedef ObjectWrapper4<ReturnType, Object, Param1, Param2, Param3, Param4> ObjectWrapper;
    ListType l(p1, p2, p3, p4);
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

template <typename ReturnType, typename Object, typename Param1, typename Param2, typename Param3, typename Param4, typename Param5>
Caller<ReturnType, ObjectWrapper5<ReturnType, Object, Param1, Param2, Param3, Param4, Param5>, typename Traits5<Param1, Param2, Param3, Param4, Param5>::Type>
bind(ReturnType (Object::*f)(Param1, Param2, Param3, Param4, Param5), Object *o, Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef typename GetType<Param5>::Type P5;
    typedef TypeList5<P1, P2, P3, P4, P5> ListType;
    typedef ObjectWrapper5<ReturnType, Object, Param1, Param2, Param3, Param4, Param5> ObjectWrapper;
    ListType l(p1, p2, p3, p4, p5);
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

template <typename ReturnType, typename Object, typename Param1, typename Param2, typename Param3, typename Param4, typename Param5, typename Param6>
Caller<ReturnType, ObjectWrapper6<ReturnType, Object, Param1, Param2, Param3, Param4, Param5, Param6>, typename Traits6<Param1, Param2, Param3, Param4, Param5, Param6>::Type>
bind(ReturnType (Object::*f)(Param1, Param2, Param3, Param4, Param5, Param6), Object *o, Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6)
{
    typedef typename GetType<Param1>::Type P1;
    typedef typename GetType<Param2>::Type P2;
    typedef typename GetType<Param3>::Type P3;
    typedef typename GetType<Param4>::Type P4;
    typedef typename GetType<Param5>::Type P5;
    typedef typename GetType<Param6>::Type P6;
    typedef TypeList6<P1, P2, P3, P4, P5, P6> ListType;
    typedef ObjectWrapper6<ReturnType, Object, Param1, Param2, Param3, Param4, Param5, Param6> ObjectWrapper;
    ListType l(p1, p2, p3, p4, p5, p6);
    ObjectWrapper ow(o, f);
    return Caller<ReturnType, ObjectWrapper, ListType> (ow, l);
}

#endif //BIND_BIND_HPP

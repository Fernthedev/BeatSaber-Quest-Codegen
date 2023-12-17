#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void ModestTree::Util::ValuePair_2<T1,int32_t>::__set_First(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1& ModestTree::Util::ValuePair_2<T1,int32_t>::__get_First()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr T1 const& ModestTree::Util::ValuePair_2<T1,int32_t>::__get_First() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void ModestTree::Util::ValuePair_2<T1,int32_t>::__set_Second(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr int32_t& ModestTree::Util::ValuePair_2<T1,int32_t>::__get_Second()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr int32_t const& ModestTree::Util::ValuePair_2<T1,int32_t>::__get_Second() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::ModestTree::Util::ValuePair_2<T1,int32_t>* ModestTree::Util::ValuePair_2<T1,int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_2<T1,int32_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void ModestTree::Util::ValuePair_2<T1,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::ModestTree::Util::ValuePair_2<T1,int32_t>* ModestTree::Util::ValuePair_2<T1,int32_t>::New_ctor(T1  first, int32_t  second)  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_2<T1,int32_t>*>(first, second));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void ModestTree::Util::ValuePair_2<T1,int32_t>::_ctor(T1  first, int32_t  second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, first, second);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool ModestTree::Util::ValuePair_2<T1,int32_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,int32_t>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool ModestTree::Util::ValuePair_2<T1,int32_t>::Equals(::ModestTree::Util::ValuePair_2<T1,int32_t>*  that)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,int32_t>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<T1,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, that);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline int32_t ModestTree::Util::ValuePair_2<T1,int32_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,int32_t>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void ModestTree::Util::ValuePair_2<T1,T2>::__set_First(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1& ModestTree::Util::ValuePair_2<T1,T2>::__get_First()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T1 const& ModestTree::Util::ValuePair_2<T1,T2>::__get_First() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void ModestTree::Util::ValuePair_2<T1,T2>::__set_Second(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2& ModestTree::Util::ValuePair_2<T1,T2>::__get_Second()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr T2 const& ModestTree::Util::ValuePair_2<T1,T2>::__get_Second() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::ModestTree::Util::ValuePair_2<T1,T2>* ModestTree::Util::ValuePair_2<T1,T2>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_2<T1,T2>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void ModestTree::Util::ValuePair_2<T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::ModestTree::Util::ValuePair_2<T1,T2>* ModestTree::Util::ValuePair_2<T1,T2>::New_ctor(T1  first, T2  second)  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_2<T1,T2>*>(first, second));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void ModestTree::Util::ValuePair_2<T1,T2>::_ctor(T1  first, T2  second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, first, second);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool ModestTree::Util::ValuePair_2<T1,T2>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool ModestTree::Util::ValuePair_2<T1,T2>::Equals(::ModestTree::Util::ValuePair_2<T1,T2>*  that)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,T2>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<T1,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, that);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline int32_t ModestTree::Util::ValuePair_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1,T2>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

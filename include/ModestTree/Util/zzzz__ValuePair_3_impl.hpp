#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr void ModestTree::Util::ValuePair_3<T1,T2,T3>::__set_First(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this, std::forward<T1>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr T1& ModestTree::Util::ValuePair_3<T1,T2,T3>::__get_First()  {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr T1 const& ModestTree::Util::ValuePair_3<T1,T2,T3>::__get_First() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr void ModestTree::Util::ValuePair_3<T1,T2,T3>::__set_Second(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this, std::forward<T2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr T2& ModestTree::Util::ValuePair_3<T1,T2,T3>::__get_Second()  {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr T2 const& ModestTree::Util::ValuePair_3<T1,T2,T3>::__get_Second() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr void ModestTree::Util::ValuePair_3<T1,T2,T3>::__set_Third(T3  value)  {
::cordl_internals::setInstanceField<T3, 0x20>(this, std::forward<T3>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr T3& ModestTree::Util::ValuePair_3<T1,T2,T3>::__get_Third()  {
return ::cordl_internals::getInstanceField<T3, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr T3 const& ModestTree::Util::ValuePair_3<T1,T2,T3>::__get_Third() const {
return ::cordl_internals::getInstanceField<T3, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::ModestTree::Util::ValuePair_3<T1,T2,T3>* ModestTree::Util::ValuePair_3<T1,T2,T3>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void ModestTree::Util::ValuePair_3<T1,T2,T3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::ModestTree::Util::ValuePair_3<T1,T2,T3>* ModestTree::Util::ValuePair_3<T1,T2,T3>::New_ctor(T1  first, T2  second, T3  third)  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>(first, second, third));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void ModestTree::Util::ValuePair_3<T1,T2,T3>::_ctor(T1  first, T2  second, T3  third)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, first, second, third);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline bool ModestTree::Util::ValuePair_3<T1,T2,T3>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline bool ModestTree::Util::ValuePair_3<T1,T2,T3>::Equals(::ModestTree::Util::ValuePair_3<T1,T2,T3>*  that)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, that);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline int32_t ModestTree::Util::ValuePair_3<T1,T2,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1,T2,T3>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "GlobalNamespace/zzzz__ArgumentBase_impl.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::RequiredArgument_1<T>::__set__value(T  value)  {
::cordl_internals::setInstanceField<T, 0x28>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::RequiredArgument_1<T>::__get__value()  {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::RequiredArgument_1<T>::__get__value() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::RequiredArgument_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::RequiredArgument_1<T>::get_isOptional()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            "get_isOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::RequiredArgument_1<T>* GlobalNamespace::RequiredArgument_1<T>::New_ctor(::StringW  name, ::StringW  description)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RequiredArgument_1<T>*>(name, description));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::RequiredArgument_1<T>::_ctor(::StringW  name, ::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, description);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::RequiredArgument_1<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::RequiredArgument_1<T>::TryParseWithValue(::StringW  inValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            "TryParseWithValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, inValue);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::RequiredArgument_1<T>::op_Implicit_T(::GlobalNamespace::RequiredArgument_1<T>*  requiredArgument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RequiredArgument_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, requiredArgument);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW GlobalNamespace::RequiredArgument_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

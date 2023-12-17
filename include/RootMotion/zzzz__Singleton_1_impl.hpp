#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__Singleton_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline void RootMotion::Singleton_1<T>::setStaticF_sInstance(T  value)  {
::cordl_internals::setStaticField<T, "sInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get>(std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T RootMotion::Singleton_1<T>::getStaticF_sInstance()  {
return ::cordl_internals::getStaticField<T, "sInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T RootMotion::Singleton_1<T>::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void RootMotion::Singleton_1<T>::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::RootMotion::Singleton_1<T>* RootMotion::Singleton_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::Singleton_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void RootMotion::Singleton_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

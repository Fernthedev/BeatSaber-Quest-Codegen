#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabFactory_3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_4<::UnityEngine::Object*,P1,P2,T>"
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
constexpr  Zenject::PrefabFactory_3<P1,P2,T>::operator ::Zenject::IFactory_4<::UnityEngine::Object*,P1,P2,T>*() noexcept {
return static_cast<::Zenject::IFactory_4<::UnityEngine::Object*,P1,P2,T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
constexpr  Zenject::PrefabFactory_3<P1,P2,T>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::PrefabFactory_3<P1,P2,T>::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x10>(this, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Zenject::DiContainer* Zenject::PrefabFactory_3<P1,P2,T>::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::PrefabFactory_3<P1,P2,T>::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::DiContainer* Zenject::PrefabFactory_3<P1,P2,T>::get_Container()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_3<P1,P2,T>*>::get(),
                            "get_Container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline T Zenject::PrefabFactory_3<P1,P2,T>::Create(::UnityEngine::Object*  prefab, P1  param, P2  param2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_3<P1,P2,T>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<P1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<P2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, prefab, param, param2);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::PrefabFactory_3<P1,P2,T>* Zenject::PrefabFactory_3<P1,P2,T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PrefabFactory_3<P1,P2,T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::PrefabFactory_3<P1,P2,T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_3<P1,P2,T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* Zenject::PrefabFactory_3<P1,P2,T>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_3<P1,P2,T>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::PrefabFactory_3<P1,P2,T>::__zenFieldSetter0(::System::Object*  P_0, ::System::Object*  P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_3<P1,P2,T>*>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template<::il2cpp_utils::il2cpp_reference_type P1,::il2cpp_utils::il2cpp_reference_type P2,::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::InjectTypeInfo* Zenject::PrefabFactory_3<P1,P2,T>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_3<P1,P2,T>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

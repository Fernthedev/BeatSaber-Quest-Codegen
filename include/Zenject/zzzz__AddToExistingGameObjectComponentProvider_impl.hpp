#pragma once
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToExistingGameObjectComponentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AddToExistingGameObjectComponentProvider::*)(::UnityEngine::GameObject*, ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, ::System::Object*, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*)>(&::Zenject::AddToExistingGameObjectComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f06288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProvider.get_ShouldToggleActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::AddToExistingGameObjectComponentProvider::*)()>(&::Zenject::AddToExistingGameObjectComponentProvider::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f063a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProvider.GetGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::Zenject::AddToExistingGameObjectComponentProvider::*)(::Zenject::InjectContext*)>(&::Zenject::AddToExistingGameObjectComponentProvider::GetGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f063a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::AddToExistingGameObjectComponentProvider::__set__gameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x38>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* Zenject::AddToExistingGameObjectComponentProvider::__get__gameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> Zenject::AddToExistingGameObjectComponentProvider::__get__gameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
inline ::Zenject::AddToExistingGameObjectComponentProvider* Zenject::AddToExistingGameObjectComponentProvider::New_ctor(::UnityEngine::GameObject*  gameObject, ::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::AddToExistingGameObjectComponentProvider*>(gameObject, container, componentType, extraArguments, concreteIdentifier, instantiateCallback));
}
inline void Zenject::AddToExistingGameObjectComponentProvider::_ctor(::UnityEngine::GameObject*  gameObject, ::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameObject, container, componentType, extraArguments, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToExistingGameObjectComponentProvider::get_ShouldToggleActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                            "get_ShouldToggleActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* Zenject::AddToExistingGameObjectComponentProvider::GetGameObject(::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProvider*>::get(),
                            "GetGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

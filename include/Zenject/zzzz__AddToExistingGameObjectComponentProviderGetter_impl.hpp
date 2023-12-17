#pragma once
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToExistingGameObjectComponentProviderGetter_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)(::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*, ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::System::Object*, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*)>(&::Zenject::AddToExistingGameObjectComponentProviderGetter::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f063b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter.get_ShouldToggleActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)()>(&::Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f063e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToExistingGameObjectComponentProviderGetter.GetGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::Zenject::AddToExistingGameObjectComponentProviderGetter::*)(::Zenject::InjectContext*)>(&::Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f063f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::AddToExistingGameObjectComponentProviderGetter::__set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*, 0x38>(this, std::forward<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*>(value));
}
constexpr ::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>* Zenject::AddToExistingGameObjectComponentProviderGetter::__get__gameObjectGetter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*> Zenject::AddToExistingGameObjectComponentProviderGetter::__get__gameObjectGetter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*, 0x38>(this);
}
inline ::Zenject::AddToExistingGameObjectComponentProviderGetter* Zenject::AddToExistingGameObjectComponentProviderGetter::New_ctor(::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*  gameObjectGetter, ::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  extraArguments, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::AddToExistingGameObjectComponentProviderGetter*>(gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback));
}
inline void Zenject::AddToExistingGameObjectComponentProviderGetter::_ctor(::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*  gameObjectGetter, ::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  extraArguments, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*,::UnityEngine::GameObject*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                            "get_ShouldToggleActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject(::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToExistingGameObjectComponentProviderGetter*>::get(),
                            "GetGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

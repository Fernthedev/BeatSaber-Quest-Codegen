#pragma once
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(::Zenject::DiContainer*, ::Zenject::IPrefabProvider*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f0c1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext.CreateGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(ByRef<bool>)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f0c208;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__set__prefabProvider(::Zenject::IPrefabProvider*  value)  {
::cordl_internals::setInstanceField<::Zenject::IPrefabProvider*, 0x18>(this, std::forward<::Zenject::IPrefabProvider*>(value));
}
constexpr ::Zenject::IPrefabProvider* Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__prefabProvider()  {
return ::cordl_internals::getInstanceField<::Zenject::IPrefabProvider*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__prefabProvider() const {
return ::cordl_internals::getInstanceField<::Zenject::IPrefabProvider*, 0x18>(this);
}
constexpr void Zenject::SubContainerCreatorByNewPrefabDynamicContext::__set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters*  value)  {
::cordl_internals::setInstanceField<::Zenject::GameObjectCreationParameters*, 0x20>(this, std::forward<::Zenject::GameObjectCreationParameters*>(value));
}
constexpr ::Zenject::GameObjectCreationParameters* Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__gameObjectBindInfo()  {
return ::cordl_internals::getInstanceField<::Zenject::GameObjectCreationParameters*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__gameObjectBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::GameObjectCreationParameters*, 0x20>(this);
}
inline ::Zenject::SubContainerCreatorByNewPrefabDynamicContext* Zenject::SubContainerCreatorByNewPrefabDynamicContext::New_ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>(container, prefabProvider, gameObjectBindInfo));
}
inline void Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, prefabProvider, gameObjectBindInfo);
}
inline ::UnityEngine::GameObject* Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject(ByRef<bool>  shouldMakeActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext*>::get(),
                            "CreateGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, shouldMakeActive);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

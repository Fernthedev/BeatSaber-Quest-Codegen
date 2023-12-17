#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffectManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffectManager::*)()>(&::GlobalNamespace::LightRotationGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x23aa0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffectManager::*)()>(&::GlobalNamespace::LightRotationGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23aa624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffectManager::*)()>(&::GlobalNamespace::LightRotationGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23aa76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightRotationGroupEffectManager::__set__lightRotationGroups(::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*>& GlobalNamespace::LightRotationGroupEffectManager::__get__lightRotationGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*> const& GlobalNamespace::LightRotationGroupEffectManager::__get__lightRotationGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightRotationGroup*,::Array<::GlobalNamespace::LightRotationGroup*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::LightRotationGroupEffectManager::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x20>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::LightRotationGroupEffectManager::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::LightRotationGroupEffectManager::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x20>(this);
}
constexpr void GlobalNamespace::LightRotationGroupEffectManager::__set__lightRotationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* GlobalNamespace::LightRotationGroupEffectManager::__get__lightRotationGroupEffects()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*> GlobalNamespace::LightRotationGroupEffectManager::__get__lightRotationGroupEffects() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*, 0x28>(this);
}
inline void GlobalNamespace::LightRotationGroupEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightRotationGroupEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationGroupEffectManager* GlobalNamespace::LightRotationGroupEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightRotationGroupEffectManager*>());
}
inline void GlobalNamespace::LightRotationGroupEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

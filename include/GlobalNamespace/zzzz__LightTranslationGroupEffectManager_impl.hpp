#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffectManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffectManager::*)()>(&::GlobalNamespace::LightTranslationGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x23abb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffectManager::*)()>(&::GlobalNamespace::LightTranslationGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23abf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffectManager::*)()>(&::GlobalNamespace::LightTranslationGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23ac0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightTranslationGroupEffectManager::__set__lightTranslationGroups(::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>& GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*> const& GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffectManager::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x20>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::LightTranslationGroupEffectManager::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::LightTranslationGroupEffectManager::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x20>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffectManager::__set__lightTranslationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroupEffects()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*> GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroupEffects() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*, 0x28>(this);
}
inline void GlobalNamespace::LightTranslationGroupEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightTranslationGroupEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LightTranslationGroupEffectManager* GlobalNamespace::LightTranslationGroupEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightTranslationGroupEffectManager*>());
}
inline void GlobalNamespace::LightTranslationGroupEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

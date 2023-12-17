#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffectManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x23a93ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23a966c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23a97b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__lightGroup(::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__lightGroup()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*> const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x20>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x30>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x30>(this);
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__whiteColorOrAlphaEffects(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__whiteColorOrAlphaEffects()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*> GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__whiteColorOrAlphaEffects() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*, 0x38>(this);
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager* GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>());
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

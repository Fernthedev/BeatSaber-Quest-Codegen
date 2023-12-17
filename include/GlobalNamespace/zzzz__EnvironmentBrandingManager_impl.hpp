#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentBrandingManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EnvironmentBrandingManager__InitData::*)(bool)>(&::GlobalNamespace::__EnvironmentBrandingManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2376414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__EnvironmentBrandingManager__InitData::__set_hideBranding(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__EnvironmentBrandingManager__InitData::__get_hideBranding()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__EnvironmentBrandingManager__InitData::__get_hideBranding() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__EnvironmentBrandingManager__InitData* GlobalNamespace::__EnvironmentBrandingManager__InitData::New_ctor(bool  hideBranding)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>(hideBranding));
}
inline void GlobalNamespace::__EnvironmentBrandingManager__InitData::_ctor(bool  hideBranding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hideBranding);
}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager::*)()>(&::GlobalNamespace::EnvironmentBrandingManager::Start)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2376340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager::*)()>(&::GlobalNamespace::EnvironmentBrandingManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237640c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentBrandingManager::__set__brandingObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::EnvironmentBrandingManager::__get__brandingObjects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::EnvironmentBrandingManager::__get__brandingObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__set__replacementBrandingObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::EnvironmentBrandingManager::__get__replacementBrandingObjects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::EnvironmentBrandingManager::__get__replacementBrandingObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__set__initData(::GlobalNamespace::__EnvironmentBrandingManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__EnvironmentBrandingManager__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__EnvironmentBrandingManager__InitData* GlobalNamespace::EnvironmentBrandingManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentBrandingManager__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnvironmentBrandingManager__InitData*> GlobalNamespace::EnvironmentBrandingManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentBrandingManager__InitData*, 0x28>(this);
}
inline void GlobalNamespace::EnvironmentBrandingManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentBrandingManager* GlobalNamespace::EnvironmentBrandingManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentBrandingManager*>());
}
inline void GlobalNamespace::EnvironmentBrandingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

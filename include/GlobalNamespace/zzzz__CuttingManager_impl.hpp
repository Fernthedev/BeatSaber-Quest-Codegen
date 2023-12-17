#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CuttingManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CuttingManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CuttingManager::*)()>(&::GlobalNamespace::CuttingManager::OnEnable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22627a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttingManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CuttingManager::*)()>(&::GlobalNamespace::CuttingManager::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22628e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttingManager.HandleSaberManagerDidUpdateSaberPositions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CuttingManager::*)(::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*)>(&::GlobalNamespace::CuttingManager::HandleSaberManagerDidUpdateSaberPositions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2262a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            "HandleSaberManagerDidUpdateSaberPositions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttingManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CuttingManager::*)()>(&::GlobalNamespace::CuttingManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2262f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CuttingManager::__set__saberManager(::GlobalNamespace::SaberManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberManager*, 0x18>(this, std::forward<::GlobalNamespace::SaberManager*>(value));
}
constexpr ::GlobalNamespace::SaberManager* GlobalNamespace::CuttingManager::__get__saberManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> GlobalNamespace::CuttingManager::__get__saberManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x18>(this);
}
constexpr void GlobalNamespace::CuttingManager::__set__noteCutter(::GlobalNamespace::NoteCutter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutter*, 0x20>(this, std::forward<::GlobalNamespace::NoteCutter*>(value));
}
constexpr ::GlobalNamespace::NoteCutter* GlobalNamespace::CuttingManager::__get__noteCutter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutter*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutter*> GlobalNamespace::CuttingManager::__get__noteCutter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutter*, 0x20>(this);
}
inline void GlobalNamespace::CuttingManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CuttingManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CuttingManager::HandleSaberManagerDidUpdateSaberPositions(::GlobalNamespace::Saber*  leftSaber, ::GlobalNamespace::Saber*  rightSaber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            "HandleSaberManagerDidUpdateSaberPositions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, leftSaber, rightSaber);
}
inline ::GlobalNamespace::CuttingManager* GlobalNamespace::CuttingManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CuttingManager*>());
}
inline void GlobalNamespace::CuttingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CuttingManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

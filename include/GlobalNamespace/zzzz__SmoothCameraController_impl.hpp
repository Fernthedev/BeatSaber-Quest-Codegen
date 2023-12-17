#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraController_def.hpp"
#include "GlobalNamespace/zzzz__SmoothCamera_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22684e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2268684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.HandleDidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::HandleDidActivate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2268688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "HandleDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.HandleDidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::HandleDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22686c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "HandleDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.ActivateSmoothCameraIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x22684e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "ActivateSmoothCameraIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22686cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SmoothCameraController::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x18>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::SmoothCameraController::__get__mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::SmoothCameraController::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x18>(this);
}
constexpr void GlobalNamespace::SmoothCameraController::__set__smoothCamera(::GlobalNamespace::SmoothCamera*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SmoothCamera*, 0x20>(this, std::forward<::GlobalNamespace::SmoothCamera*>(value));
}
constexpr ::GlobalNamespace::SmoothCamera* GlobalNamespace::SmoothCameraController::__get__smoothCamera()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SmoothCamera*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SmoothCamera*> GlobalNamespace::SmoothCameraController::__get__smoothCamera() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SmoothCamera*, 0x20>(this);
}
inline void GlobalNamespace::SmoothCameraController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::HandleDidActivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "HandleDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::HandleDidDeactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "HandleDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            "ActivateSmoothCameraIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCameraController* GlobalNamespace::SmoothCameraController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SmoothCameraController*>());
}
inline void GlobalNamespace::SmoothCameraController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

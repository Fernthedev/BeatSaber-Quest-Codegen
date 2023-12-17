#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_leftController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::get_leftController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_leftController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_rightController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::get_rightController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_rightController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_headPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::get_headPos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_headPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_headRot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::get_headRot)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_headRot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MenuPlayerController::__set__leftController(::GlobalNamespace::VRController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VRController*, 0x18>(this, std::forward<::GlobalNamespace::VRController*>(value));
}
constexpr ::GlobalNamespace::VRController* GlobalNamespace::MenuPlayerController::__get__leftController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VRController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> GlobalNamespace::MenuPlayerController::__get__leftController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VRController*, 0x18>(this);
}
constexpr void GlobalNamespace::MenuPlayerController::__set__rightController(::GlobalNamespace::VRController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VRController*, 0x20>(this, std::forward<::GlobalNamespace::VRController*>(value));
}
constexpr ::GlobalNamespace::VRController* GlobalNamespace::MenuPlayerController::__get__rightController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VRController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> GlobalNamespace::MenuPlayerController::__get__rightController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VRController*, 0x20>(this);
}
constexpr void GlobalNamespace::MenuPlayerController::__set__headTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::MenuPlayerController::__get__headTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::MenuPlayerController::__get__headTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::MenuPlayerController::get_leftController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_leftController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRController*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::MenuPlayerController::get_rightController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_rightController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRController*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MenuPlayerController::get_headPos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_headPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MenuPlayerController::get_headRot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            "get_headRot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MenuPlayerController* GlobalNamespace::MenuPlayerController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuPlayerController*>());
}
inline void GlobalNamespace::MenuPlayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

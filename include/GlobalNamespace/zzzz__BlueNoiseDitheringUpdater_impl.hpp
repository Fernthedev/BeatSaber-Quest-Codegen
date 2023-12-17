#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDitheringUpdater_def.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x210aed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x210b03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.HandleCameraPreRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x210b128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            "HandleCameraPreRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210b214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__set__blueNoiseDithering(::GlobalNamespace::BlueNoiseDithering*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BlueNoiseDithering*, 0x18>(this, std::forward<::GlobalNamespace::BlueNoiseDithering*>(value));
}
constexpr ::GlobalNamespace::BlueNoiseDithering* GlobalNamespace::BlueNoiseDitheringUpdater::__get__blueNoiseDithering()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BlueNoiseDithering*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlueNoiseDithering*> GlobalNamespace::BlueNoiseDitheringUpdater::__get__blueNoiseDithering() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BlueNoiseDithering*, 0x18>(this);
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__set__randomValueToShader(::GlobalNamespace::RandomValueToShader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RandomValueToShader*, 0x20>(this, std::forward<::GlobalNamespace::RandomValueToShader*>(value));
}
constexpr ::GlobalNamespace::RandomValueToShader* GlobalNamespace::BlueNoiseDitheringUpdater::__get__randomValueToShader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomValueToShader*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomValueToShader*> GlobalNamespace::BlueNoiseDitheringUpdater::__get__randomValueToShader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomValueToShader*, 0x20>(this);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            "HandleCameraPreRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, camera);
}
inline ::GlobalNamespace::BlueNoiseDitheringUpdater* GlobalNamespace::BlueNoiseDitheringUpdater::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BlueNoiseDitheringUpdater*>());
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

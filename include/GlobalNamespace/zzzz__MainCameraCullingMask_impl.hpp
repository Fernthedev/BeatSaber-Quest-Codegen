#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainCameraCullingMask_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__MainCameraCullingMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainCameraCullingMask__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainCameraCullingMask__InitData::*)(bool)>(&::GlobalNamespace::__MainCameraCullingMask__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2807d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainCameraCullingMask__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MainCameraCullingMask__InitData::__set_showDebris(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainCameraCullingMask__InitData::__get_showDebris()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__MainCameraCullingMask__InitData::__get_showDebris() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__MainCameraCullingMask__InitData* GlobalNamespace::__MainCameraCullingMask__InitData::New_ctor(bool  showDebris)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainCameraCullingMask__InitData*>(showDebris));
}
inline void GlobalNamespace::__MainCameraCullingMask__InitData::_ctor(bool  showDebris)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainCameraCullingMask__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showDebris);
}
//  Writing Method size for method: ::GlobalNamespace::MainCameraCullingMask.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainCameraCullingMask::*)()>(&::GlobalNamespace::MainCameraCullingMask::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2807c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainCameraCullingMask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainCameraCullingMask::*)()>(&::GlobalNamespace::MainCameraCullingMask::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2807d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainCameraCullingMask::__set__camera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x18>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::MainCameraCullingMask::__get__camera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::MainCameraCullingMask::__get__camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x18>(this);
}
constexpr void GlobalNamespace::MainCameraCullingMask::__set__initData(::GlobalNamespace::__MainCameraCullingMask__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MainCameraCullingMask__InitData*, 0x20>(this, std::forward<::GlobalNamespace::__MainCameraCullingMask__InitData*>(value));
}
constexpr ::GlobalNamespace::__MainCameraCullingMask__InitData* GlobalNamespace::MainCameraCullingMask::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MainCameraCullingMask__InitData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MainCameraCullingMask__InitData*> GlobalNamespace::MainCameraCullingMask::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MainCameraCullingMask__InitData*, 0x20>(this);
}
inline void GlobalNamespace::MainCameraCullingMask::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MainCameraCullingMask* GlobalNamespace::MainCameraCullingMask::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainCameraCullingMask*>());
}
inline void GlobalNamespace::MainCameraCullingMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

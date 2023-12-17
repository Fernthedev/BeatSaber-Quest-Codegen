#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SafeAreaRectChecker_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaRectChecker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SafeAreaRectChecker__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SafeAreaRectChecker__InitData::*)(bool)>(&::GlobalNamespace::__SafeAreaRectChecker__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x227c68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SafeAreaRectChecker__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SafeAreaRectChecker__InitData::__set_checkingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__SafeAreaRectChecker__InitData::__get_checkingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__SafeAreaRectChecker__InitData::__get_checkingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__SafeAreaRectChecker__InitData* GlobalNamespace::__SafeAreaRectChecker__InitData::New_ctor(bool  checkingEnabled)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SafeAreaRectChecker__InitData*>(checkingEnabled));
}
inline void GlobalNamespace::__SafeAreaRectChecker__InitData::_ctor(bool  checkingEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SafeAreaRectChecker__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, checkingEnabled);
}
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x227c3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::Update)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x227c43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x227c628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__minAngleX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__minAngleX()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__minAngleX() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__maxAngleX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleX()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleX() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__minAngleY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__minAngleY()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__minAngleY() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__maxAngleY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleY()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::SafeAreaRectChecker::__get__maxAngleY() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__activeObjectWhenInsideSafeArea(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x28>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenInsideSafeArea()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenInsideSafeArea() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x28>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__activeObjectWhenNotInsideSafeArea(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x30>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenNotInsideSafeArea()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenNotInsideSafeArea() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__rectTransformToCheck(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x38>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* GlobalNamespace::SafeAreaRectChecker::__get__rectTransformToCheck()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> GlobalNamespace::SafeAreaRectChecker::__get__rectTransformToCheck() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x38>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__corners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& GlobalNamespace::SafeAreaRectChecker::__get__corners()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::SafeAreaRectChecker::__get__corners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x40>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__mainCamera(::GlobalNamespace::MainCamera*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainCamera*, 0x48>(this, std::forward<::GlobalNamespace::MainCamera*>(value));
}
constexpr ::GlobalNamespace::MainCamera* GlobalNamespace::SafeAreaRectChecker::__get__mainCamera()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainCamera*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> GlobalNamespace::SafeAreaRectChecker::__get__mainCamera() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainCamera*, 0x48>(this);
}
constexpr void GlobalNamespace::SafeAreaRectChecker::__set__initData(::GlobalNamespace::__SafeAreaRectChecker__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SafeAreaRectChecker__InitData*, 0x50>(this, std::forward<::GlobalNamespace::__SafeAreaRectChecker__InitData*>(value));
}
constexpr ::GlobalNamespace::__SafeAreaRectChecker__InitData* GlobalNamespace::SafeAreaRectChecker::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SafeAreaRectChecker__InitData*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SafeAreaRectChecker__InitData*> GlobalNamespace::SafeAreaRectChecker::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SafeAreaRectChecker__InitData*, 0x50>(this);
}
inline void GlobalNamespace::SafeAreaRectChecker::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SafeAreaRectChecker::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SafeAreaRectChecker* GlobalNamespace::SafeAreaRectChecker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SafeAreaRectChecker*>());
}
inline void GlobalNamespace::SafeAreaRectChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

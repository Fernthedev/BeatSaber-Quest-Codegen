#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlexyFollow_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlexyFollow.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlexyFollow::*)()>(&::GlobalNamespace::FlexyFollow::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20f2cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlexyFollow.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlexyFollow::*)()>(&::GlobalNamespace::FlexyFollow::LateUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x20f2d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlexyFollow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlexyFollow::*)()>(&::GlobalNamespace::FlexyFollow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20f2e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FlexyFollow::__set__followObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::FlexyFollow::__get__followObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::FlexyFollow::__get__followObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__followSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlexyFollow::__get__followSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::FlexyFollow::__get__followSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__offset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlexyFollow::__get__offset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlexyFollow::__get__offset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__fixedXOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlexyFollow::__get__fixedXOffset()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::FlexyFollow::__get__fixedXOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__fixedYOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlexyFollow::__get__fixedYOffset()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& GlobalNamespace::FlexyFollow::__get__fixedYOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__fixedZOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlexyFollow::__get__fixedZOffset()  {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr bool const& GlobalNamespace::FlexyFollow::__get__fixedZOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__useLocalPosition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x33>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlexyFollow::__get__useLocalPosition()  {
return ::cordl_internals::getInstanceField<bool, 0x33>(this);
}
constexpr bool const& GlobalNamespace::FlexyFollow::__get__useLocalPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x33>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__instant(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlexyFollow::__get__instant()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& GlobalNamespace::FlexyFollow::__get__instant() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__followTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x38>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::FlexyFollow::__get__followTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::FlexyFollow::__get__followTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr void GlobalNamespace::FlexyFollow::__set__transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x40>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::FlexyFollow::__get__transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::FlexyFollow::__get__transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
inline void GlobalNamespace::FlexyFollow::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FlexyFollow::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FlexyFollow* GlobalNamespace::FlexyFollow::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlexyFollow*>());
}
inline void GlobalNamespace::FlexyFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

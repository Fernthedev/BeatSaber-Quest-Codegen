#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Constraints_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Constraints::*)()>(&::RootMotion::FinalIK::Constraints::IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1242b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Constraints::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::Constraints::Initiate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1241dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Constraints::*)()>(&::RootMotion::FinalIK::Constraints::Update)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x1241f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Constraints::*)()>(&::RootMotion::FinalIK::Constraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::Constraints::__set_transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x10>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::Constraints::__get_transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::Constraints::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_target(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::Constraints::__get_target()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::Constraints::__get_target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_positionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_positionOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_positionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_positionWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Constraints::__get_positionWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& RootMotion::FinalIK::Constraints::__get_positionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_rotationOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_rotationOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_rotation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_rotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void RootMotion::FinalIK::Constraints::__set_rotationWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::Constraints::__get_rotationWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& RootMotion::FinalIK::Constraints::__get_rotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
inline bool RootMotion::FinalIK::Constraints::IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::Constraints::Initiate(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transform);
}
inline void RootMotion::FinalIK::Constraints::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::Constraints* RootMotion::FinalIK::Constraints::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Constraints*>());
}
inline void RootMotion::FinalIK::Constraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "RootMotion/FinalIK/zzzz__Constraint_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ConstraintRotationOffset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset.UpdateConstraint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotationOffset::*)()>(&::RootMotion::FinalIK::ConstraintRotationOffset::UpdateConstraint)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12429f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotationOffset::*)()>(&::RootMotion::FinalIK::ConstraintRotationOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotationOffset::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::ConstraintRotationOffset::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1242b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset.get_rotationChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::ConstraintRotationOffset::*)()>(&::RootMotion::FinalIK::ConstraintRotationOffset::get_rotationChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1242afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            "get_rotationChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__set_offset(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x1c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__get_offset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x1c>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__get_offset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x1c>(this);
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__set_defaultRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x2c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__get_defaultRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x2c>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__get_defaultRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__set_defaultLocalRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x3c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__get_defaultLocalRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x3c>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__get_defaultLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x3c>(this);
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__set_lastLocalRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x4c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__get_lastLocalRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x4c>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__get_lastLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x4c>(this);
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__set_defaultTargetLocalRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x5c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__get_defaultTargetLocalRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x5c>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__get_defaultTargetLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x5c>(this);
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__set_initiated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::ConstraintRotationOffset::__get_initiated()  {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr bool const& RootMotion::FinalIK::ConstraintRotationOffset::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
inline void RootMotion::FinalIK::ConstraintRotationOffset::UpdateConstraint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            "UpdateConstraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintRotationOffset* RootMotion::FinalIK::ConstraintRotationOffset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::ConstraintRotationOffset*>());
}
inline void RootMotion::FinalIK::ConstraintRotationOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintRotationOffset* RootMotion::FinalIK::ConstraintRotationOffset::New_ctor(::UnityEngine::Transform*  transform)  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::ConstraintRotationOffset*>(transform));
}
inline void RootMotion::FinalIK::ConstraintRotationOffset::_ctor(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transform);
}
inline bool RootMotion::FinalIK::ConstraintRotationOffset::get_rotationChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                            "get_rotationChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

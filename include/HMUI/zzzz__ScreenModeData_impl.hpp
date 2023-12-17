#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool, float_t, float_t)>(&::HMUI::ScreenModeData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x212c3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ScreenModeData::__set_position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HMUI::ScreenModeData::__get_position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& HMUI::ScreenModeData::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void HMUI::ScreenModeData::__set_rotation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x1c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HMUI::ScreenModeData::__get_rotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr ::UnityEngine::Vector3 const& HMUI::ScreenModeData::__get_rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr void HMUI::ScreenModeData::__set_scale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScreenModeData::__get_scale()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& HMUI::ScreenModeData::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void HMUI::ScreenModeData::__set_radius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScreenModeData::__get_radius()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& HMUI::ScreenModeData::__get_radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void HMUI::ScreenModeData::__set_offsetHeightByHeadPos(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::ScreenModeData::__get_offsetHeightByHeadPos()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& HMUI::ScreenModeData::__get_offsetHeightByHeadPos() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void HMUI::ScreenModeData::__set_yOffsetRelativeToHead(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScreenModeData::__get_yOffsetRelativeToHead()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& HMUI::ScreenModeData::__get_yOffsetRelativeToHead() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void HMUI::ScreenModeData::__set_minYPos(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::ScreenModeData::__get_minYPos()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& HMUI::ScreenModeData::__get_minYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
inline ::HMUI::ScreenModeData* HMUI::ScreenModeData::New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation, float_t  scale, float_t  radius, bool  offsetHeightByHeadPos, float_t  yOffsetRelativeToHead, float_t  minYPos)  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ScreenModeData*>(position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos));
}
inline void HMUI::ScreenModeData::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation, float_t  scale, float_t  radius, bool  offsetHeightByHeadPos, float_t  yOffsetRelativeToHead, float_t  minYPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

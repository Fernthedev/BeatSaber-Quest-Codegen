#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBaseData::*)(float_t, bool, ::GlobalNamespace::EaseType, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(&::GlobalNamespace::LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x233d558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightRotationBaseData::__set_beat(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightRotationBaseData::__get_beat()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::LightRotationBaseData::__get_beat() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_usePreviousEventRotationValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightRotationBaseData::__get_usePreviousEventRotationValue()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& GlobalNamespace::LightRotationBaseData::__get_usePreviousEventRotationValue() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_easeType(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x18>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightRotationBaseData::__get_easeType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x18>(this);
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightRotationBaseData::__get_easeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x18>(this);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_rotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightRotationBaseData::__get_rotation()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::LightRotationBaseData::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_loopsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LightRotationBaseData::__get_loopsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::LightRotationBaseData::__get_loopsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_rotationDirection(::GlobalNamespace::LightRotationDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightRotationDirection, 0x24>(this, std::forward<::GlobalNamespace::LightRotationDirection>(value));
}
constexpr ::GlobalNamespace::LightRotationDirection& GlobalNamespace::LightRotationBaseData::__get_rotationDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightRotationDirection, 0x24>(this);
}
constexpr ::GlobalNamespace::LightRotationDirection const& GlobalNamespace::LightRotationBaseData::__get_rotationDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightRotationDirection, 0x24>(this);
}
inline ::GlobalNamespace::LightRotationBaseData* GlobalNamespace::LightRotationBaseData::New_ctor(float_t  beat, bool  usePreviousEventRotationValue, ::GlobalNamespace::EaseType  easeType, float_t  rotation, int32_t  loopsCount, ::GlobalNamespace::LightRotationDirection  rotationDirection)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightRotationBaseData*>(beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection));
}
inline void GlobalNamespace::LightRotationBaseData::_ctor(float_t  beat, bool  usePreviousEventRotationValue, ::GlobalNamespace::EaseType  easeType, float_t  rotation, int32_t  loopsCount, ::GlobalNamespace::LightRotationDirection  rotationDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

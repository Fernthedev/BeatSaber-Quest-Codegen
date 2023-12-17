#pragma once
#include "OVR/OpenVR/zzzz__VRControllerState_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::VRControllerState_t_Packed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::VRControllerState_t_Packed::*)(::OVR::OpenVR::VRControllerState_t)>(&::OVR::OpenVR::VRControllerState_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27f1360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VRControllerState_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VRControllerState_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::VRControllerState_t_Packed.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::VRControllerState_t_Packed::*)(ByRef<::OVR::OpenVR::VRControllerState_t>)>(&::OVR::OpenVR::VRControllerState_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27f13a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VRControllerState_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_unPacketNum(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VRControllerState_t_Packed::__get_unPacketNum()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_unPacketNum() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_ulButtonPressed(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VRControllerState_t_Packed::__get_ulButtonPressed()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_ulButtonPressed() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_ulButtonTouched(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VRControllerState_t_Packed::__get_ulButtonTouched()  {
return ::cordl_internals::getInstanceField<uint64_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_ulButtonTouched() const {
return ::cordl_internals::getInstanceField<uint64_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_rAxis0(::OVR::OpenVR::VRControllerAxis_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis0()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::VRControllerAxis_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis0() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_rAxis1(::OVR::OpenVR::VRControllerAxis_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis1()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::VRControllerAxis_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis1() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_rAxis2(::OVR::OpenVR::VRControllerAxis_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis2()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::VRControllerAxis_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis2() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_rAxis3(::OVR::OpenVR::VRControllerAxis_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis3()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::VRControllerAxis_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis3() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRControllerState_t_Packed::__set_rAxis4(::OVR::OpenVR::VRControllerAxis_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis4()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::VRControllerAxis_t const& OVR::OpenVR::VRControllerState_t_Packed::__get_rAxis4() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void OVR::OpenVR::VRControllerState_t_Packed::_ctor(::OVR::OpenVR::VRControllerState_t  unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VRControllerState_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VRControllerState_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::VRControllerState_t_Packed::Unpack(ByRef<::OVR::OpenVR::VRControllerState_t>  unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VRControllerState_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRControllerState_t_Packed::VRControllerState_t_Packed(uint32_t  unPacketNum, uint64_t  ulButtonPressed, uint64_t  ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t  rAxis0, ::OVR::OpenVR::VRControllerAxis_t  rAxis1, ::OVR::OpenVR::VRControllerAxis_t  rAxis2, ::OVR::OpenVR::VRControllerAxis_t  rAxis3, ::OVR::OpenVR::VRControllerAxis_t  rAxis4) noexcept : ::bs_hook::ValueTypeWrapper<0x3c>() {this->unPacketNum = unPacketNum;
this->ulButtonPressed = ulButtonPressed;
this->ulButtonTouched = ulButtonTouched;
this->rAxis0 = rAxis0;
this->rAxis1 = rAxis1;
this->rAxis2 = rAxis2;
this->rAxis3 = rAxis3;
this->rAxis4 = rAxis4;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

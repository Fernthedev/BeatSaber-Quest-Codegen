#pragma once
#include "OVR/OpenVR/zzzz__VREvent_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Data_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::VREvent_t_Packed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::VREvent_t_Packed::*)(::OVR::OpenVR::VREvent_t)>(&::OVR::OpenVR::VREvent_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27f674c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VREvent_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::VREvent_t_Packed.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::VREvent_t_Packed::*)(ByRef<::OVR::OpenVR::VREvent_t>)>(&::OVR::OpenVR::VREvent_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27f10c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::VREvent_t_Packed::__set_eventType(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_t_Packed::__get_eventType()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_t_Packed::__get_eventType() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_t_Packed::__set_trackedDeviceIndex(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_t_Packed::__get_trackedDeviceIndex()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_t_Packed::__get_trackedDeviceIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_t_Packed::__set_eventAgeSeconds(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_t_Packed::__get_eventAgeSeconds()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_t_Packed::__get_eventAgeSeconds() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_t_Packed::__set_data(::OVR::OpenVR::VREvent_Data_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VREvent_Data_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::VREvent_Data_t>(value));
}
constexpr ::OVR::OpenVR::VREvent_Data_t& OVR::OpenVR::VREvent_t_Packed::__get_data()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VREvent_Data_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::VREvent_Data_t const& OVR::OpenVR::VREvent_t_Packed::__get_data() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VREvent_Data_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void OVR::OpenVR::VREvent_t_Packed::_ctor(::OVR::OpenVR::VREvent_t  unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VREvent_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::VREvent_t_Packed::Unpack(ByRef<::OVR::OpenVR::VREvent_t>  unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_t_Packed::VREvent_t_Packed(uint32_t  eventType, uint32_t  trackedDeviceIndex, float_t  eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t  data) noexcept : ::bs_hook::ValueTypeWrapper<0x2c>() {this->eventType = eventType;
this->trackedDeviceIndex = trackedDeviceIndex;
this->eventAgeSeconds = eventAgeSeconds;
this->data = data;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

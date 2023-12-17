#pragma once
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarData.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::OptionalAvatarData::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(&::BeatSaber::AvatarCore::OptionalAvatarData::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe10c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr  BeatSaber::AvatarCore::OptionalAvatarData::operator ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*()  {
return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarData::__set_dataType(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& BeatSaber::AvatarCore::OptionalAvatarData::__get_dataType()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& BeatSaber::AvatarCore::OptionalAvatarData::__get_dataType() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarData::__set_length(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::AvatarCore::OptionalAvatarData::__get_length()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::AvatarCore::OptionalAvatarData::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarData::__set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& BeatSaber::AvatarCore::OptionalAvatarData::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& BeatSaber::AvatarCore::OptionalAvatarData::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool BeatSaber::AvatarCore::OptionalAvatarData::Equals(::BeatSaber::AvatarCore::OptionalAvatarData  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "dataType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData(uint32_t  dataType, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->dataType = dataType;
this->length = length;
this->data = data;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
constexpr void BeatSaber::BeatAvatarSDK::AvatarPart::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::BeatAvatarSDK::AvatarPart::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::BeatAvatarSDK::AvatarPart::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart::AvatarPart(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::Unknown{static_cast<int32_t>(0x0)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::All{static_cast<int32_t>(0x1)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::SkinColor{static_cast<int32_t>(0x2)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::HeadTopModel{static_cast<int32_t>(0x3)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::HeadTopPrimaryColor{static_cast<int32_t>(0x4)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::HeadTopSecondaryColor{static_cast<int32_t>(0x5)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::GlassesColor{static_cast<int32_t>(0x6)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::FacialHairColor{static_cast<int32_t>(0x7)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::HandsModel{static_cast<int32_t>(0x8)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::HandsColor{static_cast<int32_t>(0x9)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModel{static_cast<int32_t>(0xa)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModelPrimaryColor{static_cast<int32_t>(0xb)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModelSecondaryColor{static_cast<int32_t>(0xc)};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart  BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModelDetailColor{static_cast<int32_t>(0xd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

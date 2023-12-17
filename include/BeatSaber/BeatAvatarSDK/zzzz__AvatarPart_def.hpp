#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPart)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
// Write type traits
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::AvatarPart);
// Type: BeatSaber.BeatAvatarSDK::AvatarPart
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15683))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPart
struct CORDL_TYPE AvatarPart : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AvatarPart_Unwrapped
enum struct __AvatarPart_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_All = static_cast<int32_t>(0x1),
__E_SkinColor = static_cast<int32_t>(0x2),
__E_HeadTopModel = static_cast<int32_t>(0x3),
__E_HeadTopPrimaryColor = static_cast<int32_t>(0x4),
__E_HeadTopSecondaryColor = static_cast<int32_t>(0x5),
__E_GlassesColor = static_cast<int32_t>(0x6),
__E_FacialHairColor = static_cast<int32_t>(0x7),
__E_HandsModel = static_cast<int32_t>(0x8),
__E_HandsColor = static_cast<int32_t>(0x9),
__E_ClothesModel = static_cast<int32_t>(0xa),
__E_ClothesModelPrimaryColor = static_cast<int32_t>(0xb),
__E_ClothesModelSecondaryColor = static_cast<int32_t>(0xc),
__E_ClothesModelDetailColor = static_cast<int32_t>(0xd),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const Unknown;

/// @brief Field All value: static_cast<int32_t>(0x1)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const All;

/// @brief Field SkinColor value: static_cast<int32_t>(0x2)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const SkinColor;

/// @brief Field HeadTopModel value: static_cast<int32_t>(0x3)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const HeadTopModel;

/// @brief Field HeadTopPrimaryColor value: static_cast<int32_t>(0x4)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const HeadTopPrimaryColor;

/// @brief Field HeadTopSecondaryColor value: static_cast<int32_t>(0x5)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const HeadTopSecondaryColor;

/// @brief Field GlassesColor value: static_cast<int32_t>(0x6)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const GlassesColor;

/// @brief Field FacialHairColor value: static_cast<int32_t>(0x7)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const FacialHairColor;

/// @brief Field HandsModel value: static_cast<int32_t>(0x8)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const HandsModel;

/// @brief Field HandsColor value: static_cast<int32_t>(0x9)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const HandsColor;

/// @brief Field ClothesModel value: static_cast<int32_t>(0xa)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModel;

/// @brief Field ClothesModelPrimaryColor value: static_cast<int32_t>(0xb)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModelPrimaryColor;

/// @brief Field ClothesModelSecondaryColor value: static_cast<int32_t>(0xc)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModelSecondaryColor;

/// @brief Field ClothesModelDetailColor value: static_cast<int32_t>(0xd)
static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModelDetailColor;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AvatarPart_Unwrapped () const noexcept {
return std::bit_cast<__AvatarPart_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvatarPart(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AvatarPart(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AvatarPart()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPart, 0x4>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPart, "BeatSaber.BeatAvatarSDK", "AvatarPart");

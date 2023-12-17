#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontFeatureLookupFlags)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontFeatureLookupFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags);
// Type: UnityEngine.TextCore.LowLevel::FontFeatureLookupFlags
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15539))
// CS Name: ::UnityEngine.TextCore.LowLevel::FontFeatureLookupFlags
struct CORDL_TYPE FontFeatureLookupFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FontFeatureLookupFlags_Unwrapped
enum struct __FontFeatureLookupFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IgnoreLigatures = static_cast<int32_t>(0x4),
__E_IgnoreSpacingAdjustments = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const None;

/// @brief Field IgnoreLigatures value: static_cast<int32_t>(0x4)
static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const IgnoreLigatures;

/// @brief Field IgnoreSpacingAdjustments value: static_cast<int32_t>(0x100)
static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const IgnoreSpacingAdjustments;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FontFeatureLookupFlags_Unwrapped () const noexcept {
return std::bit_cast<__FontFeatureLookupFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontFeatureLookupFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontFeatureLookupFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontFeatureLookupFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags, "UnityEngine.TextCore.LowLevel", "FontFeatureLookupFlags");

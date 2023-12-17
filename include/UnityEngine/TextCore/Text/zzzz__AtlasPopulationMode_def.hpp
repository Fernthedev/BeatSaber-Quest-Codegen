#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasPopulationMode)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct AtlasPopulationMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::AtlasPopulationMode);
// Type: UnityEngine.TextCore.Text::AtlasPopulationMode
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13680))
// CS Name: ::UnityEngine.TextCore.Text::AtlasPopulationMode
struct CORDL_TYPE AtlasPopulationMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AtlasPopulationMode_Unwrapped
enum struct __AtlasPopulationMode_Unwrapped : int32_t {
__E_Static = static_cast<int32_t>(0x0),
__E_Dynamic = static_cast<int32_t>(0x1),
__E_DynamicOS = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Static value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::Text::AtlasPopulationMode const Static;

/// @brief Field Dynamic value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextCore::Text::AtlasPopulationMode const Dynamic;

/// @brief Field DynamicOS value: static_cast<int32_t>(0x2)
static ::UnityEngine::TextCore::Text::AtlasPopulationMode const DynamicOS;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AtlasPopulationMode_Unwrapped () const noexcept {
return std::bit_cast<__AtlasPopulationMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AtlasPopulationMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AtlasPopulationMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AtlasPopulationMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::AtlasPopulationMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::AtlasPopulationMode, "UnityEngine.TextCore.Text", "AtlasPopulationMode");

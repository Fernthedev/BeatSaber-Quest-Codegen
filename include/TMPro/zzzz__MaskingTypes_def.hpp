#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskingTypes)
// Forward declare root types
namespace TMPro {
struct MaskingTypes;
}
// Write type traits
MARK_VAL_T(::TMPro::MaskingTypes);
// Type: TMPro::MaskingTypes
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12434))
// CS Name: ::TMPro::MaskingTypes
struct CORDL_TYPE MaskingTypes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskingTypes_Unwrapped
enum struct __MaskingTypes_Unwrapped : int32_t {
__E_MaskOff = static_cast<int32_t>(0x0),
__E_MaskHard = static_cast<int32_t>(0x1),
__E_MaskSoft = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field MaskOff value: static_cast<int32_t>(0x0)
static ::TMPro::MaskingTypes const MaskOff;

/// @brief Field MaskHard value: static_cast<int32_t>(0x1)
static ::TMPro::MaskingTypes const MaskHard;

/// @brief Field MaskSoft value: static_cast<int32_t>(0x2)
static ::TMPro::MaskingTypes const MaskSoft;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskingTypes_Unwrapped () const noexcept {
return std::bit_cast<__MaskingTypes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskingTypes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MaskingTypes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MaskingTypes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::MaskingTypes, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaskingTypes, "TMPro", "MaskingTypes");

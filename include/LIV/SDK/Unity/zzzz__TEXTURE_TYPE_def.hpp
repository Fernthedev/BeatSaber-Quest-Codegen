#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TEXTURE_TYPE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_TYPE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::TEXTURE_TYPE);
// Type: LIV.SDK.Unity::TEXTURE_TYPE
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15103))
// CS Name: ::LIV.SDK.Unity::TEXTURE_TYPE
struct CORDL_TYPE TEXTURE_TYPE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __TEXTURE_TYPE_Unwrapped
enum struct __TEXTURE_TYPE_Unwrapped : uint32_t {
__E_UNDEFINED = static_cast<uint32_t>(0xa000100u),
__E_COLOR_BUFFER = static_cast<uint32_t>(0xa0001u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UNDEFINED value: static_cast<uint32_t>(0xa000100u)
static ::LIV::SDK::Unity::TEXTURE_TYPE const UNDEFINED;

/// @brief Field COLOR_BUFFER value: static_cast<uint32_t>(0xa0001u)
static ::LIV::SDK::Unity::TEXTURE_TYPE const COLOR_BUFFER;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TEXTURE_TYPE_Unwrapped () const noexcept {
return std::bit_cast<__TEXTURE_TYPE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TEXTURE_TYPE(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TEXTURE_TYPE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TEXTURE_TYPE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::TEXTURE_TYPE, 0x4>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_TYPE, "LIV.SDK.Unity", "TEXTURE_TYPE");

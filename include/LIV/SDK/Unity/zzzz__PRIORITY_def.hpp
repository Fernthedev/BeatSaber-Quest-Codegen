#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PRIORITY)
// Forward declare root types
namespace LIV::SDK::Unity {
struct PRIORITY;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::PRIORITY);
// Type: LIV.SDK.Unity::PRIORITY
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15100))
// CS Name: ::LIV.SDK.Unity::PRIORITY
struct CORDL_TYPE PRIORITY : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int8_t;

/// @brief Nested struct __PRIORITY_Unwrapped
enum struct __PRIORITY_Unwrapped : int8_t {
__E_NONE = static_cast<int8_t>(0x0),
__E_GAME = static_cast<int8_t>(0x3f),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field NONE value: static_cast<int8_t>(0x0)
static ::LIV::SDK::Unity::PRIORITY const NONE;

/// @brief Field GAME value: static_cast<int8_t>(0x3f)
static ::LIV::SDK::Unity::PRIORITY const GAME;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PRIORITY_Unwrapped () const noexcept {
return std::bit_cast<__PRIORITY_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(int8_t  value) ;

constexpr int8_t& __get_value__() ;

constexpr int8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
constexpr PRIORITY(int8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PRIORITY(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PRIORITY()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::PRIORITY, 0x1>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::PRIORITY, "LIV.SDK.Unity", "PRIORITY");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeZoneHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::DateTimeZoneHandling);
// Type: Newtonsoft.Json::DateTimeZoneHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11797))
// CS Name: ::Newtonsoft.Json::DateTimeZoneHandling
struct CORDL_TYPE DateTimeZoneHandling : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DateTimeZoneHandling_Unwrapped
enum struct __DateTimeZoneHandling_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_Utc = static_cast<int32_t>(0x1),
__E_Unspecified = static_cast<int32_t>(0x2),
__E_RoundtripKind = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Local value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::DateTimeZoneHandling const Local;

/// @brief Field Utc value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::DateTimeZoneHandling const Utc;

/// @brief Field Unspecified value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::DateTimeZoneHandling const Unspecified;

/// @brief Field RoundtripKind value: static_cast<int32_t>(0x3)
static ::Newtonsoft::Json::DateTimeZoneHandling const RoundtripKind;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeZoneHandling_Unwrapped () const noexcept {
return std::bit_cast<__DateTimeZoneHandling_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeZoneHandling(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeZoneHandling(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeZoneHandling()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DateTimeZoneHandling, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateTimeZoneHandling, "Newtonsoft.Json", "DateTimeZoneHandling");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFormatHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::FloatFormatHandling);
// Type: Newtonsoft.Json::FloatFormatHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11798))
// CS Name: ::Newtonsoft.Json::FloatFormatHandling
struct CORDL_TYPE FloatFormatHandling : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloatFormatHandling_Unwrapped
enum struct __FloatFormatHandling_Unwrapped : int32_t {
__E_String = static_cast<int32_t>(0x0),
__E_Symbol = static_cast<int32_t>(0x1),
__E_DefaultValue = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field String value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::FloatFormatHandling const String;

/// @brief Field Symbol value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::FloatFormatHandling const Symbol;

/// @brief Field DefaultValue value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::FloatFormatHandling const DefaultValue;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FloatFormatHandling_Unwrapped () const noexcept {
return std::bit_cast<__FloatFormatHandling_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloatFormatHandling(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FloatFormatHandling(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FloatFormatHandling()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::FloatFormatHandling, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::FloatFormatHandling, "Newtonsoft.Json", "FloatFormatHandling");

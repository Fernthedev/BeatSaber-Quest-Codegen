#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieVariant)
// Forward declare root types
namespace System::Net {
struct CookieVariant;
}
// Write type traits
MARK_VAL_T(::System::Net::CookieVariant);
// Type: System.Net::CookieVariant
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9119))
// CS Name: ::System.Net::CookieVariant
struct CORDL_TYPE CookieVariant : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CookieVariant_Unwrapped
enum struct __CookieVariant_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Plain = static_cast<int32_t>(0x1),
__E_Rfc2109 = static_cast<int32_t>(0x2),
__E_Rfc2965 = static_cast<int32_t>(0x3),
__E_Default = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::System::Net::CookieVariant const Unknown;

/// @brief Field Plain value: static_cast<int32_t>(0x1)
static ::System::Net::CookieVariant const Plain;

/// @brief Field Rfc2109 value: static_cast<int32_t>(0x2)
static ::System::Net::CookieVariant const Rfc2109;

/// @brief Field Rfc2965 value: static_cast<int32_t>(0x3)
static ::System::Net::CookieVariant const Rfc2965;

/// @brief Field Default value: static_cast<int32_t>(0x2)
static ::System::Net::CookieVariant const Default;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CookieVariant_Unwrapped () const noexcept {
return std::bit_cast<__CookieVariant_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CookieVariant(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CookieVariant(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CookieVariant()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieVariant, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieVariant, "System.Net", "CookieVariant");

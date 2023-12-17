#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaddingMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct PaddingMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::PaddingMode);
// Type: System.Security.Cryptography::PaddingMode
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2922))
// CS Name: ::System.Security.Cryptography::PaddingMode
struct CORDL_TYPE PaddingMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PaddingMode_Unwrapped
enum struct __PaddingMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x1),
__E_PKCS7 = static_cast<int32_t>(0x2),
__E_Zeros = static_cast<int32_t>(0x3),
__E_ANSIX923 = static_cast<int32_t>(0x4),
__E_ISO10126 = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::PaddingMode const None;

/// @brief Field PKCS7 value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::PaddingMode const PKCS7;

/// @brief Field Zeros value: static_cast<int32_t>(0x3)
static ::System::Security::Cryptography::PaddingMode const Zeros;

/// @brief Field ANSIX923 value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::PaddingMode const ANSIX923;

/// @brief Field ISO10126 value: static_cast<int32_t>(0x5)
static ::System::Security::Cryptography::PaddingMode const ISO10126;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PaddingMode_Unwrapped () const noexcept {
return std::bit_cast<__PaddingMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaddingMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PaddingMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PaddingMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::PaddingMode, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::PaddingMode, "System.Security.Cryptography", "PaddingMode");

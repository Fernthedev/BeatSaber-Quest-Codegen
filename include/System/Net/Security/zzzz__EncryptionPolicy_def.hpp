#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionPolicy)
// Forward declare root types
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Write type traits
MARK_VAL_T(::System::Net::Security::EncryptionPolicy);
// Type: System.Net.Security::EncryptionPolicy
namespace System::Net::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9366))
// CS Name: ::System.Net.Security::EncryptionPolicy
struct CORDL_TYPE EncryptionPolicy : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncryptionPolicy_Unwrapped
enum struct __EncryptionPolicy_Unwrapped : int32_t {
__E_RequireEncryption = static_cast<int32_t>(0x0),
__E_AllowNoEncryption = static_cast<int32_t>(0x1),
__E_NoEncryption = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field RequireEncryption value: static_cast<int32_t>(0x0)
static ::System::Net::Security::EncryptionPolicy const RequireEncryption;

/// @brief Field AllowNoEncryption value: static_cast<int32_t>(0x1)
static ::System::Net::Security::EncryptionPolicy const AllowNoEncryption;

/// @brief Field NoEncryption value: static_cast<int32_t>(0x2)
static ::System::Net::Security::EncryptionPolicy const NoEncryption;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionPolicy_Unwrapped () const noexcept {
return std::bit_cast<__EncryptionPolicy_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EncryptionPolicy(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EncryptionPolicy(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EncryptionPolicy()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::EncryptionPolicy, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::EncryptionPolicy, "System.Net.Security", "EncryptionPolicy");

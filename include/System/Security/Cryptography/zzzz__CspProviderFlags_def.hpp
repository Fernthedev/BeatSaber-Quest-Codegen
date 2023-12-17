#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CspProviderFlags)
// Forward declare root types
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CspProviderFlags);
// Type: System.Security.Cryptography::CspProviderFlags
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2926))
// CS Name: ::System.Security.Cryptography::CspProviderFlags
struct CORDL_TYPE CspProviderFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CspProviderFlags_Unwrapped
enum struct __CspProviderFlags_Unwrapped : int32_t {
__E_NoFlags = static_cast<int32_t>(0x0),
__E_UseMachineKeyStore = static_cast<int32_t>(0x1),
__E_UseDefaultKeyContainer = static_cast<int32_t>(0x2),
__E_UseNonExportableKey = static_cast<int32_t>(0x4),
__E_UseExistingKey = static_cast<int32_t>(0x8),
__E_UseArchivableKey = static_cast<int32_t>(0x10),
__E_UseUserProtectedKey = static_cast<int32_t>(0x20),
__E_NoPrompt = static_cast<int32_t>(0x40),
__E_CreateEphemeralKey = static_cast<int32_t>(0x80),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoFlags value: static_cast<int32_t>(0x0)
static ::System::Security::Cryptography::CspProviderFlags const NoFlags;

/// @brief Field UseMachineKeyStore value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::CspProviderFlags const UseMachineKeyStore;

/// @brief Field UseDefaultKeyContainer value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::CspProviderFlags const UseDefaultKeyContainer;

/// @brief Field UseNonExportableKey value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::CspProviderFlags const UseNonExportableKey;

/// @brief Field UseExistingKey value: static_cast<int32_t>(0x8)
static ::System::Security::Cryptography::CspProviderFlags const UseExistingKey;

/// @brief Field UseArchivableKey value: static_cast<int32_t>(0x10)
static ::System::Security::Cryptography::CspProviderFlags const UseArchivableKey;

/// @brief Field UseUserProtectedKey value: static_cast<int32_t>(0x20)
static ::System::Security::Cryptography::CspProviderFlags const UseUserProtectedKey;

/// @brief Field NoPrompt value: static_cast<int32_t>(0x40)
static ::System::Security::Cryptography::CspProviderFlags const NoPrompt;

/// @brief Field CreateEphemeralKey value: static_cast<int32_t>(0x80)
static ::System::Security::Cryptography::CspProviderFlags const CreateEphemeralKey;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CspProviderFlags_Unwrapped () const noexcept {
return std::bit_cast<__CspProviderFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CspProviderFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CspProviderFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CspProviderFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CspProviderFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspProviderFlags, "System.Security.Cryptography", "CspProviderFlags");

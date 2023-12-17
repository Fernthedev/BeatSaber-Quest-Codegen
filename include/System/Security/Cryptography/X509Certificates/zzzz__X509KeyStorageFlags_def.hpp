#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509KeyStorageFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags);
// Type: System.Security.Cryptography.X509Certificates::X509KeyStorageFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2990))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509KeyStorageFlags
struct CORDL_TYPE X509KeyStorageFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X509KeyStorageFlags_Unwrapped
enum struct __X509KeyStorageFlags_Unwrapped : int32_t {
__E_DefaultKeySet = static_cast<int32_t>(0x0),
__E_UserKeySet = static_cast<int32_t>(0x1),
__E_MachineKeySet = static_cast<int32_t>(0x2),
__E_Exportable = static_cast<int32_t>(0x4),
__E_UserProtected = static_cast<int32_t>(0x8),
__E_PersistKeySet = static_cast<int32_t>(0x10),
__E_EphemeralKeySet = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DefaultKeySet value: static_cast<int32_t>(0x0)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const DefaultKeySet;

/// @brief Field UserKeySet value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const UserKeySet;

/// @brief Field MachineKeySet value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const MachineKeySet;

/// @brief Field Exportable value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const Exportable;

/// @brief Field UserProtected value: static_cast<int32_t>(0x8)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const UserProtected;

/// @brief Field PersistKeySet value: static_cast<int32_t>(0x10)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const PersistKeySet;

/// @brief Field EphemeralKeySet value: static_cast<int32_t>(0x20)
static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const EphemeralKeySet;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __X509KeyStorageFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509KeyStorageFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509KeyStorageFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit X509KeyStorageFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 X509KeyStorageFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");

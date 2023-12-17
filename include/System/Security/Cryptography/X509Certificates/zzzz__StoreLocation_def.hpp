#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StoreLocation)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::StoreLocation);
// Type: System.Security.Cryptography.X509Certificates::StoreLocation
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8979))
// CS Name: ::System.Security.Cryptography.X509Certificates::StoreLocation
struct CORDL_TYPE StoreLocation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StoreLocation_Unwrapped
enum struct __StoreLocation_Unwrapped : int32_t {
__E_CurrentUser = static_cast<int32_t>(0x1),
__E_LocalMachine = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field CurrentUser value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::X509Certificates::StoreLocation const CurrentUser;

/// @brief Field LocalMachine value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::X509Certificates::StoreLocation const LocalMachine;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StoreLocation_Unwrapped () const noexcept {
return std::bit_cast<__StoreLocation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StoreLocation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StoreLocation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StoreLocation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::StoreLocation, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::StoreLocation, "System.Security.Cryptography.X509Certificates", "StoreLocation");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(X509ChainStatus)
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509ChainStatus);
// Type: System.Security.Cryptography.X509Certificates::X509ChainStatus
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9009))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainStatus
struct CORDL_TYPE X509ChainStatus : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field status offset 0x0
 __declspec(property(get=__get_status, put=__set_status)) ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  status;

/// @brief Field info offset 0x8
 __declspec(property(get=__get_info, put=__set_info)) ::StringW  info;

 __declspec(property(get=get_Status, put=set_Status)) ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  Status;

 __declspec(property(put=set_StatusInformation)) ::StringW  StatusInformation;

constexpr void __set_status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags& __get_status() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const& __get_status() const;

constexpr void __set_info(::StringW  value) ;

constexpr ::StringW& __get_info() ;

constexpr ::StringW const& __get_info() const;

/// @brief Method .ctor addr 0x29812dc size 0x20 virtual false final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  flag) ;

/// @brief Method get_Status addr 0x2983c48 size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_Status() ;

/// @brief Method set_Status addr 0x2983c50 size 0x8 virtual false final false
inline void set_Status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  value) ;

/// @brief Method set_StatusInformation addr 0x2983c58 size 0x8 virtual false final false
inline void set_StatusInformation(::StringW  value) ;

/// @brief Method GetInformation addr 0x297fd64 size 0x198 virtual false final false
static inline ::StringW GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  flags) ;

// Ctor Parameters [CppParam { name: "status", ty: "::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::StringW", modifiers: "", def_value: None }]
constexpr X509ChainStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  status, ::StringW  info) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit X509ChainStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 X509ChainStatus()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainStatus, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatus, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");

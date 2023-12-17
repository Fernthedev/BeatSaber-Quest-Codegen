#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnixNoLibCIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNoLibCIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties);
// Type: System.Net.NetworkInformation::UnixNoLibCIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9286))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9287))
// CS Name: ::System.Net.NetworkInformation::UnixNoLibCIPGlobalProperties*
class CORDL_TYPE UnixNoLibCIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Net::NetworkInformation::UnixIPGlobalProperties)]{};

 __declspec(property(get=get_DomainName)) ::StringW  DomainName;

/// @brief Method get_DomainName addr 0x29f05f8 size 0x48 virtual true final false
inline ::StringW get_DomainName() ;

static inline ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties* New_ctor() ;

/// @brief Method .ctor addr 0x29f0640 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnixNoLibCIPGlobalProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnixNoLibCIPGlobalProperties(UnixNoLibCIPGlobalProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnixNoLibCIPGlobalProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnixNoLibCIPGlobalProperties(UnixNoLibCIPGlobalProperties const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnixNoLibCIPGlobalProperties()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");

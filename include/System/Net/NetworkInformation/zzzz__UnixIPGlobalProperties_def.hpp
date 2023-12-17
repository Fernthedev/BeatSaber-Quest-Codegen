#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_def.hpp"
CORDL_MODULE_EXPORT(UnixIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixIPGlobalProperties);
// Type: System.Net.NetworkInformation::UnixIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9285))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9286))
// CS Name: ::System.Net.NetworkInformation::UnixIPGlobalProperties*
class CORDL_TYPE UnixIPGlobalProperties : public ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Net::NetworkInformation::CommonUnixIPGlobalProperties)]{};

static inline ::System::Net::NetworkInformation::UnixIPGlobalProperties* New_ctor() ;

/// @brief Method .ctor addr 0x29f05f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnixIPGlobalProperties(UnixIPGlobalProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnixIPGlobalProperties(UnixIPGlobalProperties const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnixIPGlobalProperties()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixIPGlobalProperties, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPGlobalProperties*, "System.Net.NetworkInformation", "UnixIPGlobalProperties");

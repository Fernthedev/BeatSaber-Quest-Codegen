#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IPGlobalPropertiesFactoryPal)
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPGlobalPropertiesFactoryPal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal);
// Type: System.Net.NetworkInformation::IPGlobalPropertiesFactoryPal
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9266))
// CS Name: ::System.Net.NetworkInformation::IPGlobalPropertiesFactoryPal*
class CORDL_TYPE IPGlobalPropertiesFactoryPal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x29eb6b0 size 0x50 virtual false final false
static inline ::System::Net::NetworkInformation::IPGlobalProperties* Create() ;

// Ctor Parameters [CppParam { name: "", ty: "IPGlobalPropertiesFactoryPal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPGlobalPropertiesFactoryPal(IPGlobalPropertiesFactoryPal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPGlobalPropertiesFactoryPal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPGlobalPropertiesFactoryPal(IPGlobalPropertiesFactoryPal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IPGlobalPropertiesFactoryPal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal*, "System.Net.NetworkInformation", "IPGlobalPropertiesFactoryPal");

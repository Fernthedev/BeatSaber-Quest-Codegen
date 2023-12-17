#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkInterfaceFactoryPal)
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactoryPal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal);
// Type: System.Net.NetworkInformation::NetworkInterfaceFactoryPal
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9284))
// CS Name: ::System.Net.NetworkInformation::NetworkInterfaceFactoryPal*
class CORDL_TYPE NetworkInterfaceFactoryPal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x29f0294 size 0x50 virtual false final false
static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create() ;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactoryPal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkInterfaceFactoryPal(NetworkInterfaceFactoryPal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactoryPal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkInterfaceFactoryPal(NetworkInterfaceFactoryPal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetworkInterfaceFactoryPal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::NetworkInterfaceFactoryPal, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal*, "System.Net.NetworkInformation", "NetworkInterfaceFactoryPal");

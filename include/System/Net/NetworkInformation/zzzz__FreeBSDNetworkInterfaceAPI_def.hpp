#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
CORDL_MODULE_EXPORT(FreeBSDNetworkInterfaceAPI)
// Forward declare root types
namespace System::Net::NetworkInformation {
class FreeBSDNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::FreeBSDNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9265))
// CS Name: ::System.Net.NetworkInformation::FreeBSDNetworkInterfaceAPI*
class CORDL_TYPE FreeBSDNetworkInterfaceAPI : public ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI)]{};

static inline ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI* New_ctor() ;

/// @brief Method .ctor addr 0x29ed98c size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FreeBSDNetworkInterfaceAPI()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI, 0x18>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*, "System.Net.NetworkInformation", "FreeBSDNetworkInterfaceAPI");

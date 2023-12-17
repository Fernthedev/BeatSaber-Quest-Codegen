#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnixNetworkInterfaceAPI)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::UnixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9283))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9291))
// CS Name: ::System.Net.NetworkInformation::UnixNetworkInterfaceAPI*
class CORDL_TYPE UnixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Net::NetworkInformation::NetworkInterfaceFactory)]{};

/// @brief Method getifaddrs addr 0x29ee038 size 0x7c virtual false final false
static inline int32_t getifaddrs(ByRef<::cordl_internals::intptr_t>  ifap) ;

/// @brief Method freeifaddrs addr 0x29edfb8 size 0x7c virtual false final false
static inline void freeifaddrs(::cordl_internals::intptr_t  ifap) ;

static inline ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI* New_ctor() ;

/// @brief Method .ctor addr 0x29ed85c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnixNetworkInterfaceAPI(UnixNetworkInterfaceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnixNetworkInterfaceAPI(UnixNetworkInterfaceAPI const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnixNetworkInterfaceAPI()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "UnixNetworkInterfaceAPI");

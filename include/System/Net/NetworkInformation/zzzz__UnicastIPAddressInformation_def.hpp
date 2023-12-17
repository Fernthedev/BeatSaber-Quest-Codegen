#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_def.hpp"
CORDL_MODULE_EXPORT(UnicastIPAddressInformation)
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnicastIPAddressInformation);
// Type: System.Net.NetworkInformation::UnicastIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9248))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9256))
// CS Name: ::System.Net.NetworkInformation::UnicastIPAddressInformation*
class CORDL_TYPE UnicastIPAddressInformation : public ::System::Net::NetworkInformation::IPAddressInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Net::NetworkInformation::IPAddressInformation)]{};

static inline ::System::Net::NetworkInformation::UnicastIPAddressInformation* New_ctor() ;

/// @brief Method .ctor addr 0x29ebcf0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnicastIPAddressInformation(UnicastIPAddressInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnicastIPAddressInformation(UnicastIPAddressInformation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnicastIPAddressInformation()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnicastIPAddressInformation, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnicastIPAddressInformation*, "System.Net.NetworkInformation", "UnicastIPAddressInformation");

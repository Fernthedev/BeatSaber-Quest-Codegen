#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IPAddress_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddress_ReadOnlyIPAddress)
// Forward declare root types
namespace System::Net {
class __IPAddress__ReadOnlyIPAddress;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::__IPAddress__ReadOnlyIPAddress);
// Type: ::ReadOnlyIPAddress
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9030))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9029))
// CS Name: ::IPAddress::ReadOnlyIPAddress*
class CORDL_TYPE __IPAddress__ReadOnlyIPAddress : public ::System::Net::IPAddress {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Net::IPAddress)]{};

static inline ::System::Net::__IPAddress__ReadOnlyIPAddress* New_ctor(int64_t  newAddress) ;

/// @brief Method .ctor addr 0x298be3c size 0x64 virtual false final false
inline void _ctor(int64_t  newAddress) ;

// Ctor Parameters [CppParam { name: "", ty: "__IPAddress__ReadOnlyIPAddress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IPAddress__ReadOnlyIPAddress(__IPAddress__ReadOnlyIPAddress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IPAddress__ReadOnlyIPAddress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IPAddress__ReadOnlyIPAddress(__IPAddress__ReadOnlyIPAddress const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IPAddress__ReadOnlyIPAddress()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__IPAddress__ReadOnlyIPAddress, 0x30>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::__IPAddress__ReadOnlyIPAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__IPAddress__ReadOnlyIPAddress*, "System.Net", "IPAddress/ReadOnlyIPAddress");

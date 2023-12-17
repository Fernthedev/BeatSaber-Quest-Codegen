#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_def.hpp"
CORDL_MODULE_EXPORT(LinuxUnicastIPAddressInformation)
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxUnicastIPAddressInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation);
// Type: System.Net.NetworkInformation::LinuxUnicastIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9256))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9277))
// CS Name: ::System.Net.NetworkInformation::LinuxUnicastIPAddressInformation*
class CORDL_TYPE LinuxUnicastIPAddressInformation : public ::System::Net::NetworkInformation::UnicastIPAddressInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Net::NetworkInformation::UnicastIPAddressInformation)]{};

/// @brief Field address offset 0x10
 __declspec(property(get=__get_address, put=__set_address)) ::System::Net::IPAddress*  address;

 __declspec(property(get=get_Address)) ::System::Net::IPAddress*  Address;

constexpr void __set_address(::System::Net::IPAddress*  value) ;

constexpr ::System::Net::IPAddress* __get_address() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> __get_address() const;

static inline ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation* New_ctor(::System::Net::IPAddress*  address) ;

/// @brief Method .ctor addr 0x29ef2ac size 0x28 virtual false final false
inline void _ctor(::System::Net::IPAddress*  address) ;

/// @brief Method get_Address addr 0x29ef2d4 size 0x8 virtual true final false
inline ::System::Net::IPAddress* get_Address() ;

// Ctor Parameters [CppParam { name: "", ty: "LinuxUnicastIPAddressInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinuxUnicastIPAddressInformation(LinuxUnicastIPAddressInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinuxUnicastIPAddressInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinuxUnicastIPAddressInformation(LinuxUnicastIPAddressInformation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinuxUnicastIPAddressInformation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation, 0x18>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*, "System.Net.NetworkInformation", "LinuxUnicastIPAddressInformation");

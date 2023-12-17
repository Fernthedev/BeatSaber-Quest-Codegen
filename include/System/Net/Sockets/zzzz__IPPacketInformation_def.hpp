#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPPacketInformation)
namespace System::Net {
class IPAddress;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
struct IPPacketInformation;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::IPPacketInformation);
// Type: System.Net.Sockets::IPPacketInformation
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9339))
// CS Name: ::System.Net.Sockets::IPPacketInformation
struct CORDL_TYPE IPPacketInformation : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field address offset 0x0
 __declspec(property(get=__get_address, put=__set_address)) ::System::Net::IPAddress*  address;

/// @brief Field networkInterface offset 0x8
 __declspec(property(get=__get_networkInterface, put=__set_networkInterface)) int32_t  networkInterface;

constexpr void __set_address(::System::Net::IPAddress*  value) ;

constexpr ::System::Net::IPAddress* __get_address() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> __get_address() const;

constexpr void __set_networkInterface(int32_t  value) ;

constexpr int32_t& __get_networkInterface() ;

constexpr int32_t const& __get_networkInterface() const;

/// @brief Method Equals addr 0x28fc550 size 0x9c virtual true final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetHashCode addr 0x28fc5ec size 0x44 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress*", modifiers: "", def_value: None }, CppParam { name: "networkInterface", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IPPacketInformation(::System::Net::IPAddress*  address, int32_t  networkInterface) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IPPacketInformation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IPPacketInformation()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::IPPacketInformation, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::IPPacketInformation, "System.Net.Sockets", "IPPacketInformation");

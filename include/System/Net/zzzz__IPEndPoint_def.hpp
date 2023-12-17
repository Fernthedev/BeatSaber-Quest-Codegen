#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPEndPoint)
namespace System::Net {
class SocketAddress;
}
namespace System {
class Object;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
// Forward declare root types
namespace System::Net {
class IPEndPoint;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IPEndPoint);
// Type: System.Net::IPEndPoint
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9061))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9032))
// CS Name: ::System.Net::IPEndPoint*
class CORDL_TYPE IPEndPoint : public ::System::Net::EndPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Net::EndPoint)]{};

/// @brief Field MinPort offset 0x0
static constexpr int32_t  MinPort{static_cast<int32_t>(0x0)};

/// @brief Field MaxPort offset 0x0
static constexpr int32_t  MaxPort{static_cast<int32_t>(0xffff)};

/// @brief Field AnyPort offset 0x0
static constexpr int32_t  AnyPort{static_cast<int32_t>(0x0)};

/// @brief Field _address offset 0x10
 __declspec(property(get=__get__address, put=__set__address)) ::System::Net::IPAddress*  _address;

/// @brief Field _port offset 0x18
 __declspec(property(get=__get__port, put=__set__port)) int32_t  _port;

 __declspec(property(get=get_AddressFamily)) ::System::Net::Sockets::AddressFamily  AddressFamily;

 __declspec(property(get=get_Address)) ::System::Net::IPAddress*  Address;

 __declspec(property(get=get_Port)) int32_t  Port;

constexpr void __set__address(::System::Net::IPAddress*  value) ;

constexpr ::System::Net::IPAddress* __get__address() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> __get__address() const;

constexpr void __set__port(int32_t  value) ;

constexpr int32_t& __get__port() ;

constexpr int32_t const& __get__port() const;

static inline void setStaticF_Any(::System::Net::IPEndPoint*  value) ;

static inline ::System::Net::IPEndPoint* getStaticF_Any() ;

static inline void setStaticF_IPv6Any(::System::Net::IPEndPoint*  value) ;

static inline ::System::Net::IPEndPoint* getStaticF_IPv6Any() ;

/// @brief Method get_AddressFamily addr 0x298c624 size 0x2c virtual true final false
inline ::System::Net::Sockets::AddressFamily get_AddressFamily() ;

static inline ::System::Net::IPEndPoint* New_ctor(::System::Net::IPAddress*  address, int32_t  port) ;

/// @brief Method .ctor addr 0x298c650 size 0xc0 virtual false final false
inline void _ctor(::System::Net::IPAddress*  address, int32_t  port) ;

/// @brief Method get_Address addr 0x298c718 size 0x8 virtual false final false
inline ::System::Net::IPAddress* get_Address() ;

/// @brief Method get_Port addr 0x298c720 size 0x8 virtual false final false
inline int32_t get_Port() ;

/// @brief Method ToString addr 0x298c728 size 0xc0 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Serialize addr 0x298c7e8 size 0x70 virtual true final false
inline ::System::Net::SocketAddress* Serialize() ;

/// @brief Method Create addr 0x298c858 size 0x1f4 virtual true final false
inline ::System::Net::EndPoint* Create(::System::Net::SocketAddress*  socketAddress) ;

/// @brief Method Equals addr 0x298ca4c size 0xb4 virtual true final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetHashCode addr 0x298cb00 size 0x30 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "IPEndPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPEndPoint(IPEndPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPEndPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPEndPoint(IPEndPoint const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IPEndPoint()  = default;
public:


// Fields

// Static field Any

// Static field IPv6Any


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::IPEndPoint, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::IPEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPEndPoint*, "System.Net", "IPEndPoint");

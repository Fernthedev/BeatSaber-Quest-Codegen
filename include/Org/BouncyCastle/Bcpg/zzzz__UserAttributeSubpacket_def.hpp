#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserAttributeSubpacket)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket);
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(528))
// CS Name: ::Org.BouncyCastle.Bcpg::UserAttributeSubpacket*
class CORDL_TYPE UserAttributeSubpacket : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type;

/// @brief Field longLength offset 0x14
 __declspec(property(get=__get_longLength, put=__set_longLength)) bool  longLength;

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

 __declspec(property(get=get_SubpacketType)) ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  SubpacketType;

constexpr void __set_type(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  value) ;

constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag& __get_type() ;

constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag const& __get_type() const;

constexpr void __set_longLength(bool  value) ;

constexpr bool& __get_longLength() ;

constexpr bool const& __get_longLength() const;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

static inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* New_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x11c6b88 size 0x34 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* New_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, bool  forceLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x11c6bbc size 0x40 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, bool  forceLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method get_SubpacketType addr 0x11c6bfc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag get_SubpacketType() ;

/// @brief Method GetData addr 0x11c6c04 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetData() ;

/// @brief Method Encode addr 0x11c6c0c size 0x138 virtual true final false
inline void Encode(::System::IO::Stream*  os) ;

/// @brief Method Equals addr 0x11c6d44 size 0xe8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x11c6e2c size 0xa4 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAttributeSubpacket(UserAttributeSubpacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAttributeSubpacket(UserAttributeSubpacket const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UserAttributeSubpacket()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacket");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserAttributeSubpacketsParser)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacketsParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser);
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacketsParser
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(598))
// CS Name: ::Org.BouncyCastle.Bcpg::UserAttributeSubpacketsParser*
class CORDL_TYPE UserAttributeSubpacketsParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field input offset 0x10
 __declspec(property(get=__get_input, put=__set_input)) ::System::IO::Stream*  input;

constexpr void __set_input(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_input() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_input() const;

static inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0x11d4ee4 size 0x28 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

/// @brief Method ReadPacket addr 0x11d5014 size 0x2c4 virtual true final false
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* ReadPacket() ;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacketsParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAttributeSubpacketsParser(UserAttributeSubpacketsParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacketsParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAttributeSubpacketsParser(UserAttributeSubpacketsParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UserAttributeSubpacketsParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacketsParser");

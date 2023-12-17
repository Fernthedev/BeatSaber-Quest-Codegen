#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacketsParser)
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacketsParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser);
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacketsParser
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(590))
// CS Name: ::Org.BouncyCastle.Bcpg::SignatureSubpacketsParser*
class CORDL_TYPE SignatureSubpacketsParser : public ::System::Object {
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

static inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0x11d38d4 size 0x28 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

/// @brief Method ReadPacket addr 0x11d38fc size 0x650 virtual false final false
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* ReadPacket() ;

/// @brief Method CheckData addr 0x11d4b18 size 0xf0 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> CheckData(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  expected, int32_t  bytesRead, ::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureSubpacketsParser(SignatureSubpacketsParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureSubpacketsParser(SignatureSubpacketsParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignatureSubpacketsParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*, "Org.BouncyCastle.Bcpg", "SignatureSubpacketsParser");

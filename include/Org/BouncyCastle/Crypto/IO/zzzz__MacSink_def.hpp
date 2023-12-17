#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacSink)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class MacSink;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::MacSink);
// Type: Org.BouncyCastle.Crypto.IO::MacSink
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(930))
// CS Name: ::Org.BouncyCastle.Crypto.IO::MacSink*
class CORDL_TYPE MacSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseOutputStream)]{};

/// @brief Field mMac offset 0x30
 __declspec(property(get=__get_mMac, put=__set_mMac)) ::Org::BouncyCastle::Crypto::IMac*  mMac;

 __declspec(property(get=get_Mac)) ::Org::BouncyCastle::Crypto::IMac*  Mac;

constexpr void __set_mMac(::Org::BouncyCastle::Crypto::IMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac* __get_mMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> __get_mMac() const;

static inline ::Org::BouncyCastle::Crypto::IO::MacSink* New_ctor(::Org::BouncyCastle::Crypto::IMac*  mac) ;

/// @brief Method .ctor addr 0xf08270 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IMac*  mac) ;

/// @brief Method get_Mac addr 0xf08298 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::IMac* get_Mac() ;

/// @brief Method WriteByte addr 0xf082a0 size 0xac virtual true final false
inline void WriteByte(uint8_t  b) ;

/// @brief Method Write addr 0xf0834c size 0xdc virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "MacSink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacSink(MacSink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacSink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacSink(MacSink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MacSink()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::MacSink, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::MacSink);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::MacSink*, "Org.BouncyCastle.Crypto.IO", "MacSink");

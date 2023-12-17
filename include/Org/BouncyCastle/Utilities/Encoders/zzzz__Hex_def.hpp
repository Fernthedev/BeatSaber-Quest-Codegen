#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hex)
namespace Org::BouncyCastle::Utilities::Encoders {
class HexEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Hex;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::Hex);
// Type: Org.BouncyCastle.Utilities.Encoders::Hex
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1798))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::Hex*
class CORDL_TYPE Hex : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_encoder(::Org::BouncyCastle::Utilities::Encoders::HexEncoder*  value) ;

static inline ::Org::BouncyCastle::Utilities::Encoders::HexEncoder* getStaticF_encoder() ;

static inline ::Org::BouncyCastle::Utilities::Encoders::Hex* New_ctor() ;

/// @brief Method .ctor addr 0x115d814 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method ToHexString addr 0x115d81c size 0x64 virtual false final false
static inline ::StringW ToHexString(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method ToHexString addr 0x115d880 size 0x74 virtual false final false
static inline ::StringW ToHexString(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length) ;

/// @brief Method Encode addr 0x115d9bc size 0x64 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Encode addr 0x115d8f4 size 0xc8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length) ;

/// @brief Method Encode addr 0x115db30 size 0x84 virtual false final false
static inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::System::IO::Stream*  outStream) ;

/// @brief Method Encode addr 0x115dbb4 size 0x90 virtual false final false
static inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length, ::System::IO::Stream*  outStream) ;

/// @brief Method Decode addr 0x115dc44 size 0xd0 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Decode addr 0x115dff8 size 0xd0 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Decode(::StringW  data) ;

/// @brief Method Decode addr 0x115e3c4 size 0x78 virtual false final false
static inline int32_t Decode(::StringW  data, ::System::IO::Stream*  outStream) ;

/// @brief Method DecodeStrict addr 0x115e43c size 0x74 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeStrict(::StringW  str) ;

/// @brief Method DecodeStrict addr 0x115e6f8 size 0x80 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeStrict(::StringW  str, int32_t  off, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "Hex", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Hex(Hex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hex", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hex(Hex const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Hex()  = default;
public:


// Fields

// Static field encoder


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::Hex, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::Hex);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::Hex*, "Org.BouncyCastle.Utilities.Encoders", "Hex");

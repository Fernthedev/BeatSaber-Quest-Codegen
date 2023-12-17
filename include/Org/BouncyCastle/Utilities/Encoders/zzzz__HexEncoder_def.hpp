#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HexEncoder)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class HexEncoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::HexEncoder);
// Type: Org.BouncyCastle.Utilities.Encoders::HexEncoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1799))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::HexEncoder*
class CORDL_TYPE HexEncoder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field encodingTable offset 0x10
 __declspec(property(get=__get_encodingTable, put=__set_encodingTable)) ::ArrayW<uint8_t,::Array<uint8_t>*>  encodingTable;

/// @brief Field decodingTable offset 0x18
 __declspec(property(get=__get_decodingTable, put=__set_decodingTable)) ::ArrayW<uint8_t,::Array<uint8_t>*>  decodingTable;

/// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
constexpr operator  ::Org::BouncyCastle::Utilities::Encoders::IEncoder*() noexcept;

constexpr void __set_encodingTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_encodingTable() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_encodingTable() const;

constexpr void __set_decodingTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_decodingTable() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_decodingTable() const;

/// @brief Method InitialiseDecodingTable addr 0x115e888 size 0x164 virtual false final false
inline void InitialiseDecodingTable() ;

static inline ::Org::BouncyCastle::Utilities::Encoders::HexEncoder* New_ctor() ;

/// @brief Method .ctor addr 0x115e7ec size 0x9c virtual false final false
inline void _ctor() ;

/// @brief Method Encode addr 0x115e9ec size 0xd0 virtual false final false
inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  inBuf, int32_t  inOff, int32_t  inLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBuf, int32_t  outOff) ;

/// @brief Method Encode addr 0x115da20 size 0x110 virtual true final true
inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, ::System::IO::Stream*  outStream) ;

/// @brief Method Ignore addr 0x115eabc size 0x38 virtual false final false
static inline bool Ignore(char16_t  c) ;

/// @brief Method Decode addr 0x115dd14 size 0x2e4 virtual true final true
inline int32_t Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length, ::System::IO::Stream*  outStream) ;

/// @brief Method DecodeString addr 0x115e0c8 size 0x2fc virtual true final true
inline int32_t DecodeString(::StringW  data, ::System::IO::Stream*  outStream) ;

/// @brief Method DecodeStrict addr 0x115e4b0 size 0x248 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeStrict(::StringW  str, int32_t  off, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "HexEncoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HexEncoder(HexEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HexEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HexEncoder(HexEncoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HexEncoder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::HexEncoder, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::HexEncoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::HexEncoder*, "Org.BouncyCastle.Utilities.Encoders", "HexEncoder");

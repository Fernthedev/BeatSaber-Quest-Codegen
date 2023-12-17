#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerStream)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class SignerStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::SignerStream);
// Type: Org.BouncyCastle.Crypto.IO::SignerStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(933))
// CS Name: ::Org.BouncyCastle.Crypto.IO::SignerStream*
class CORDL_TYPE SignerStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::IO::Stream)]{};

/// @brief Field stream offset 0x28
 __declspec(property(get=__get_stream, put=__set_stream)) ::System::IO::Stream*  stream;

/// @brief Field inSigner offset 0x30
 __declspec(property(get=__get_inSigner, put=__set_inSigner)) ::Org::BouncyCastle::Crypto::ISigner*  inSigner;

/// @brief Field outSigner offset 0x38
 __declspec(property(get=__get_outSigner, put=__set_outSigner)) ::Org::BouncyCastle::Crypto::ISigner*  outSigner;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

constexpr void __set_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_stream() const;

constexpr void __set_inSigner(::Org::BouncyCastle::Crypto::ISigner*  value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner* __get_inSigner() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> __get_inSigner() const;

constexpr void __set_outSigner(::Org::BouncyCastle::Crypto::ISigner*  value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner* __get_outSigner() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> __get_outSigner() const;

static inline ::Org::BouncyCastle::Crypto::IO::SignerStream* New_ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Crypto::ISigner*  readSigner, ::Org::BouncyCastle::Crypto::ISigner*  writeSigner) ;

/// @brief Method .ctor addr 0xf08b90 size 0x80 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Crypto::ISigner*  readSigner, ::Org::BouncyCastle::Crypto::ISigner*  writeSigner) ;

/// @brief Method ReadSigner addr 0xf08c10 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::ISigner* ReadSigner() ;

/// @brief Method WriteSigner addr 0xf08c18 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::ISigner* WriteSigner() ;

/// @brief Method Read addr 0xf08c20 size 0xfc virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte addr 0xf08d1c size 0xd0 virtual true final false
inline int32_t ReadByte() ;

/// @brief Method Write addr 0xf08dec size 0xf0 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte addr 0xf08edc size 0xc8 virtual true final false
inline void WriteByte(uint8_t  b) ;

/// @brief Method get_CanRead addr 0xf08fa4 size 0x20 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0xf08fc4 size 0x20 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0xf08fe4 size 0x20 virtual true final false
inline bool get_CanSeek() ;

/// @brief Method get_Length addr 0xf09004 size 0x20 virtual true final false
inline int64_t get_Length() ;

/// @brief Method get_Position addr 0xf09024 size 0x24 virtual true final false
inline int64_t get_Position() ;

/// @brief Method set_Position addr 0xf09048 size 0x24 virtual true final false
inline void set_Position(int64_t  value) ;

/// @brief Method Close addr 0xf0906c size 0x68 virtual true final false
inline void Close() ;

/// @brief Method Flush addr 0xf090d4 size 0x24 virtual true final false
inline void Flush() ;

/// @brief Method Seek addr 0xf090f8 size 0x24 virtual true final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength addr 0xf0911c size 0x24 virtual true final false
inline void SetLength(int64_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "SignerStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignerStream(SignerStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignerStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignerStream(SignerStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignerStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::SignerStream, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::SignerStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::SignerStream*, "Org.BouncyCastle.Crypto.IO", "SignerStream");

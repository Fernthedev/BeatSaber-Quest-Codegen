#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class DigestStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::DigestStream);
// Type: Org.BouncyCastle.Crypto.IO::DigestStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(929))
// CS Name: ::Org.BouncyCastle.Crypto.IO::DigestStream*
class CORDL_TYPE DigestStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::IO::Stream)]{};

/// @brief Field stream offset 0x28
 __declspec(property(get=__get_stream, put=__set_stream)) ::System::IO::Stream*  stream;

/// @brief Field inDigest offset 0x30
 __declspec(property(get=__get_inDigest, put=__set_inDigest)) ::Org::BouncyCastle::Crypto::IDigest*  inDigest;

/// @brief Field outDigest offset 0x38
 __declspec(property(get=__get_outDigest, put=__set_outDigest)) ::Org::BouncyCastle::Crypto::IDigest*  outDigest;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

constexpr void __set_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_stream() const;

constexpr void __set_inDigest(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_inDigest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_inDigest() const;

constexpr void __set_outDigest(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_outDigest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_outDigest() const;

static inline ::Org::BouncyCastle::Crypto::IO::DigestStream* New_ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Crypto::IDigest*  readDigest, ::Org::BouncyCastle::Crypto::IDigest*  writeDigest) ;

/// @brief Method .ctor addr 0xf07cc0 size 0x80 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Crypto::IDigest*  readDigest, ::Org::BouncyCastle::Crypto::IDigest*  writeDigest) ;

/// @brief Method ReadDigest addr 0xf07d40 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::IDigest* ReadDigest() ;

/// @brief Method WriteDigest addr 0xf07d48 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::IDigest* WriteDigest() ;

/// @brief Method Read addr 0xf07d50 size 0xfc virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte addr 0xf07e4c size 0xd0 virtual true final false
inline int32_t ReadByte() ;

/// @brief Method Write addr 0xf07f1c size 0xf0 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte addr 0xf0800c size 0xc8 virtual true final false
inline void WriteByte(uint8_t  b) ;

/// @brief Method get_CanRead addr 0xf080d4 size 0x20 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0xf080f4 size 0x20 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0xf08114 size 0x20 virtual true final false
inline bool get_CanSeek() ;

/// @brief Method get_Length addr 0xf08134 size 0x20 virtual true final false
inline int64_t get_Length() ;

/// @brief Method get_Position addr 0xf08154 size 0x24 virtual true final false
inline int64_t get_Position() ;

/// @brief Method set_Position addr 0xf08178 size 0x24 virtual true final false
inline void set_Position(int64_t  value) ;

/// @brief Method Close addr 0xf0819c size 0x68 virtual true final false
inline void Close() ;

/// @brief Method Flush addr 0xf08204 size 0x24 virtual true final false
inline void Flush() ;

/// @brief Method Seek addr 0xf08228 size 0x24 virtual true final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength addr 0xf0824c size 0x24 virtual true final false
inline void SetLength(int64_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "DigestStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DigestStream(DigestStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DigestStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DigestStream(DigestStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DigestStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::DigestStream, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::DigestStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::DigestStream*, "Org.BouncyCastle.Crypto.IO", "DigestStream");

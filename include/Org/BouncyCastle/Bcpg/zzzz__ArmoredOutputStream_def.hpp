#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArmoredOutputStream)
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ArmoredOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ArmoredOutputStream);
// Type: Org.BouncyCastle.Bcpg::ArmoredOutputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(551))
// CS Name: ::Org.BouncyCastle.Bcpg::ArmoredOutputStream*
class CORDL_TYPE ArmoredOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseOutputStream)]{};

/// @brief Field outStream offset 0x30
 __declspec(property(get=__get_outStream, put=__set_outStream)) ::System::IO::Stream*  outStream;

/// @brief Field buf offset 0x38
 __declspec(property(get=__get_buf, put=__set_buf)) ::ArrayW<int32_t,::Array<int32_t>*>  buf;

/// @brief Field bufPtr offset 0x40
 __declspec(property(get=__get_bufPtr, put=__set_bufPtr)) int32_t  bufPtr;

/// @brief Field crc offset 0x48
 __declspec(property(get=__get_crc, put=__set_crc)) ::Org::BouncyCastle::Bcpg::Crc24*  crc;

/// @brief Field chunkCount offset 0x50
 __declspec(property(get=__get_chunkCount, put=__set_chunkCount)) int32_t  chunkCount;

/// @brief Field lastb offset 0x54
 __declspec(property(get=__get_lastb, put=__set_lastb)) int32_t  lastb;

/// @brief Field start offset 0x58
 __declspec(property(get=__get_start, put=__set_start)) bool  start;

/// @brief Field clearText offset 0x59
 __declspec(property(get=__get_clearText, put=__set_clearText)) bool  clearText;

/// @brief Field newLine offset 0x5a
 __declspec(property(get=__get_newLine, put=__set_newLine)) bool  newLine;

/// @brief Field type offset 0x60
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field headers offset 0x68
 __declspec(property(get=__get_headers, put=__set_headers)) ::System::Collections::IDictionary*  headers;

static inline void setStaticF_HeaderVersion(::StringW  value) ;

static inline ::StringW getStaticF_HeaderVersion() ;

static inline void setStaticF_encodingTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_encodingTable() ;

constexpr void __set_outStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_outStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_outStream() const;

constexpr void __set_buf(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buf() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buf() const;

constexpr void __set_bufPtr(int32_t  value) ;

constexpr int32_t& __get_bufPtr() ;

constexpr int32_t const& __get_bufPtr() const;

constexpr void __set_crc(::Org::BouncyCastle::Bcpg::Crc24*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::Crc24* __get_crc() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::Crc24*> __get_crc() const;

constexpr void __set_chunkCount(int32_t  value) ;

constexpr int32_t& __get_chunkCount() ;

constexpr int32_t const& __get_chunkCount() const;

constexpr void __set_lastb(int32_t  value) ;

constexpr int32_t& __get_lastb() ;

constexpr int32_t const& __get_lastb() const;

constexpr void __set_start(bool  value) ;

constexpr bool& __get_start() ;

constexpr bool const& __get_start() const;

constexpr void __set_clearText(bool  value) ;

constexpr bool& __get_clearText() ;

constexpr bool const& __get_clearText() const;

constexpr void __set_newLine(bool  value) ;

constexpr bool& __get_newLine() ;

constexpr bool const& __get_newLine() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

static inline void setStaticF_nl(::StringW  value) ;

static inline ::StringW getStaticF_nl() ;

static inline void setStaticF_headerStart(::StringW  value) ;

static inline ::StringW getStaticF_headerStart() ;

static inline void setStaticF_headerTail(::StringW  value) ;

static inline ::StringW getStaticF_headerTail() ;

static inline void setStaticF_footerStart(::StringW  value) ;

static inline ::StringW getStaticF_footerStart() ;

static inline void setStaticF_footerTail(::StringW  value) ;

static inline ::StringW getStaticF_footerTail() ;

static inline void setStaticF_Version(::StringW  value) ;

static inline ::StringW getStaticF_Version() ;

constexpr void __set_headers(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_headers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_headers() const;

/// @brief Method Encode addr 0x11ca700 size 0x2f4 virtual false final false
static inline void Encode(::System::IO::Stream*  outStream, ::ArrayW<int32_t,::Array<int32_t>*>  data, int32_t  len) ;

static inline ::Org::BouncyCastle::Bcpg::ArmoredOutputStream* New_ctor(::System::IO::Stream*  outStream) ;

/// @brief Method .ctor addr 0x11ca9f4 size 0x12c virtual false final false
inline void _ctor(::System::IO::Stream*  outStream) ;

static inline ::Org::BouncyCastle::Bcpg::ArmoredOutputStream* New_ctor(::System::IO::Stream*  outStream, ::System::Collections::IDictionary*  headers) ;

/// @brief Method .ctor addr 0x11cadd4 size 0x548 virtual false final false
inline void _ctor(::System::IO::Stream*  outStream, ::System::Collections::IDictionary*  headers) ;

/// @brief Method SetHeader addr 0x11cab20 size 0x2b4 virtual false final false
inline void SetHeader(::StringW  name, ::StringW  val) ;

/// @brief Method AddHeader addr 0x11cb31c size 0x218 virtual false final false
inline void AddHeader(::StringW  name, ::StringW  val) ;

/// @brief Method ResetHeaders addr 0x11cb534 size 0x228 virtual false final false
inline void ResetHeaders() ;

/// @brief Method BeginClearText addr 0x11cb75c size 0x1dc virtual false final false
inline void BeginClearText(::Org::BouncyCastle::Bcpg::HashAlgorithmTag  hashAlgorithm) ;

/// @brief Method EndClearText addr 0x11cb97c size 0x8 virtual false final false
inline void EndClearText() ;

/// @brief Method WriteByte addr 0x11cb984 size 0xacc virtual true final false
inline void WriteByte(uint8_t  b) ;

/// @brief Method Close addr 0x11cc4ec size 0x38 virtual true final false
inline void Close() ;

/// @brief Method DoClose addr 0x11cc524 size 0x1ac virtual false final false
inline void DoClose() ;

/// @brief Method WriteHeaderEntry addr 0x11cc450 size 0x9c virtual false final false
inline void WriteHeaderEntry(::StringW  name, ::StringW  v) ;

/// @brief Method DoWrite addr 0x11cb938 size 0x44 virtual false final false
inline void DoWrite(::StringW  s) ;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredOutputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArmoredOutputStream(ArmoredOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredOutputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArmoredOutputStream(ArmoredOutputStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArmoredOutputStream()  = default;
public:


// Fields

// Static field HeaderVersion

// Static field encodingTable

// Static field nl

// Static field headerStart

// Static field headerTail

// Static field footerStart

// Static field footerTail

// Static field Version


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ArmoredOutputStream, 0x70>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ArmoredOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ArmoredOutputStream*, "Org.BouncyCastle.Bcpg", "ArmoredOutputStream");

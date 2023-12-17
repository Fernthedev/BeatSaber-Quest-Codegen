#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArmoredInputStream)
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ArmoredInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ArmoredInputStream);
// Type: Org.BouncyCastle.Bcpg::ArmoredInputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(550))
// CS Name: ::Org.BouncyCastle.Bcpg::ArmoredInputStream*
class CORDL_TYPE ArmoredInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseInputStream)]{};

/// @brief Field input offset 0x30
 __declspec(property(get=__get_input, put=__set_input)) ::System::IO::Stream*  input;

/// @brief Field start offset 0x38
 __declspec(property(get=__get_start, put=__set_start)) bool  start;

/// @brief Field outBuf offset 0x40
 __declspec(property(get=__get_outBuf, put=__set_outBuf)) ::ArrayW<int32_t,::Array<int32_t>*>  outBuf;

/// @brief Field bufPtr offset 0x48
 __declspec(property(get=__get_bufPtr, put=__set_bufPtr)) int32_t  bufPtr;

/// @brief Field crc offset 0x50
 __declspec(property(get=__get_crc, put=__set_crc)) ::Org::BouncyCastle::Bcpg::Crc24*  crc;

/// @brief Field crcFound offset 0x58
 __declspec(property(get=__get_crcFound, put=__set_crcFound)) bool  crcFound;

/// @brief Field hasHeaders offset 0x59
 __declspec(property(get=__get_hasHeaders, put=__set_hasHeaders)) bool  hasHeaders;

/// @brief Field header offset 0x60
 __declspec(property(get=__get_header, put=__set_header)) ::StringW  header;

/// @brief Field newLineFound offset 0x68
 __declspec(property(get=__get_newLineFound, put=__set_newLineFound)) bool  newLineFound;

/// @brief Field clearText offset 0x69
 __declspec(property(get=__get_clearText, put=__set_clearText)) bool  clearText;

/// @brief Field restart offset 0x6a
 __declspec(property(get=__get_restart, put=__set_restart)) bool  restart;

/// @brief Field headerList offset 0x70
 __declspec(property(get=__get_headerList, put=__set_headerList)) ::System::Collections::IList*  headerList;

/// @brief Field lastC offset 0x78
 __declspec(property(get=__get_lastC, put=__set_lastC)) int32_t  lastC;

/// @brief Field isEndOfStream offset 0x7c
 __declspec(property(get=__get_isEndOfStream, put=__set_isEndOfStream)) bool  isEndOfStream;

static inline void setStaticF_decodingTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_decodingTable() ;

constexpr void __set_input(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_input() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_input() const;

constexpr void __set_start(bool  value) ;

constexpr bool& __get_start() ;

constexpr bool const& __get_start() const;

constexpr void __set_outBuf(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_outBuf() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_outBuf() const;

constexpr void __set_bufPtr(int32_t  value) ;

constexpr int32_t& __get_bufPtr() ;

constexpr int32_t const& __get_bufPtr() const;

constexpr void __set_crc(::Org::BouncyCastle::Bcpg::Crc24*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::Crc24* __get_crc() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::Crc24*> __get_crc() const;

constexpr void __set_crcFound(bool  value) ;

constexpr bool& __get_crcFound() ;

constexpr bool const& __get_crcFound() const;

constexpr void __set_hasHeaders(bool  value) ;

constexpr bool& __get_hasHeaders() ;

constexpr bool const& __get_hasHeaders() const;

constexpr void __set_header(::StringW  value) ;

constexpr ::StringW& __get_header() ;

constexpr ::StringW const& __get_header() const;

constexpr void __set_newLineFound(bool  value) ;

constexpr bool& __get_newLineFound() ;

constexpr bool const& __get_newLineFound() const;

constexpr void __set_clearText(bool  value) ;

constexpr bool& __get_clearText() ;

constexpr bool const& __get_clearText() const;

constexpr void __set_restart(bool  value) ;

constexpr bool& __get_restart() ;

constexpr bool const& __get_restart() const;

constexpr void __set_headerList(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_headerList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_headerList() const;

constexpr void __set_lastC(int32_t  value) ;

constexpr int32_t& __get_lastC() ;

constexpr int32_t const& __get_lastC() const;

constexpr void __set_isEndOfStream(bool  value) ;

constexpr bool& __get_isEndOfStream() ;

constexpr bool const& __get_isEndOfStream() const;

/// @brief Method Decode addr 0x11c948c size 0x208 virtual false final false
inline int32_t Decode(int32_t  in0, int32_t  in1, int32_t  in2, int32_t  in3, ::ArrayW<int32_t,::Array<int32_t>*>  result) ;

static inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0x11c9694 size 0x8 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

static inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* New_ctor(::System::IO::Stream*  input, bool  hasHeaders) ;

/// @brief Method .ctor addr 0x11c969c size 0x124 virtual false final false
inline void _ctor(::System::IO::Stream*  input, bool  hasHeaders) ;

/// @brief Method ParseHeaders addr 0x11c97d4 size 0x434 virtual false final false
inline bool ParseHeaders() ;

/// @brief Method IsClearText addr 0x11c9c08 size 0x8 virtual false final false
inline bool IsClearText() ;

/// @brief Method IsEndOfStream addr 0x11c9c10 size 0x8 virtual false final false
inline bool IsEndOfStream() ;

/// @brief Method GetArmorHeaderLine addr 0x11c9c18 size 0x8 virtual false final false
inline ::StringW GetArmorHeaderLine() ;

/// @brief Method GetArmorHeaders addr 0x11c9c20 size 0x26c virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetArmorHeaders() ;

/// @brief Method ReadIgnoreSpace addr 0x11c9e8c size 0x44 virtual false final false
inline int32_t ReadIgnoreSpace() ;

/// @brief Method ReadIgnoreWhitespace addr 0x11c9ed0 size 0x60 virtual false final false
inline int32_t ReadIgnoreWhitespace() ;

/// @brief Method ReadByteClearText addr 0x11c9f30 size 0xd8 virtual false final false
inline int32_t ReadByteClearText() ;

/// @brief Method ReadClearText addr 0x11ca008 size 0x148 virtual false final false
inline int32_t ReadClearText(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method DoReadByte addr 0x11ca150 size 0x298 virtual false final false
inline int32_t DoReadByte() ;

/// @brief Method ReadByte addr 0x11ca3e8 size 0x9c virtual true final false
inline int32_t ReadByte() ;

/// @brief Method Read addr 0x11ca4cc size 0x1cc virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Close addr 0x11ca698 size 0x68 virtual true final false
inline void Close() ;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredInputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArmoredInputStream(ArmoredInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredInputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArmoredInputStream(ArmoredInputStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArmoredInputStream()  = default;
public:


// Fields

// Static field decodingTable


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ArmoredInputStream, 0x80>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ArmoredInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ArmoredInputStream*, "Org.BouncyCastle.Bcpg", "ArmoredInputStream");

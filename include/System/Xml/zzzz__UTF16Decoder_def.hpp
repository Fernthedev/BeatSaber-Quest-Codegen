#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF16Decoder)
// Forward declare root types
namespace System::Xml {
class UTF16Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::UTF16Decoder);
// Type: System.Xml::UTF16Decoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2827))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11555))
// CS Name: ::System.Xml::UTF16Decoder*
class CORDL_TYPE UTF16Decoder : public ::System::Text::Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Text::Decoder)]{};

/// @brief Field bigEndian offset 0x20
 __declspec(property(get=__get_bigEndian, put=__set_bigEndian)) bool  bigEndian;

/// @brief Field lastByte offset 0x24
 __declspec(property(get=__get_lastByte, put=__set_lastByte)) int32_t  lastByte;

constexpr void __set_bigEndian(bool  value) ;

constexpr bool& __get_bigEndian() ;

constexpr bool const& __get_bigEndian() const;

constexpr void __set_lastByte(int32_t  value) ;

constexpr int32_t& __get_lastByte() ;

constexpr int32_t const& __get_lastByte() const;

static inline ::System::Xml::UTF16Decoder* New_ctor(bool  bigEndian) ;

/// @brief Method .ctor addr 0x28a54c4 size 0x30 virtual false final false
inline void _ctor(bool  bigEndian) ;

/// @brief Method GetCharCount addr 0x28a54f4 size 0x10 virtual true final false
inline int32_t GetCharCount(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetCharCount addr 0x28a5504 size 0xec virtual true final false
inline int32_t GetCharCount(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count, bool  flush) ;

/// @brief Method GetChars addr 0x28a55f0 size 0x238 virtual true final false
inline int32_t GetChars(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex) ;

/// @brief Method Convert addr 0x28a5828 size 0x298 virtual true final false
inline void Convert(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex, int32_t  charCount, bool  flush, ByRef<int32_t>  bytesUsed, ByRef<int32_t>  charsUsed, ByRef<bool>  completed) ;

// Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF16Decoder(UTF16Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF16Decoder(UTF16Decoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UTF16Decoder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::UTF16Decoder, 0x28>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::UTF16Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::UTF16Decoder*, "System.Xml", "UTF16Decoder");

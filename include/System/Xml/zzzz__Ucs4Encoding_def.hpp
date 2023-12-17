#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Encoding)
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Decoder;
}
namespace System::Xml {
class Ucs4Decoder;
}
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Encoding);
// Type: System.Xml::Ucs4Encoding
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11557))
// CS Name: ::System.Xml::Ucs4Encoding*
class CORDL_TYPE Ucs4Encoding : public ::System::Text::Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Text::Encoding)]{};

/// @brief Field ucs4Decoder offset 0x38
 __declspec(property(get=__get_ucs4Decoder, put=__set_ucs4Decoder)) ::System::Xml::Ucs4Decoder*  ucs4Decoder;

 __declspec(property(get=get_WebName)) ::StringW  WebName;

 __declspec(property(get=get_CodePage)) int32_t  CodePage;

constexpr void __set_ucs4Decoder(::System::Xml::Ucs4Decoder*  value) ;

constexpr ::System::Xml::Ucs4Decoder* __get_ucs4Decoder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Ucs4Decoder*> __get_ucs4Decoder() const;

/// @brief Method get_WebName addr 0x28a5bc8 size 0xc virtual true final false
inline ::StringW get_WebName() ;

/// @brief Method GetDecoder addr 0x28a5bd4 size 0x8 virtual true final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetByteCount addr 0x28a5bdc size 0x60 virtual true final false
inline int32_t GetByteCount(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  index, int32_t  count) ;

/// @brief Method GetBytes addr 0x28a5c3c size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(::StringW  s) ;

/// @brief Method GetBytes addr 0x28a5c44 size 0x8 virtual true final false
inline int32_t GetBytes(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex) ;

/// @brief Method GetMaxByteCount addr 0x28a5c4c size 0x8 virtual true final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetCharCount addr 0x28a5c54 size 0x20 virtual true final false
inline int32_t GetCharCount(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetChars addr 0x28a5c74 size 0x20 virtual true final false
inline int32_t GetChars(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex) ;

/// @brief Method GetMaxCharCount addr 0x28a5c94 size 0x18 virtual true final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method get_CodePage addr 0x28a5cac size 0x8 virtual true final false
inline int32_t get_CodePage() ;

/// @brief Method GetEncoder addr 0x28a5cb4 size 0x8 virtual true final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method get_UCS4_Littleendian addr 0x28a5cbc size 0x58 virtual false final false
static inline ::System::Text::Encoding* get_UCS4_Littleendian() ;

/// @brief Method get_UCS4_Bigendian addr 0x28a5d7c size 0x58 virtual false final false
static inline ::System::Text::Encoding* get_UCS4_Bigendian() ;

/// @brief Method get_UCS4_2143 addr 0x28a5e3c size 0x58 virtual false final false
static inline ::System::Text::Encoding* get_UCS4_2143() ;

/// @brief Method get_UCS4_3412 addr 0x28a5efc size 0x58 virtual false final false
static inline ::System::Text::Encoding* get_UCS4_3412() ;

static inline ::System::Xml::Ucs4Encoding* New_ctor() ;

/// @brief Method .ctor addr 0x28a5fbc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ucs4Encoding(Ucs4Encoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ucs4Encoding(Ucs4Encoding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Ucs4Encoding()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Encoding, 0x40>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding*, "System.Xml", "Ucs4Encoding");

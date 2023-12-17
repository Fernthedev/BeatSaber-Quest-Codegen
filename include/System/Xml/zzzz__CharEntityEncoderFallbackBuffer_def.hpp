#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharEntityEncoderFallbackBuffer)
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::CharEntityEncoderFallbackBuffer);
// Type: System.Xml::CharEntityEncoderFallbackBuffer
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2845))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11412))
// CS Name: ::System.Xml::CharEntityEncoderFallbackBuffer*
class CORDL_TYPE CharEntityEncoderFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Text::EncoderFallbackBuffer)]{};

/// @brief Field parent offset 0x30
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Xml::CharEntityEncoderFallback*  parent;

/// @brief Field charEntity offset 0x38
 __declspec(property(get=__get_charEntity, put=__set_charEntity)) ::StringW  charEntity;

/// @brief Field charEntityIndex offset 0x40
 __declspec(property(get=__get_charEntityIndex, put=__set_charEntityIndex)) int32_t  charEntityIndex;

 __declspec(property(get=get_Remaining)) int32_t  Remaining;

constexpr void __set_parent(::System::Xml::CharEntityEncoderFallback*  value) ;

constexpr ::System::Xml::CharEntityEncoderFallback* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::CharEntityEncoderFallback*> __get_parent() const;

constexpr void __set_charEntity(::StringW  value) ;

constexpr ::StringW& __get_charEntity() ;

constexpr ::StringW const& __get_charEntity() const;

constexpr void __set_charEntityIndex(int32_t  value) ;

constexpr int32_t& __get_charEntityIndex() ;

constexpr int32_t const& __get_charEntityIndex() const;

static inline ::System::Xml::CharEntityEncoderFallbackBuffer* New_ctor(::System::Xml::CharEntityEncoderFallback*  parent) ;

/// @brief Method .ctor addr 0x284ea30 size 0x74 virtual false final false
inline void _ctor(::System::Xml::CharEntityEncoderFallback*  parent) ;

/// @brief Method Fallback addr 0x284eb28 size 0x1f0 virtual true final false
inline bool Fallback(char16_t  charUnknown, int32_t  index) ;

/// @brief Method Fallback addr 0x284ed18 size 0x280 virtual true final false
inline bool Fallback(char16_t  charUnknownHigh, char16_t  charUnknownLow, int32_t  index) ;

/// @brief Method GetNextChar addr 0x284efa8 size 0x58 virtual true final false
inline char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x284f000 size 0x20 virtual true final false
inline bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x284f020 size 0x34 virtual true final false
inline int32_t get_Remaining() ;

/// @brief Method Reset addr 0x284f054 size 0xc virtual true final false
inline void Reset() ;

/// @brief Method SurrogateCharToUtf32 addr 0x284ef98 size 0x10 virtual false final false
inline int32_t SurrogateCharToUtf32(char16_t  highSurrogate, char16_t  lowSurrogate) ;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CharEntityEncoderFallbackBuffer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::CharEntityEncoderFallbackBuffer, 0x48>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallbackBuffer*, "System.Xml", "CharEntityEncoderFallbackBuffer");

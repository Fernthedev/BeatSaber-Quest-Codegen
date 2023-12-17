#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharEntityEncoderFallback)
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::CharEntityEncoderFallback);
// Type: System.Xml::CharEntityEncoderFallback
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11411))
// CS Name: ::System.Xml::CharEntityEncoderFallback*
class CORDL_TYPE CharEntityEncoderFallback : public ::System::Text::EncoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Text::EncoderFallback)]{};

/// @brief Field fallbackBuffer offset 0x10
 __declspec(property(get=__get_fallbackBuffer, put=__set_fallbackBuffer)) ::System::Xml::CharEntityEncoderFallbackBuffer*  fallbackBuffer;

/// @brief Field textContentMarks offset 0x18
 __declspec(property(get=__get_textContentMarks, put=__set_textContentMarks)) ::ArrayW<int32_t,::Array<int32_t>*>  textContentMarks;

/// @brief Field endMarkPos offset 0x20
 __declspec(property(get=__get_endMarkPos, put=__set_endMarkPos)) int32_t  endMarkPos;

/// @brief Field curMarkPos offset 0x24
 __declspec(property(get=__get_curMarkPos, put=__set_curMarkPos)) int32_t  curMarkPos;

/// @brief Field startOffset offset 0x28
 __declspec(property(get=__get_startOffset, put=__set_startOffset)) int32_t  startOffset;

 __declspec(property(get=get_MaxCharCount)) int32_t  MaxCharCount;

 __declspec(property(put=set_StartOffset)) int32_t  StartOffset;

constexpr void __set_fallbackBuffer(::System::Xml::CharEntityEncoderFallbackBuffer*  value) ;

constexpr ::System::Xml::CharEntityEncoderFallbackBuffer* __get_fallbackBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::CharEntityEncoderFallbackBuffer*> __get_fallbackBuffer() const;

constexpr void __set_textContentMarks(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_textContentMarks() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_textContentMarks() const;

constexpr void __set_endMarkPos(int32_t  value) ;

constexpr int32_t& __get_endMarkPos() ;

constexpr int32_t const& __get_endMarkPos() const;

constexpr void __set_curMarkPos(int32_t  value) ;

constexpr int32_t& __get_curMarkPos() ;

constexpr int32_t const& __get_curMarkPos() const;

constexpr void __set_startOffset(int32_t  value) ;

constexpr int32_t& __get_startOffset() ;

constexpr int32_t const& __get_startOffset() const;

static inline ::System::Xml::CharEntityEncoderFallback* New_ctor() ;

/// @brief Method .ctor addr 0x284e9bc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method CreateFallbackBuffer addr 0x284e9c4 size 0x6c virtual true final false
inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x284eaa4 size 0x8 virtual true final false
inline int32_t get_MaxCharCount() ;

/// @brief Method set_StartOffset addr 0x284eaac size 0x8 virtual false final false
inline void set_StartOffset(int32_t  value) ;

/// @brief Method Reset addr 0x284eab4 size 0xc virtual false final false
inline void Reset(::ArrayW<int32_t,::Array<int32_t>*>  textContentMarks, int32_t  endMarkPos) ;

/// @brief Method CanReplaceAt addr 0x284eac0 size 0x68 virtual false final false
inline bool CanReplaceAt(int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharEntityEncoderFallback(CharEntityEncoderFallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharEntityEncoderFallback(CharEntityEncoderFallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CharEntityEncoderFallback()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::CharEntityEncoderFallback, 0x30>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallback*, "System.Xml", "CharEntityEncoderFallback");

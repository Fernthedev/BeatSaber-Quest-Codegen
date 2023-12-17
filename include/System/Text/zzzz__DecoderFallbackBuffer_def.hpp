#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderFallbackBuffer)
// Forward declare root types
namespace System::Text {
class DecoderFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderFallbackBuffer);
// Type: System.Text::DecoderFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2834))
// CS Name: ::System.Text::DecoderFallbackBuffer*
class CORDL_TYPE DecoderFallbackBuffer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field byteStart offset 0x10
 __declspec(property(get=__get_byteStart, put=__set_byteStart)) ::cordl_internals::Ptr<uint8_t>  byteStart;

/// @brief Field charEnd offset 0x18
 __declspec(property(get=__get_charEnd, put=__set_charEnd)) ::cordl_internals::Ptr<char16_t>  charEnd;

 __declspec(property(get=get_Remaining)) int32_t  Remaining;

constexpr void __set_byteStart(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_byteStart() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_byteStart() const;

constexpr void __set_charEnd(::cordl_internals::Ptr<char16_t>  value) ;

constexpr ::cordl_internals::Ptr<char16_t>& __get_charEnd() ;

constexpr ::cordl_internals::Ptr<char16_t> const& __get_charEnd() const;

/// @brief Method Fallback addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Fallback(::ArrayW<uint8_t,::Array<uint8_t>*>  bytesUnknown, int32_t  index) ;

/// @brief Method GetNextChar addr 0x0 size 0xffffffffffffffff virtual true final false
inline char16_t GetNextChar() ;

/// @brief Method get_Remaining addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_Remaining() ;

/// @brief Method Reset addr 0x2631468 size 0x28 virtual true final false
inline void Reset() ;

/// @brief Method InternalReset addr 0x262fc8c size 0x10 virtual false final false
inline void InternalReset() ;

/// @brief Method InternalInitialize addr 0x262f9fc size 0x8 virtual false final false
inline void InternalInitialize(::cordl_internals::Ptr<uint8_t>  byteStart, ::cordl_internals::Ptr<char16_t>  charEnd) ;

/// @brief Method InternalFallback addr 0x2631490 size 0x190 virtual true final false
inline bool InternalFallback(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::cordl_internals::Ptr<uint8_t>  pBytes, ByRef<::cordl_internals::Ptr<char16_t>>  chars) ;

/// @brief Method InternalFallback addr 0x2631620 size 0x170 virtual true final false
inline int32_t InternalFallback(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::cordl_internals::Ptr<uint8_t>  pBytes) ;

/// @brief Method ThrowLastBytesRecursive addr 0x2631790 size 0x1fc virtual false final false
inline void ThrowLastBytesRecursive(::ArrayW<uint8_t,::Array<uint8_t>*>  bytesUnknown) ;

static inline ::System::Text::DecoderFallbackBuffer* New_ctor() ;

/// @brief Method .ctor addr 0x2630e38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderFallbackBuffer(DecoderFallbackBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderFallbackBuffer(DecoderFallbackBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DecoderFallbackBuffer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderFallbackBuffer, 0x20>, "Size mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::DecoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackBuffer*, "System.Text", "DecoderFallbackBuffer");

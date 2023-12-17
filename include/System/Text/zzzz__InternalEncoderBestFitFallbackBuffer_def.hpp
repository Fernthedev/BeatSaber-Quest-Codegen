#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalEncoderBestFitFallbackBuffer)
namespace System {
class Object;
}
namespace System::Text {
class InternalEncoderBestFitFallback;
}
// Forward declare root types
namespace System::Text {
class InternalEncoderBestFitFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalEncoderBestFitFallbackBuffer);
// Type: System.Text::InternalEncoderBestFitFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2845))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2840))
// CS Name: ::System.Text::InternalEncoderBestFitFallbackBuffer*
class CORDL_TYPE InternalEncoderBestFitFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Text::EncoderFallbackBuffer)]{};

/// @brief Field _cBestFit offset 0x30
 __declspec(property(get=__get__cBestFit, put=__set__cBestFit)) char16_t  _cBestFit;

/// @brief Field _oFallback offset 0x38
 __declspec(property(get=__get__oFallback, put=__set__oFallback)) ::System::Text::InternalEncoderBestFitFallback*  _oFallback;

/// @brief Field _iCount offset 0x40
 __declspec(property(get=__get__iCount, put=__set__iCount)) int32_t  _iCount;

/// @brief Field _iSize offset 0x44
 __declspec(property(get=__get__iSize, put=__set__iSize)) int32_t  _iSize;

 __declspec(property(get=get_Remaining)) int32_t  Remaining;

constexpr void __set__cBestFit(char16_t  value) ;

constexpr char16_t& __get__cBestFit() ;

constexpr char16_t const& __get__cBestFit() const;

constexpr void __set__oFallback(::System::Text::InternalEncoderBestFitFallback*  value) ;

constexpr ::System::Text::InternalEncoderBestFitFallback* __get__oFallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::InternalEncoderBestFitFallback*> __get__oFallback() const;

constexpr void __set__iCount(int32_t  value) ;

constexpr int32_t& __get__iCount() ;

constexpr int32_t const& __get__iCount() const;

constexpr void __set__iSize(int32_t  value) ;

constexpr int32_t& __get__iSize() ;

constexpr int32_t const& __get__iSize() const;

static inline void setStaticF_s_InternalSyncObject(::System::Object*  value) ;

static inline ::System::Object* getStaticF_s_InternalSyncObject() ;

/// @brief Method get_InternalSyncObject addr 0x2633658 size 0x9c virtual false final false
static inline ::System::Object* get_InternalSyncObject() ;

static inline ::System::Text::InternalEncoderBestFitFallbackBuffer* New_ctor(::System::Text::InternalEncoderBestFitFallback*  fallback) ;

/// @brief Method .ctor addr 0x2633440 size 0x128 virtual false final false
inline void _ctor(::System::Text::InternalEncoderBestFitFallback*  fallback) ;

/// @brief Method Fallback addr 0x26336fc size 0x30 virtual true final false
inline bool Fallback(char16_t  charUnknown, int32_t  index) ;

/// @brief Method Fallback addr 0x2633800 size 0x1e0 virtual true final false
inline bool Fallback(char16_t  charUnknownHigh, char16_t  charUnknownLow, int32_t  index) ;

/// @brief Method GetNextChar addr 0x26339e0 size 0x40 virtual true final false
inline char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x2633a20 size 0x2c virtual true final false
inline bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x2633a4c size 0xc virtual true final false
inline int32_t get_Remaining() ;

/// @brief Method Reset addr 0x2633a58 size 0x14 virtual true final false
inline void Reset() ;

/// @brief Method TryBestFit addr 0x263372c size 0xd4 virtual false final false
inline char16_t TryBestFit(char16_t  cUnknown) ;

// Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallbackBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalEncoderBestFitFallbackBuffer(InternalEncoderBestFitFallbackBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallbackBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalEncoderBestFitFallbackBuffer(InternalEncoderBestFitFallbackBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InternalEncoderBestFitFallbackBuffer()  = default;
public:


// Fields

// Static field s_InternalSyncObject


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::InternalEncoderBestFitFallbackBuffer, 0x48>, "Size mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallbackBuffer*, "System.Text", "InternalEncoderBestFitFallbackBuffer");

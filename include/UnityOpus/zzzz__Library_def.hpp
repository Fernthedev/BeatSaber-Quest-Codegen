#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Library)
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct ErrorCode;
}
namespace UnityOpus {
struct OpusSignal;
}
namespace UnityOpus {
struct SamplingFrequency;
}
namespace UnityOpus {
struct OpusApplication;
}
// Forward declare root types
namespace UnityOpus {
class Library;
}
// Write type traits
MARK_REF_PTR_T(::UnityOpus::Library);
// Type: UnityOpus::Library
namespace UnityOpus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16219))
// CS Name: ::UnityOpus::Library*
class CORDL_TYPE Library : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field maximumPacketDuration offset 0x0
static constexpr int32_t  maximumPacketDuration{static_cast<int32_t>(0x1680)};

/// @brief Field dllName offset 0x0
static constexpr ::ConstString  dllName{u"unityopus"};

/// @brief Method OpusEncoderCreate addr 0x21f7a5c size 0x9c virtual false final false
static inline ::cordl_internals::intptr_t OpusEncoderCreate(::UnityOpus::SamplingFrequency  samplingFrequency, ::UnityOpus::NumChannels  channels, ::UnityOpus::OpusApplication  application, ByRef<::UnityOpus::ErrorCode>  error) ;

/// @brief Method OpusEncode addr 0x21f7e70 size 0xbc virtual false final false
static inline int32_t OpusEncode(::cordl_internals::intptr_t  encoder, ::ArrayW<int16_t,::Array<int16_t>*>  pcm, int32_t  frameSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  maxDataBytes) ;

/// @brief Method OpusEncodeFloat addr 0x21f7ba8 size 0xbc virtual false final false
static inline int32_t OpusEncodeFloat(::cordl_internals::intptr_t  encoder, ::ArrayW<float_t,::Array<float_t>*>  pcm, int32_t  frameSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  maxDataBytes) ;

/// @brief Method OpusEncoderDestroy addr 0x21f7ce8 size 0x7c virtual false final false
static inline void OpusEncoderDestroy(::cordl_internals::intptr_t  encoder) ;

/// @brief Method OpusEncoderSetBitrate addr 0x21f7740 size 0x84 virtual false final false
static inline int32_t OpusEncoderSetBitrate(::cordl_internals::intptr_t  encoder, int32_t  bitrate) ;

/// @brief Method OpusEncoderSetComplexity addr 0x21f77f4 size 0x84 virtual false final false
static inline int32_t OpusEncoderSetComplexity(::cordl_internals::intptr_t  encoder, int32_t  complexity) ;

/// @brief Method OpusEncoderSetSignal addr 0x21f78a8 size 0x84 virtual false final false
static inline int32_t OpusEncoderSetSignal(::cordl_internals::intptr_t  encoder, ::UnityOpus::OpusSignal  signal) ;

/// @brief Method OpusDecoderCreate addr 0x21f7234 size 0x94 virtual false final false
static inline ::cordl_internals::intptr_t OpusDecoderCreate(::UnityOpus::SamplingFrequency  samplingFrequency, ::UnityOpus::NumChannels  channels, ByRef<::UnityOpus::ErrorCode>  error) ;

/// @brief Method OpusDecode addr 0x21f7f2c size 0xc4 virtual false final false
static inline int32_t OpusDecode(::cordl_internals::intptr_t  decoder, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  len, ::ArrayW<int16_t,::Array<int16_t>*>  pcm, int32_t  frameSize, int32_t  decodeFec) ;

/// @brief Method OpusDecodeFloat addr 0x21f7394 size 0xc4 virtual false final false
static inline int32_t OpusDecodeFloat(::cordl_internals::intptr_t  decoder, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  len, ::ArrayW<float_t,::Array<float_t>*>  pcm, int32_t  frameSize, int32_t  decodeFec) ;

/// @brief Method OpusDecoderDestroy addr 0x21f7588 size 0x7c virtual false final false
static inline void OpusDecoderDestroy(::cordl_internals::intptr_t  decoder) ;

/// @brief Method OpusPcmSoftClip addr 0x21f7458 size 0xac virtual false final false
static inline void OpusPcmSoftClip(::ArrayW<float_t,::Array<float_t>*>  pcm, int32_t  frameSize, ::UnityOpus::NumChannels  channels, ::ArrayW<float_t,::Array<float_t>*>  softclipMem) ;

static inline ::UnityOpus::Library* New_ctor() ;

/// @brief Method .ctor addr 0x21f7ff0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Library(Library && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Library(Library const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Library()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::Library, 0x10>, "Size mismatch!");

} // namespace end def UnityOpus
NEED_NO_BOX(::UnityOpus::Library);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Library*, "UnityOpus", "Library");

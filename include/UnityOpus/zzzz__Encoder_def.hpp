#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Encoder)
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct OpusSignal;
}
namespace UnityOpus {
struct OpusApplication;
}
namespace System {
class IDisposable;
}
namespace UnityOpus {
struct SamplingFrequency;
}
// Forward declare root types
namespace UnityOpus {
class Encoder;
}
// Write type traits
MARK_REF_PTR_T(::UnityOpus::Encoder);
// Type: UnityOpus::Encoder
namespace UnityOpus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16213))
// CS Name: ::UnityOpus::Encoder*
class CORDL_TYPE Encoder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field bitrate offset 0x10
 __declspec(property(get=__get_bitrate, put=__set_bitrate)) int32_t  bitrate;

/// @brief Field complexity offset 0x14
 __declspec(property(get=__get_complexity, put=__set_complexity)) int32_t  complexity;

/// @brief Field signal offset 0x18
 __declspec(property(get=__get_signal, put=__set_signal)) ::UnityOpus::OpusSignal  signal;

/// @brief Field encoder offset 0x20
 __declspec(property(get=__get_encoder, put=__set_encoder)) ::cordl_internals::intptr_t  encoder;

/// @brief Field channels offset 0x28
 __declspec(property(get=__get_channels, put=__set_channels)) ::UnityOpus::NumChannels  channels;

/// @brief Field disposedValue offset 0x2c
 __declspec(property(get=__get_disposedValue, put=__set_disposedValue)) bool  disposedValue;

 __declspec(property(get=get_Bitrate, put=set_Bitrate)) int32_t  Bitrate;

 __declspec(property(get=get_Complexity, put=set_Complexity)) int32_t  Complexity;

 __declspec(property(get=get_Signal, put=set_Signal)) ::UnityOpus::OpusSignal  Signal;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_bitrate(int32_t  value) ;

constexpr int32_t& __get_bitrate() ;

constexpr int32_t const& __get_bitrate() const;

constexpr void __set_complexity(int32_t  value) ;

constexpr int32_t& __get_complexity() ;

constexpr int32_t const& __get_complexity() const;

constexpr void __set_signal(::UnityOpus::OpusSignal  value) ;

constexpr ::UnityOpus::OpusSignal& __get_signal() ;

constexpr ::UnityOpus::OpusSignal const& __get_signal() const;

constexpr void __set_encoder(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_encoder() ;

constexpr ::cordl_internals::intptr_t const& __get_encoder() const;

constexpr void __set_channels(::UnityOpus::NumChannels  value) ;

constexpr ::UnityOpus::NumChannels& __get_channels() ;

constexpr ::UnityOpus::NumChannels const& __get_channels() const;

constexpr void __set_disposedValue(bool  value) ;

constexpr bool& __get_disposedValue() ;

constexpr bool const& __get_disposedValue() const;

/// @brief Method get_Bitrate addr 0x21f7710 size 0x8 virtual false final false
inline int32_t get_Bitrate() ;

/// @brief Method set_Bitrate addr 0x21f7718 size 0x28 virtual false final false
inline void set_Bitrate(int32_t  value) ;

/// @brief Method get_Complexity addr 0x21f77c4 size 0x8 virtual false final false
inline int32_t get_Complexity() ;

/// @brief Method set_Complexity addr 0x21f77cc size 0x28 virtual false final false
inline void set_Complexity(int32_t  value) ;

/// @brief Method get_Signal addr 0x21f7878 size 0x8 virtual false final false
inline ::UnityOpus::OpusSignal get_Signal() ;

/// @brief Method set_Signal addr 0x21f7880 size 0x28 virtual false final false
inline void set_Signal(::UnityOpus::OpusSignal  value) ;

static inline ::UnityOpus::Encoder* New_ctor(::UnityOpus::SamplingFrequency  samplingFrequency, ::UnityOpus::NumChannels  channels, ::UnityOpus::OpusApplication  application) ;

/// @brief Method .ctor addr 0x21f792c size 0x130 virtual false final false
inline void _ctor(::UnityOpus::SamplingFrequency  samplingFrequency, ::UnityOpus::NumChannels  channels, ::UnityOpus::OpusApplication  application) ;

/// @brief Method Encode addr 0x21f7af8 size 0xb0 virtual false final false
inline int32_t Encode(::ArrayW<float_t,::Array<float_t>*>  pcm, int32_t  count, ::ArrayW<uint8_t,::Array<uint8_t>*>  output) ;

/// @brief Method Dispose addr 0x21f7c64 size 0x84 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize addr 0x21f7d64 size 0xa0 virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x21f7e04 size 0x6c virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Encoder(Encoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Encoder(Encoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Encoder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::Encoder, 0x30>, "Size mismatch!");

} // namespace end def UnityOpus
NEED_NO_BOX(::UnityOpus::Encoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Encoder*, "UnityOpus", "Encoder");

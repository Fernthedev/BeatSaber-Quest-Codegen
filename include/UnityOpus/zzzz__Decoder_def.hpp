#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Decoder)
namespace System {
class IDisposable;
}
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct SamplingFrequency;
}
// Forward declare root types
namespace UnityOpus {
class Decoder;
}
// Write type traits
MARK_REF_PTR_T(::UnityOpus::Decoder);
// Type: UnityOpus::Decoder
namespace UnityOpus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16212))
// CS Name: ::UnityOpus::Decoder*
class CORDL_TYPE Decoder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field maximumPacketDuration offset 0x0
static constexpr int32_t  maximumPacketDuration{static_cast<int32_t>(0x1680)};

/// @brief Field decoder offset 0x10
 __declspec(property(get=__get_decoder, put=__set_decoder)) ::cordl_internals::intptr_t  decoder;

/// @brief Field channels offset 0x18
 __declspec(property(get=__get_channels, put=__set_channels)) ::UnityOpus::NumChannels  channels;

/// @brief Field softclipMem offset 0x20
 __declspec(property(get=__get_softclipMem, put=__set_softclipMem)) ::ArrayW<float_t,::Array<float_t>*>  softclipMem;

/// @brief Field disposedValue offset 0x28
 __declspec(property(get=__get_disposedValue, put=__set_disposedValue)) bool  disposedValue;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_decoder(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_decoder() ;

constexpr ::cordl_internals::intptr_t const& __get_decoder() const;

constexpr void __set_channels(::UnityOpus::NumChannels  value) ;

constexpr ::UnityOpus::NumChannels& __get_channels() ;

constexpr ::UnityOpus::NumChannels const& __get_channels() const;

constexpr void __set_softclipMem(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_softclipMem() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_softclipMem() const;

constexpr void __set_disposedValue(bool  value) ;

constexpr bool& __get_disposedValue() ;

constexpr bool const& __get_disposedValue() const;

static inline ::UnityOpus::Decoder* New_ctor(::UnityOpus::SamplingFrequency  samplingFrequency, ::UnityOpus::NumChannels  channels) ;

/// @brief Method .ctor addr 0x21f70e0 size 0x154 virtual false final false
inline void _ctor(::UnityOpus::SamplingFrequency  samplingFrequency, ::UnityOpus::NumChannels  channels) ;

/// @brief Method Decode addr 0x21f72c8 size 0xcc virtual false final false
inline int32_t Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  dataLength, ::ArrayW<float_t,::Array<float_t>*>  pcm, int32_t  decodeFec) ;

/// @brief Method Dispose addr 0x21f7504 size 0x84 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize addr 0x21f7604 size 0xa0 virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x21f76a4 size 0x6c virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Decoder(Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decoder(Decoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Decoder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::Decoder, 0x30>, "Size mismatch!");

} // namespace end def UnityOpus
NEED_NO_BOX(::UnityOpus::Decoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Decoder*, "UnityOpus", "Decoder");

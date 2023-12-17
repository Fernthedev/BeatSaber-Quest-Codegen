#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SavWav)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SavWav;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SavWav);
// Type: ::SavWav
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5375))
// CS Name: ::SavWav*
class CORDL_TYPE SavWav : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field HeaderSize offset 0x0
static constexpr uint32_t  HeaderSize{static_cast<uint32_t>(0xfffe002cu)};

/// @brief Field RescaleFactor offset 0x0
static constexpr float_t  RescaleFactor{32767.0};

/// @brief Method Save addr 0x226cc1c size 0x3ac virtual false final false
static inline void Save(::StringW  filepath, ::UnityEngine::AudioClip*  clip, float_t  start, float_t  duration) ;

/// @brief Method GetWav addr 0x226cfc8 size 0x40 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetWav(::UnityEngine::AudioClip*  clip, ByRef<uint32_t>  length, float_t  start, float_t  duration) ;

/// @brief Method ConvertAndWrite addr 0x226d008 size 0x268 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ConvertAndWrite(::UnityEngine::AudioClip*  clip, ByRef<uint32_t>  length, ByRef<uint32_t>  samplesAfterTrimming, float_t  start, float_t  duration) ;

/// @brief Method AddDataToBuffer addr 0x226d520 size 0x70 virtual false final false
static inline void AddDataToBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ByRef<uint32_t>  offset, ::ArrayW<uint8_t,::Array<uint8_t>*>  addBytes) ;

/// @brief Method WriteHeader addr 0x226d270 size 0x2b0 virtual false final false
static inline void WriteHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  stream, ::UnityEngine::AudioClip*  clip, uint32_t  length, uint32_t  samples) ;

// Ctor Parameters [CppParam { name: "", ty: "SavWav", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavWav(SavWav && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavWav", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavWav(SavWav const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SavWav()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SavWav, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SavWav);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SavWav*, "", "SavWav");

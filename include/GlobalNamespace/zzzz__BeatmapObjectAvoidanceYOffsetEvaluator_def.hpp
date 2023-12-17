#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidanceYOffsetEvaluator)
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
struct __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace GlobalNamespace {
struct __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
MARK_VAL_T(::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData);
// Type: ::BufferData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3959))
// CS Name: ::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData
struct CORDL_TYPE __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field songTime offset 0x0
 __declspec(property(get=__get_songTime, put=__set_songTime)) float_t  songTime;

/// @brief Field yOffset offset 0x4
 __declspec(property(get=__get_yOffset, put=__set_yOffset)) float_t  yOffset;

constexpr void __set_songTime(float_t  value) ;

constexpr float_t& __get_songTime() ;

constexpr float_t const& __get_songTime() const;

constexpr void __set_yOffset(float_t  value) ;

constexpr float_t& __get_yOffset() ;

constexpr float_t const& __get_yOffset() const;

/// @brief Method .ctor addr 0x2217808 size 0x8 virtual false final false
inline void _ctor(float_t  songTime, float_t  yOffset) ;

// Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: None }]
constexpr __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(float_t  songTime, float_t  yOffset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectAvoidanceYOffsetEvaluator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3960))
// CS Name: ::BeatmapObjectAvoidanceYOffsetEvaluator*
class CORDL_TYPE BeatmapObjectAvoidanceYOffsetEvaluator : public ::System::Object {
public:
// Declarations
using BufferData = ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field kYJumpOffsetBufferLength offset 0x0
static constexpr int32_t  kYJumpOffsetBufferLength{static_cast<int32_t>(0x7d0)};

/// @brief Field kYJumpOffsetBufferSongTimeInitValue offset 0x0
static constexpr float_t  kYJumpOffsetBufferSongTimeInitValue{-1000.0};

/// @brief Field _currentYJumpOffsetBufferEndIndex offset 0x10
 __declspec(property(get=__get__currentYJumpOffsetBufferEndIndex, put=__set__currentYJumpOffsetBufferEndIndex)) int32_t  _currentYJumpOffsetBufferEndIndex;

/// @brief Field _jumpDurationToDesiredZPosition offset 0x14
 __declspec(property(get=__get__jumpDurationToDesiredZPosition, put=__set__jumpDurationToDesiredZPosition)) float_t  _jumpDurationToDesiredZPosition;

/// @brief Field _yJumpOffsetBuffer offset 0x18
 __declspec(property(get=__get__yJumpOffsetBuffer, put=__set__yJumpOffsetBuffer)) ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>  _yJumpOffsetBuffer;

/// @brief Field _audioTimeSource offset 0x20
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _beatmapObjectSpawnController offset 0x28
 __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController)) ::GlobalNamespace::IBeatmapObjectSpawnController*  _beatmapObjectSpawnController;

constexpr void __set__currentYJumpOffsetBufferEndIndex(int32_t  value) ;

constexpr int32_t& __get__currentYJumpOffsetBufferEndIndex() ;

constexpr int32_t const& __get__currentYJumpOffsetBufferEndIndex() const;

constexpr void __set__jumpDurationToDesiredZPosition(float_t  value) ;

constexpr float_t& __get__jumpDurationToDesiredZPosition() ;

constexpr float_t const& __get__jumpDurationToDesiredZPosition() const;

constexpr void __set__yJumpOffsetBuffer(::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>& __get__yJumpOffsetBuffer() ;

constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> const& __get__yJumpOffsetBuffer() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController*  value) ;

constexpr ::GlobalNamespace::IBeatmapObjectSpawnController* __get__beatmapObjectSpawnController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> __get__beatmapObjectSpawnController() const;

static inline ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController*  beatmapObjectSpawnController, float_t  moveToPlayerHeadTParam, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  noteSpawnData) ;

/// @brief Method .ctor addr 0x22176b4 size 0x154 virtual false final false
inline void _ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController*  beatmapObjectSpawnController, float_t  moveToPlayerHeadTParam, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  noteSpawnData) ;

/// @brief Method ManualUpdate addr 0x2217810 size 0x178 virtual false final false
inline void ManualUpdate() ;

/// @brief Method GetJumpOffsetYAtJumpStartSongTime addr 0x2217988 size 0x310 virtual false final false
inline float_t GetJumpOffsetYAtJumpStartSongTime(float_t  lastDeltaTime) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectAvoidanceYOffsetEvaluator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*, "", "BeatmapObjectAvoidanceYOffsetEvaluator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, "", "BeatmapObjectAvoidanceYOffsetEvaluator/BufferData");

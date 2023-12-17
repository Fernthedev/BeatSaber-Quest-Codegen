#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PosesPlayback)
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesPlayback;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesPlayback);
// Type: ::PosesPlayback
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5929))
// CS Name: ::PosesPlayback*
class CORDL_TYPE PosesPlayback : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioTimeSyncController offset 0x18
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _logger offset 0x20
 __declspec(property(get=__get__logger, put=__set__logger)) ::GlobalNamespace::IBeatSaberLogger*  _logger;

/// @brief Field _transforms offset 0x28
 __declspec(property(get=__get__transforms, put=__set__transforms)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  _transforms;

/// @brief Field _data offset 0x30
 __declspec(property(get=__get__data, put=__set__data)) ::GlobalNamespace::PosesRecordingData*  _data;

/// @brief Field _keyframeIndex offset 0x38
 __declspec(property(get=__get__keyframeIndex, put=__set__keyframeIndex)) int32_t  _keyframeIndex;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger*  value) ;

constexpr ::GlobalNamespace::IBeatSaberLogger* __get__logger() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> __get__logger() const;

constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get__transforms() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

constexpr void __set__data(::GlobalNamespace::PosesRecordingData*  value) ;

constexpr ::GlobalNamespace::PosesRecordingData* __get__data() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesRecordingData*> __get__data() const;

constexpr void __set__keyframeIndex(int32_t  value) ;

constexpr int32_t& __get__keyframeIndex() ;

constexpr int32_t const& __get__keyframeIndex() const;

/// @brief Method Update addr 0x23017c0 size 0x1c virtual false final false
inline void Update() ;

/// @brief Method Init addr 0x22ff99c size 0x26c virtual false final false
inline void Init(::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>  poseObjects, ::GlobalNamespace::PosesRecordingData*  data, ::GlobalNamespace::IBeatSaberLogger*  logger) ;

/// @brief Method StartPlayback addr 0x2300040 size 0xe8 virtual false final false
inline void StartPlayback() ;

/// @brief Method PlaybackTick addr 0x23017dc size 0x3a0 virtual false final false
inline void PlaybackTick(float_t  time) ;

/// @brief Method StopPlayback addr 0x22fffb8 size 0xc virtual false final false
inline void StopPlayback() ;

static inline ::GlobalNamespace::PosesPlayback* New_ctor() ;

/// @brief Method .ctor addr 0x2301b7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PosesPlayback(PosesPlayback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PosesPlayback(PosesPlayback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PosesPlayback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesPlayback, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesPlayback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesPlayback*, "", "PosesPlayback");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsRotationEffectSpawner)
namespace GlobalNamespace {
class TrackLaneRingsRotationEffect;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct __TrackLaneRingsRotationEffectSpawner__RotationStepType;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TrackLaneRingsRotationEffectSpawner__RotationStepType;
}
namespace GlobalNamespace {
class TrackLaneRingsRotationEffectSpawner;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType);
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner);
// Type: ::RotationStepType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5008))
// CS Name: ::TrackLaneRingsRotationEffectSpawner::RotationStepType
struct CORDL_TYPE __TrackLaneRingsRotationEffectSpawner__RotationStepType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped
enum struct ____TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped : int32_t {
__E_Range0ToMax = static_cast<int32_t>(0x0),
__E_Range = static_cast<int32_t>(0x1),
__E_MaxOr0 = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Range0ToMax value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType const Range0ToMax;

/// @brief Field Range value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType const Range;

/// @brief Field MaxOr0 value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType const MaxOr0;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped () const noexcept {
return std::bit_cast<____TrackLaneRingsRotationEffectSpawner__RotationStepType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TrackLaneRingsRotationEffectSpawner__RotationStepType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TrackLaneRingsRotationEffectSpawner__RotationStepType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TrackLaneRingsRotationEffectSpawner__RotationStepType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TrackLaneRingsRotationEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5009))
// CS Name: ::TrackLaneRingsRotationEffectSpawner*
class CORDL_TYPE TrackLaneRingsRotationEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationStepType = ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _trackLaneRingsRotationEffect offset 0x18
 __declspec(property(get=__get__trackLaneRingsRotationEffect, put=__set__trackLaneRingsRotationEffect)) ::GlobalNamespace::TrackLaneRingsRotationEffect*  _trackLaneRingsRotationEffect;

/// @brief Field _beatmapEventType offset 0x20
 __declspec(property(get=__get__beatmapEventType, put=__set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType  _beatmapEventType;

/// @brief Field _rotation offset 0x24
 __declspec(property(get=__get__rotation, put=__set__rotation)) float_t  _rotation;

/// @brief Field _rotationStep offset 0x28
 __declspec(property(get=__get__rotationStep, put=__set__rotationStep)) float_t  _rotationStep;

/// @brief Field _rotationStepType offset 0x2c
 __declspec(property(get=__get__rotationStepType, put=__set__rotationStepType)) ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType  _rotationStepType;

/// @brief Field _rotationPropagationSpeed offset 0x30
 __declspec(property(get=__get__rotationPropagationSpeed, put=__set__rotationPropagationSpeed)) int32_t  _rotationPropagationSpeed;

/// @brief Field _rotationFlexySpeed offset 0x34
 __declspec(property(get=__get__rotationFlexySpeed, put=__set__rotationFlexySpeed)) float_t  _rotationFlexySpeed;

/// @brief Field _beatmapCallbacksController offset 0x38
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapDataCallbackWrapper offset 0x40
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__trackLaneRingsRotationEffect(::GlobalNamespace::TrackLaneRingsRotationEffect*  value) ;

constexpr ::GlobalNamespace::TrackLaneRingsRotationEffect* __get__trackLaneRingsRotationEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrackLaneRingsRotationEffect*> __get__trackLaneRingsRotationEffect() const;

constexpr void __set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEventType() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEventType() const;

constexpr void __set__rotation(float_t  value) ;

constexpr float_t& __get__rotation() ;

constexpr float_t const& __get__rotation() const;

constexpr void __set__rotationStep(float_t  value) ;

constexpr float_t& __get__rotationStep() ;

constexpr float_t const& __get__rotationStep() const;

constexpr void __set__rotationStepType(::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType  value) ;

constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType& __get__rotationStepType() ;

constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType const& __get__rotationStepType() const;

constexpr void __set__rotationPropagationSpeed(int32_t  value) ;

constexpr int32_t& __get__rotationPropagationSpeed() ;

constexpr int32_t const& __get__rotationPropagationSpeed() const;

constexpr void __set__rotationFlexySpeed(float_t  value) ;

constexpr float_t& __get__rotationFlexySpeed() ;

constexpr float_t const& __get__rotationFlexySpeed() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23b87dc size 0x124 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23b8900 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23b891c size 0xcc virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

static inline ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23b89e8 size 0x24 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffectSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackLaneRingsRotationEffectSpawner(TrackLaneRingsRotationEffectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffectSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackLaneRingsRotationEffectSpawner(TrackLaneRingsRotationEffectSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackLaneRingsRotationEffectSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType, "", "TrackLaneRingsRotationEffectSpawner/RotationStepType");
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*, "", "TrackLaneRingsRotationEffectSpawner");

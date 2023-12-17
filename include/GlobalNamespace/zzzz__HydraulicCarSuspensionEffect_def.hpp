#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HydraulicCarSuspensionEffect)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class SpringJoint;
}
namespace UnityEngine {
class Rigidbody;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class HydraulicCarSuspensionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HydraulicCarSuspensionEffect);
// Type: ::HydraulicCarSuspensionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4001))
// CS Name: ::HydraulicCarSuspensionEffect*
class CORDL_TYPE HydraulicCarSuspensionEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _contractEvent offset 0x18
 __declspec(property(get=__get__contractEvent, put=__set__contractEvent)) ::GlobalNamespace::BasicBeatmapEventType  _contractEvent;

/// @brief Field _contractEventValues offset 0x20
 __declspec(property(get=__get__contractEventValues, put=__set__contractEventValues)) ::ArrayW<int32_t,::Array<int32_t>*>  _contractEventValues;

/// @brief Field _expandEvent offset 0x28
 __declspec(property(get=__get__expandEvent, put=__set__expandEvent)) ::GlobalNamespace::BasicBeatmapEventType  _expandEvent;

/// @brief Field _expandEventValues offset 0x30
 __declspec(property(get=__get__expandEventValues, put=__set__expandEventValues)) ::ArrayW<int32_t,::Array<int32_t>*>  _expandEventValues;

/// @brief Field _springJoint offset 0x38
 __declspec(property(get=__get__springJoint, put=__set__springJoint)) ::UnityEngine::SpringJoint*  _springJoint;

/// @brief Field _contractDistance offset 0x40
 __declspec(property(get=__get__contractDistance, put=__set__contractDistance)) float_t  _contractDistance;

/// @brief Field _expandDistance offset 0x44
 __declspec(property(get=__get__expandDistance, put=__set__expandDistance)) float_t  _expandDistance;

/// @brief Field _rigidbody offset 0x48
 __declspec(property(get=__get__rigidbody, put=__set__rigidbody)) ::UnityEngine::Rigidbody*  _rigidbody;

/// @brief Field _beatmapCallbacksController offset 0x50
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _contractEventValuesHashSet offset 0x58
 __declspec(property(get=__get__contractEventValuesHashSet, put=__set__contractEventValuesHashSet)) ::System::Collections::Generic::HashSet_1<int32_t>*  _contractEventValuesHashSet;

/// @brief Field _expandEventValuesHashSet offset 0x60
 __declspec(property(get=__get__expandEventValuesHashSet, put=__set__expandEventValuesHashSet)) ::System::Collections::Generic::HashSet_1<int32_t>*  _expandEventValuesHashSet;

/// @brief Field _contractBeatmapDataCallbackWrapper offset 0x68
 __declspec(property(get=__get__contractBeatmapDataCallbackWrapper, put=__set__contractBeatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _contractBeatmapDataCallbackWrapper;

/// @brief Field _expandBeatmapDataCallbackWrapper offset 0x70
 __declspec(property(get=__get__expandBeatmapDataCallbackWrapper, put=__set__expandBeatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _expandBeatmapDataCallbackWrapper;

constexpr void __set__contractEvent(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__contractEvent() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__contractEvent() const;

constexpr void __set__contractEventValues(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__contractEventValues() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__contractEventValues() const;

constexpr void __set__expandEvent(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__expandEvent() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__expandEvent() const;

constexpr void __set__expandEventValues(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__expandEventValues() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__expandEventValues() const;

constexpr void __set__springJoint(::UnityEngine::SpringJoint*  value) ;

constexpr ::UnityEngine::SpringJoint* __get__springJoint() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpringJoint*> __get__springJoint() const;

constexpr void __set__contractDistance(float_t  value) ;

constexpr float_t& __get__contractDistance() ;

constexpr float_t const& __get__contractDistance() const;

constexpr void __set__expandDistance(float_t  value) ;

constexpr float_t& __get__expandDistance() ;

constexpr float_t const& __get__expandDistance() const;

constexpr void __set__rigidbody(::UnityEngine::Rigidbody*  value) ;

constexpr ::UnityEngine::Rigidbody* __get__rigidbody() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> __get__rigidbody() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* __get__contractEventValuesHashSet() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> __get__contractEventValuesHashSet() const;

constexpr void __set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* __get__expandEventValuesHashSet() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> __get__expandEventValuesHashSet() const;

constexpr void __set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__contractBeatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__contractBeatmapDataCallbackWrapper() const;

constexpr void __set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__expandBeatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__expandBeatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x222059c size 0x220 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22207bc size 0x40 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleContractBeatmapEvent addr 0x22207fc size 0xa4 virtual false final false
inline void HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

/// @brief Method HandleExpandBeatmapEvent addr 0x22208a0 size 0xa4 virtual false final false
inline void HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

static inline ::GlobalNamespace::HydraulicCarSuspensionEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2220944 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HydraulicCarSuspensionEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HydraulicCarSuspensionEffect, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HydraulicCarSuspensionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarSuspensionEffect*, "", "HydraulicCarSuspensionEffect");

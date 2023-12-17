#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneHover)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Cloth;
}
namespace GlobalNamespace {
class __DroneHover__SineLayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DroneHover;
}
namespace GlobalNamespace {
class __DroneHover__SineLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DroneHover);
MARK_REF_PTR_T(::GlobalNamespace::__DroneHover__SineLayer);
// Type: ::SineLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4012))
// CS Name: ::DroneHover::SineLayer*
class CORDL_TYPE __DroneHover__SineLayer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field multiplier offset 0x10
 __declspec(property(get=__get_multiplier, put=__set_multiplier)) float_t  multiplier;

/// @brief Field offset offset 0x14
 __declspec(property(get=__get_offset, put=__set_offset)) float_t  offset;

constexpr void __set_multiplier(float_t  value) ;

constexpr float_t& __get_multiplier() ;

constexpr float_t const& __get_multiplier() const;

constexpr void __set_offset(float_t  value) ;

constexpr float_t& __get_offset() ;

constexpr float_t const& __get_offset() const;

static inline ::GlobalNamespace::__DroneHover__SineLayer* New_ctor() ;

/// @brief Method .ctor addr 0x2222b7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__DroneHover__SineLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DroneHover__SineLayer(__DroneHover__SineLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DroneHover__SineLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DroneHover__SineLayer(__DroneHover__SineLayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DroneHover__SineLayer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DroneHover__SineLayer, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DroneHover
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4013))
// CS Name: ::DroneHover*
class CORDL_TYPE DroneHover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SineLayer = ::GlobalNamespace::__DroneHover__SineLayer;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _hoverAreaPerAxis offset 0x18
 __declspec(property(get=__get__hoverAreaPerAxis, put=__set__hoverAreaPerAxis)) ::UnityEngine::Vector3  _hoverAreaPerAxis;

/// @brief Field _speed offset 0x24
 __declspec(property(get=__get__speed, put=__set__speed)) float_t  _speed;

/// @brief Field _compoundSins offset 0x28
 __declspec(property(get=__get__compoundSins, put=__set__compoundSins)) ::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>*  _compoundSins;

/// @brief Field _tiltTransforms offset 0x30
 __declspec(property(get=__get__tiltTransforms, put=__set__tiltTransforms)) ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  _tiltTransforms;

/// @brief Field _maxTiltAmount offset 0x38
 __declspec(property(get=__get__maxTiltAmount, put=__set__maxTiltAmount)) float_t  _maxTiltAmount;

/// @brief Field _tiltSpeed offset 0x3c
 __declspec(property(get=__get__tiltSpeed, put=__set__tiltSpeed)) float_t  _tiltSpeed;

/// @brief Field _tiltAheadOfTime offset 0x40
 __declspec(property(get=__get__tiltAheadOfTime, put=__set__tiltAheadOfTime)) float_t  _tiltAheadOfTime;

/// @brief Field _tiltToTarget offset 0x44
 __declspec(property(get=__get__tiltToTarget, put=__set__tiltToTarget)) bool  _tiltToTarget;

/// @brief Field _startPos offset 0x48
 __declspec(property(get=__get__startPos, put=__set__startPos)) ::UnityEngine::Vector3  _startPos;

/// @brief Field _cloth offset 0x58
 __declspec(property(get=__get__cloth, put=__set__cloth)) ::UnityEngine::Cloth*  _cloth;

constexpr void __set__hoverAreaPerAxis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__hoverAreaPerAxis() ;

constexpr ::UnityEngine::Vector3 const& __get__hoverAreaPerAxis() const;

constexpr void __set__speed(float_t  value) ;

constexpr float_t& __get__speed() ;

constexpr float_t const& __get__speed() const;

constexpr void __set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>* __get__compoundSins() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>*> __get__compoundSins() const;

constexpr void __set__tiltTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* __get__tiltTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> __get__tiltTransforms() const;

constexpr void __set__maxTiltAmount(float_t  value) ;

constexpr float_t& __get__maxTiltAmount() ;

constexpr float_t const& __get__maxTiltAmount() const;

constexpr void __set__tiltSpeed(float_t  value) ;

constexpr float_t& __get__tiltSpeed() ;

constexpr float_t const& __get__tiltSpeed() const;

constexpr void __set__tiltAheadOfTime(float_t  value) ;

constexpr float_t& __get__tiltAheadOfTime() ;

constexpr float_t const& __get__tiltAheadOfTime() const;

constexpr void __set__tiltToTarget(bool  value) ;

constexpr bool& __get__tiltToTarget() ;

constexpr bool const& __get__tiltToTarget() const;

constexpr void __set__startPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startPos() ;

constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

constexpr void __set__cloth(::UnityEngine::Cloth*  value) ;

constexpr ::UnityEngine::Cloth* __get__cloth() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cloth*> __get__cloth() const;

/// @brief Method Start addr 0x22225e0 size 0x30 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x2222610 size 0x120 virtual false final false
inline void Update() ;

/// @brief Method GetNoiseVec3 addr 0x2222730 size 0x7c virtual false final false
inline ::UnityEngine::Vector3 GetNoiseVec3(float_t  time) ;

/// @brief Method GetNoise addr 0x2222a6c size 0xf4 virtual false final false
inline float_t GetNoise(float_t  time, float_t  offset) ;

/// @brief Method UpdateTiltTransform addr 0x22227ac size 0x2c0 virtual false final false
inline void UpdateTiltTransform() ;

static inline ::GlobalNamespace::DroneHover* New_ctor() ;

/// @brief Method .ctor addr 0x2222b60 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneHover(DroneHover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneHover(DroneHover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DroneHover()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DroneHover, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DroneHover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroneHover*, "", "DroneHover");
NEED_NO_BOX(::GlobalNamespace::__DroneHover__SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DroneHover__SineLayer*, "", "DroneHover/SineLayer");

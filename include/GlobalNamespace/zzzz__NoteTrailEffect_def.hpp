#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteTrailEffect)
namespace GlobalNamespace {
class NoteTrailParticleSystem;
}
namespace GlobalNamespace {
class NoteMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteTrailEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteTrailEffect);
// Type: ::NoteTrailEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4957))
// CS Name: ::NoteTrailEffect*
class CORDL_TYPE NoteTrailEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _particlesPerFrame offset 0x18
 __declspec(property(get=__get__particlesPerFrame, put=__set__particlesPerFrame)) int32_t  _particlesPerFrame;

/// @brief Field _maxSpawnDistance offset 0x1c
 __declspec(property(get=__get__maxSpawnDistance, put=__set__maxSpawnDistance)) float_t  _maxSpawnDistance;

/// @brief Field _noteMovement offset 0x20
 __declspec(property(get=__get__noteMovement, put=__set__noteMovement)) ::GlobalNamespace::NoteMovement*  _noteMovement;

/// @brief Field _noteTrailParticleSystem offset 0x28
 __declspec(property(get=__get__noteTrailParticleSystem, put=__set__noteTrailParticleSystem)) ::GlobalNamespace::NoteTrailParticleSystem*  _noteTrailParticleSystem;

constexpr void __set__particlesPerFrame(int32_t  value) ;

constexpr int32_t& __get__particlesPerFrame() ;

constexpr int32_t const& __get__particlesPerFrame() const;

constexpr void __set__maxSpawnDistance(float_t  value) ;

constexpr float_t& __get__maxSpawnDistance() ;

constexpr float_t const& __get__maxSpawnDistance() const;

constexpr void __set__noteMovement(::GlobalNamespace::NoteMovement*  value) ;

constexpr ::GlobalNamespace::NoteMovement* __get__noteMovement() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteMovement*> __get__noteMovement() const;

constexpr void __set__noteTrailParticleSystem(::GlobalNamespace::NoteTrailParticleSystem*  value) ;

constexpr ::GlobalNamespace::NoteTrailParticleSystem* __get__noteTrailParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteTrailParticleSystem*> __get__noteTrailParticleSystem() const;

/// @brief Method Awake addr 0x23ae960 size 0x100 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23aea60 size 0x12c virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x23aeb8c size 0x64 virtual false final false
inline void Update() ;

/// @brief Method HandleNoteMovementDidInit addr 0x23aebf0 size 0xc virtual false final false
inline void HandleNoteMovementDidInit() ;

/// @brief Method HandleNoteDidStartJump addr 0x23aebfc size 0xc virtual false final false
inline void HandleNoteDidStartJump() ;

static inline ::GlobalNamespace::NoteTrailEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23aec08 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteTrailEffect(NoteTrailEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteTrailEffect(NoteTrailEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteTrailEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteTrailEffect, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteTrailEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailEffect*, "", "NoteTrailEffect");

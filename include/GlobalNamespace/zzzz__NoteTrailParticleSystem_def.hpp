#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteTrailParticleSystem)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteTrailParticleSystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteTrailParticleSystem);
// Type: ::NoteTrailParticleSystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4872))
// CS Name: ::NoteTrailParticleSystem*
class CORDL_TYPE NoteTrailParticleSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _particleSystem offset 0x18
 __declspec(property(get=__get__particleSystem, put=__set__particleSystem)) ::UnityEngine::ParticleSystem*  _particleSystem;

/// @brief Field _emitParams offset 0x20
 __declspec(property(get=__get__emitParams, put=__set__emitParams)) ::UnityEngine::__ParticleSystem__EmitParams  _emitParams;

constexpr void __set__particleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__particleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__particleSystem() const;

constexpr void __set__emitParams(::UnityEngine::__ParticleSystem__EmitParams  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__emitParams() ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__emitParams() const;

/// @brief Method Awake addr 0x239af5c size 0x10 virtual false final false
inline void Awake() ;

/// @brief Method Emit addr 0x239af6c size 0x110 virtual false final false
inline void Emit(::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  endPos, int32_t  count) ;

static inline ::GlobalNamespace::NoteTrailParticleSystem* New_ctor() ;

/// @brief Method .ctor addr 0x239b07c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteTrailParticleSystem(NoteTrailParticleSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteTrailParticleSystem(NoteTrailParticleSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteTrailParticleSystem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteTrailParticleSystem, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteTrailParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailParticleSystem*, "", "NoteTrailParticleSystem");

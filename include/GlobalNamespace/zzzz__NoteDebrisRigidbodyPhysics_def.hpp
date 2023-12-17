#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisRigidbodyPhysics)
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class NoteDebrisSimplePhysics;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisRigidbodyPhysics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisRigidbodyPhysics);
// Type: ::NoteDebrisRigidbodyPhysics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4774))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4775))
// CS Name: ::NoteDebrisRigidbodyPhysics*
class CORDL_TYPE NoteDebrisRigidbodyPhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::NoteDebrisPhysics)]{};

/// @brief Field _rigidbody offset 0x18
 __declspec(property(get=__get__rigidbody, put=__set__rigidbody)) ::UnityEngine::Rigidbody*  _rigidbody;

/// @brief Field _simplePhysics offset 0x20
 __declspec(property(get=__get__simplePhysics, put=__set__simplePhysics)) ::GlobalNamespace::NoteDebrisSimplePhysics*  _simplePhysics;

/// @brief Field _firstUpdate offset 0x28
 __declspec(property(get=__get__firstUpdate, put=__set__firstUpdate)) bool  _firstUpdate;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

constexpr void __set__rigidbody(::UnityEngine::Rigidbody*  value) ;

constexpr ::UnityEngine::Rigidbody* __get__rigidbody() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> __get__rigidbody() const;

constexpr void __set__simplePhysics(::GlobalNamespace::NoteDebrisSimplePhysics*  value) ;

constexpr ::GlobalNamespace::NoteDebrisSimplePhysics* __get__simplePhysics() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebrisSimplePhysics*> __get__simplePhysics() const;

constexpr void __set__firstUpdate(bool  value) ;

constexpr bool& __get__firstUpdate() ;

constexpr bool const& __get__firstUpdate() const;

/// @brief Method get_position addr 0x23883f8 size 0x1c virtual true final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method FixedUpdate addr 0x2388414 size 0x48 virtual false final false
inline void FixedUpdate() ;

/// @brief Method Init addr 0x238845c size 0xc4 virtual true final false
inline void Init(::UnityEngine::Vector3  force, ::UnityEngine::Vector3  torque) ;

/// @brief Method AddVelocity addr 0x2388520 size 0x60 virtual true final false
inline void AddVelocity(::UnityEngine::Vector3  force) ;

static inline ::GlobalNamespace::NoteDebrisRigidbodyPhysics* New_ctor() ;

/// @brief Method .ctor addr 0x2388580 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteDebrisRigidbodyPhysics()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisRigidbodyPhysics, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisRigidbodyPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisRigidbodyPhysics*, "", "NoteDebrisRigidbodyPhysics");

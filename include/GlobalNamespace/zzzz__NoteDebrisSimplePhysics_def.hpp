#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisSimplePhysics)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisSimplePhysics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisSimplePhysics);
// Type: ::NoteDebrisSimplePhysics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4774))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4776))
// CS Name: ::NoteDebrisSimplePhysics*
class CORDL_TYPE NoteDebrisSimplePhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::NoteDebrisPhysics)]{};

/// @brief Field _currentForce offset 0x18
 __declspec(property(get=__get__currentForce, put=__set__currentForce)) ::UnityEngine::Vector3  _currentForce;

/// @brief Field _currentTorque offset 0x24
 __declspec(property(get=__get__currentTorque, put=__set__currentTorque)) ::UnityEngine::Vector3  _currentTorque;

/// @brief Field _transform offset 0x30
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _gravity offset 0x38
 __declspec(property(get=__get__gravity, put=__set__gravity)) ::UnityEngine::Vector3  _gravity;

/// @brief Field _firstUpdate offset 0x44
 __declspec(property(get=__get__firstUpdate, put=__set__firstUpdate)) bool  _firstUpdate;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

constexpr void __set__currentForce(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__currentForce() ;

constexpr ::UnityEngine::Vector3 const& __get__currentForce() const;

constexpr void __set__currentTorque(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__currentTorque() ;

constexpr ::UnityEngine::Vector3 const& __get__currentTorque() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__gravity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__gravity() ;

constexpr ::UnityEngine::Vector3 const& __get__gravity() const;

constexpr void __set__firstUpdate(bool  value) ;

constexpr bool& __get__firstUpdate() ;

constexpr bool const& __get__firstUpdate() const;

/// @brief Method get_position addr 0x2388588 size 0x1c virtual true final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method Start addr 0x23885a4 size 0x2c virtual false final false
inline void Start() ;

/// @brief Method LateUpdate addr 0x23885d0 size 0x19c virtual false final false
inline void LateUpdate() ;

/// @brief Method Init addr 0x238876c size 0x2c virtual true final false
inline void Init(::UnityEngine::Vector3  force, ::UnityEngine::Vector3  torque) ;

/// @brief Method AddVelocity addr 0x2388798 size 0x20 virtual true final false
inline void AddVelocity(::UnityEngine::Vector3  force) ;

static inline ::GlobalNamespace::NoteDebrisSimplePhysics* New_ctor() ;

/// @brief Method .ctor addr 0x23887b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSimplePhysics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteDebrisSimplePhysics(NoteDebrisSimplePhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSimplePhysics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteDebrisSimplePhysics(NoteDebrisSimplePhysics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteDebrisSimplePhysics()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisSimplePhysics, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisSimplePhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisSimplePhysics*, "", "NoteDebrisSimplePhysics");

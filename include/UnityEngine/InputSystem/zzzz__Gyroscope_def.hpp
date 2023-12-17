#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(Gyroscope)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Gyroscope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Gyroscope);
// Type: UnityEngine.InputSystem::Gyroscope
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6276))
// CS Name: ::UnityEngine.InputSystem::Gyroscope*
class CORDL_TYPE Gyroscope : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::Sensor)]{};

/// @brief Field <angularVelocity>k__BackingField offset 0x158
 __declspec(property(get=__get__angularVelocity_k__BackingField, put=__set__angularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _angularVelocity_k__BackingField;

 __declspec(property(get=get_angularVelocity, put=set_angularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  angularVelocity;

constexpr void __set__angularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__angularVelocity_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__angularVelocity_k__BackingField() const;

static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Gyroscope*  value) ;

static inline ::UnityEngine::InputSystem::Gyroscope* getStaticF__current_k__BackingField() ;

/// @brief Method get_angularVelocity addr 0x2aa7dd0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity() ;

/// @brief Method set_angularVelocity addr 0x2aa7dd8 size 0x8 virtual false final false
inline void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_current addr 0x2aa7de0 size 0x48 virtual false final false
static inline ::UnityEngine::InputSystem::Gyroscope* get_current() ;

/// @brief Method set_current addr 0x2aa7e28 size 0x4c virtual false final false
static inline void set_current(::UnityEngine::InputSystem::Gyroscope*  value) ;

/// @brief Method MakeCurrent addr 0x2aa7e74 size 0x54 virtual true final false
inline void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2aa7ec8 size 0x84 virtual true final false
inline void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2aa7f4c size 0x78 virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::Gyroscope* New_ctor() ;

/// @brief Method .ctor addr 0x2aa7fc4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gyroscope(Gyroscope && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gyroscope(Gyroscope const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gyroscope()  = default;
public:


// Fields

// Static field <current>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Gyroscope, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Gyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Gyroscope*, "UnityEngine.InputSystem", "Gyroscope");

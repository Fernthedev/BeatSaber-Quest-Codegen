#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(ProximitySensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class ProximitySensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::ProximitySensor);
// Type: UnityEngine.InputSystem::ProximitySensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6283))
// CS Name: ::UnityEngine.InputSystem::ProximitySensor*
class CORDL_TYPE ProximitySensor : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::Sensor)]{};

/// @brief Field <distance>k__BackingField offset 0x158
 __declspec(property(get=__get__distance_k__BackingField, put=__set__distance_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _distance_k__BackingField;

 __declspec(property(get=get_distance, put=set_distance)) ::UnityEngine::InputSystem::Controls::AxisControl*  distance;

constexpr void __set__distance_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* __get__distance_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> __get__distance_k__BackingField() const;

static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::ProximitySensor*  value) ;

static inline ::UnityEngine::InputSystem::ProximitySensor* getStaticF__current_k__BackingField() ;

/// @brief Method get_distance addr 0x2aa8bb4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_distance() ;

/// @brief Method set_distance addr 0x2aa8bbc size 0x8 virtual false final false
inline void set_distance(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method get_current addr 0x2aa8bc4 size 0x48 virtual false final false
static inline ::UnityEngine::InputSystem::ProximitySensor* get_current() ;

/// @brief Method set_current addr 0x2aa8c0c size 0x4c virtual false final false
static inline void set_current(::UnityEngine::InputSystem::ProximitySensor*  value) ;

/// @brief Method MakeCurrent addr 0x2aa8c58 size 0x54 virtual true final false
inline void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2aa8cac size 0x84 virtual true final false
inline void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2aa8d30 size 0x78 virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::ProximitySensor* New_ctor() ;

/// @brief Method .ctor addr 0x2aa8da8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ProximitySensor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximitySensor(ProximitySensor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximitySensor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximitySensor(ProximitySensor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProximitySensor()  = default;
public:


// Fields

// Static field <current>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::ProximitySensor, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::ProximitySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::ProximitySensor*, "UnityEngine.InputSystem", "ProximitySensor");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(LightSensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class LightSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LightSensor);
// Type: UnityEngine.InputSystem::LightSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6281))
// CS Name: ::UnityEngine.InputSystem::LightSensor*
class CORDL_TYPE LightSensor : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::Sensor)]{};

/// @brief Field <lightLevel>k__BackingField offset 0x158
 __declspec(property(get=__get__lightLevel_k__BackingField, put=__set__lightLevel_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _lightLevel_k__BackingField;

 __declspec(property(get=get_lightLevel, put=set_lightLevel)) ::UnityEngine::InputSystem::Controls::AxisControl*  lightLevel;

constexpr void __set__lightLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* __get__lightLevel_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> __get__lightLevel_k__BackingField() const;

static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::LightSensor*  value) ;

static inline ::UnityEngine::InputSystem::LightSensor* getStaticF__current_k__BackingField() ;

/// @brief Method get_lightLevel addr 0x2aa87bc size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel() ;

/// @brief Method set_lightLevel addr 0x2aa87c4 size 0x8 virtual false final false
inline void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method get_current addr 0x2aa87cc size 0x48 virtual false final false
static inline ::UnityEngine::InputSystem::LightSensor* get_current() ;

/// @brief Method set_current addr 0x2aa8814 size 0x4c virtual false final false
static inline void set_current(::UnityEngine::InputSystem::LightSensor*  value) ;

/// @brief Method MakeCurrent addr 0x2aa8860 size 0x54 virtual true final false
inline void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2aa88b4 size 0x84 virtual true final false
inline void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2aa8938 size 0x78 virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::LightSensor* New_ctor() ;

/// @brief Method .ctor addr 0x2aa89b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightSensor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightSensor(LightSensor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightSensor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightSensor(LightSensor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightSensor()  = default;
public:


// Fields

// Static field <current>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LightSensor, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::LightSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LightSensor*, "UnityEngine.InputSystem", "LightSensor");

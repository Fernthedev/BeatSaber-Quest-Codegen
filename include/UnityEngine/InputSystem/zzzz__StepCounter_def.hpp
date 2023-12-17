#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(StepCounter)
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class StepCounter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::StepCounter);
// Type: UnityEngine.InputSystem::StepCounter
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6286))
// CS Name: ::UnityEngine.InputSystem::StepCounter*
class CORDL_TYPE StepCounter : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::Sensor)]{};

/// @brief Field <stepCounter>k__BackingField offset 0x158
 __declspec(property(get=__get__stepCounter_k__BackingField, put=__set__stepCounter_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl*  _stepCounter_k__BackingField;

 __declspec(property(get=get_stepCounter, put=set_stepCounter)) ::UnityEngine::InputSystem::Controls::IntegerControl*  stepCounter;

constexpr void __set__stepCounter_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* __get__stepCounter_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> __get__stepCounter_k__BackingField() const;

static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::StepCounter*  value) ;

static inline ::UnityEngine::InputSystem::StepCounter* getStaticF__current_k__BackingField() ;

/// @brief Method get_stepCounter addr 0x2aa91a8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_stepCounter() ;

/// @brief Method set_stepCounter addr 0x2aa91b0 size 0x8 virtual false final false
inline void set_stepCounter(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

/// @brief Method get_current addr 0x2aa91b8 size 0x48 virtual false final false
static inline ::UnityEngine::InputSystem::StepCounter* get_current() ;

/// @brief Method set_current addr 0x2aa9200 size 0x4c virtual false final false
static inline void set_current(::UnityEngine::InputSystem::StepCounter*  value) ;

/// @brief Method MakeCurrent addr 0x2aa924c size 0x54 virtual true final false
inline void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2aa92a0 size 0x84 virtual true final false
inline void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2aa9324 size 0x78 virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::StepCounter* New_ctor() ;

/// @brief Method .ctor addr 0x2aa939c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StepCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StepCounter(StepCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StepCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StepCounter(StepCounter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StepCounter()  = default;
public:


// Fields

// Static field <current>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::StepCounter, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::StepCounter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::StepCounter*, "UnityEngine.InputSystem", "StepCounter");

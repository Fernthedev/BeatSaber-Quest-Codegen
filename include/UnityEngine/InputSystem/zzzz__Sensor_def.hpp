#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Sensor)
// Forward declare root types
namespace UnityEngine::InputSystem {
class Sensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Sensor);
// Type: UnityEngine.InputSystem::Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6274))
// CS Name: ::UnityEngine.InputSystem::Sensor*
class CORDL_TYPE Sensor : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x158};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x158 - sizeof(::UnityEngine::InputSystem::InputDevice)]{};

 __declspec(property(get=get_samplingFrequency, put=set_samplingFrequency)) float_t  samplingFrequency;

/// @brief Method get_samplingFrequency addr 0x2aa7a38 size 0xf4 virtual false final false
inline float_t get_samplingFrequency() ;

/// @brief Method set_samplingFrequency addr 0x2aa7b2c size 0xa0 virtual false final false
inline void set_samplingFrequency(float_t  value) ;

static inline ::UnityEngine::InputSystem::Sensor* New_ctor() ;

/// @brief Method .ctor addr 0x2aa7bcc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Sensor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sensor(Sensor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sensor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sensor(Sensor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Sensor()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Sensor, 0x158>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Sensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Sensor*, "UnityEngine.InputSystem", "Sensor");

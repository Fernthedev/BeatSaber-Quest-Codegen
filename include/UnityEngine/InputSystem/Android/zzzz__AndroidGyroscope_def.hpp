#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gyroscope_def.hpp"
CORDL_MODULE_EXPORT(AndroidGyroscope)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGyroscope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGyroscope);
// Type: UnityEngine.InputSystem.Android::AndroidGyroscope
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6276))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6434))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidGyroscope*
class CORDL_TYPE AndroidGyroscope : public ::UnityEngine::InputSystem::Gyroscope {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::Gyroscope)]{};

static inline ::UnityEngine::InputSystem::Android::AndroidGyroscope* New_ctor() ;

/// @brief Method .ctor addr 0x2ae59d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGyroscope", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidGyroscope(AndroidGyroscope && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGyroscope", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidGyroscope(AndroidGyroscope const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidGyroscope()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGyroscope, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGyroscope*, "UnityEngine.InputSystem.Android", "AndroidGyroscope");

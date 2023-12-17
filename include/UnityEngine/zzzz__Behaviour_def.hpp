#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Behaviour)
// Forward declare root types
namespace UnityEngine {
class Behaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Behaviour);
// Type: UnityEngine::Behaviour
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10187))
// CS Name: ::UnityEngine::Behaviour*
class CORDL_TYPE Behaviour : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Component)]{};

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_isActiveAndEnabled)) bool  isActiveAndEnabled;

/// @brief Method get_enabled addr 0x2ccd1b4 size 0x3c virtual false final false
inline bool get_enabled() ;

/// @brief Method set_enabled addr 0x2ccd1f0 size 0x44 virtual false final false
inline void set_enabled(bool  value) ;

/// @brief Method get_isActiveAndEnabled addr 0x2ccd234 size 0x3c virtual false final false
inline bool get_isActiveAndEnabled() ;

static inline ::UnityEngine::Behaviour* New_ctor() ;

/// @brief Method .ctor addr 0x2cc69b8 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Behaviour(Behaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Behaviour(Behaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Behaviour()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Behaviour, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Behaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Behaviour*, "UnityEngine", "Behaviour");

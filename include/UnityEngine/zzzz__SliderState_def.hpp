#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SliderState)
// Forward declare root types
namespace UnityEngine {
class SliderState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SliderState);
// Type: UnityEngine::SliderState
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14598))
// CS Name: ::UnityEngine::SliderState*
class CORDL_TYPE SliderState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::UnityEngine::SliderState* New_ctor() ;

/// @brief Method .ctor addr 0x2cfe268 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderState(SliderState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderState(SliderState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderState()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SliderState, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SliderState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SliderState*, "UnityEngine", "SliderState");

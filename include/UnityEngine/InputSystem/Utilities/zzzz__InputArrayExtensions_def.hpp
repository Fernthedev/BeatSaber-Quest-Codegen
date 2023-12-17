#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputArrayExtensions)
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class InputArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::InputArrayExtensions);
// Type: UnityEngine.InputSystem.Utilities::InputArrayExtensions
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6670))
// CS Name: ::UnityEngine.InputSystem.Utilities::InputArrayExtensions*
class CORDL_TYPE InputArrayExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static inline int32_t IndexOfReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array, TValue  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static inline bool Contains(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array, TValue  value) ;

/// @brief Method ContainsReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static inline bool ContainsReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array, TValue  value) ;

// Ctor Parameters [CppParam { name: "", ty: "InputArrayExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputArrayExtensions(InputArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputArrayExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputArrayExtensions(InputArrayExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputArrayExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::InputArrayExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::InputArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputArrayExtensions*, "UnityEngine.InputSystem.Utilities", "InputArrayExtensions");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExecuteAlways)
// Forward declare root types
namespace UnityEngine {
class ExecuteAlways;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExecuteAlways);
// Type: UnityEngine::ExecuteAlways
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10219))
// CS Name: ::UnityEngine::ExecuteAlways*
class CORDL_TYPE ExecuteAlways : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::ExecuteAlways* New_ctor() ;

/// @brief Method .ctor addr 0x2cd28f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteAlways", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteAlways(ExecuteAlways && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteAlways", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteAlways(ExecuteAlways const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExecuteAlways()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExecuteAlways, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ExecuteAlways);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExecuteAlways*, "UnityEngine", "ExecuteAlways");

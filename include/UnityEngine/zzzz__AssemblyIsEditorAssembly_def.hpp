#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AssemblyIsEditorAssembly)
// Forward declare root types
namespace UnityEngine {
class AssemblyIsEditorAssembly;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssemblyIsEditorAssembly);
// Type: UnityEngine::AssemblyIsEditorAssembly
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10223))
// CS Name: ::UnityEngine::AssemblyIsEditorAssembly*
class CORDL_TYPE AssemblyIsEditorAssembly : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

// Ctor Parameters [CppParam { name: "", ty: "AssemblyIsEditorAssembly", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyIsEditorAssembly(AssemblyIsEditorAssembly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyIsEditorAssembly", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyIsEditorAssembly(AssemblyIsEditorAssembly const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyIsEditorAssembly()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssemblyIsEditorAssembly, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssemblyIsEditorAssembly);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssemblyIsEditorAssembly*, "UnityEngine", "AssemblyIsEditorAssembly");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnityEngineModuleAssembly)
// Forward declare root types
namespace UnityEngine {
class UnityEngineModuleAssembly;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnityEngineModuleAssembly);
// Type: UnityEngine::UnityEngineModuleAssembly
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16007))
// CS Name: ::UnityEngine::UnityEngineModuleAssembly*
class CORDL_TYPE UnityEngineModuleAssembly : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::UnityEngineModuleAssembly* New_ctor() ;

/// @brief Method .ctor addr 0x2d18058 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngineModuleAssembly", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEngineModuleAssembly(UnityEngineModuleAssembly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngineModuleAssembly", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEngineModuleAssembly(UnityEngineModuleAssembly const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEngineModuleAssembly()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityEngineModuleAssembly, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::UnityEngineModuleAssembly);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityEngineModuleAssembly*, "UnityEngine", "UnityEngineModuleAssembly");

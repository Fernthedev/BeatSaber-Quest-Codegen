#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClassLibraryInitializer)
// Forward declare root types
namespace UnityEngine {
class ClassLibraryInitializer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ClassLibraryInitializer);
// Type: UnityEngine::ClassLibraryInitializer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10188))
// CS Name: ::UnityEngine::ClassLibraryInitializer*
class CORDL_TYPE ClassLibraryInitializer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Init addr 0x2ccd2c8 size 0x8 virtual false final false
static inline void Init() ;

// Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassLibraryInitializer(ClassLibraryInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassLibraryInitializer(ClassLibraryInitializer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ClassLibraryInitializer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ClassLibraryInitializer, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ClassLibraryInitializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClassLibraryInitializer*, "UnityEngine", "ClassLibraryInitializer");

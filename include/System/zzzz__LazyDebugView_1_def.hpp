#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyDebugView_1)
// Forward declare root types
namespace System {
template<typename T>
class LazyDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::LazyDebugView_1);
// Type: System::LazyDebugView`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2433))
// CS Name: ::System::LazyDebugView`1<T>*
class CORDL_TYPE LazyDebugView_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "LazyDebugView_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyDebugView_1(LazyDebugView_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyDebugView_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyDebugView_1(LazyDebugView_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LazyDebugView_1()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::LazyDebugView_1, "System", "LazyDebugView`1");

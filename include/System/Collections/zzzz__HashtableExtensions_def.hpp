#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(HashtableExtensions)
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class HashtableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::HashtableExtensions);
// Type: System.Collections::HashtableExtensions
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9506))
// CS Name: ::System.Collections::HashtableExtensions*
class CORDL_TYPE HashtableExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool TryGetValue(::System::Collections::Hashtable*  table, ::System::Object*  key, ByRef<T>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "HashtableExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashtableExtensions(HashtableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashtableExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashtableExtensions(HashtableExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashtableExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::HashtableExtensions, 0x10>, "Size mismatch!");

} // namespace end def System::Collections
NEED_NO_BOX(::System::Collections::HashtableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashtableExtensions*, "System.Collections", "HashtableExtensions");

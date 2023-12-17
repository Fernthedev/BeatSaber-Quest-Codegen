#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntrospectiveSortUtilities)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
class IntrospectiveSortUtilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::IntrospectiveSortUtilities);
// Type: System.Collections.Generic::IntrospectiveSortUtilities
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3862))
// CS Name: ::System.Collections.Generic::IntrospectiveSortUtilities*
class CORDL_TYPE IntrospectiveSortUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method FloorLog2PlusOne addr 0x258bce8 size 0x34 virtual false final false
static inline int32_t FloorLog2PlusOne(int32_t  n) ;

/// @brief Method ThrowOrIgnoreBadComparer addr 0x258bd1c size 0x68 virtual false final false
static inline void ThrowOrIgnoreBadComparer(::System::Object*  comparer) ;

// Ctor Parameters [CppParam { name: "", ty: "IntrospectiveSortUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntrospectiveSortUtilities(IntrospectiveSortUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntrospectiveSortUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntrospectiveSortUtilities(IntrospectiveSortUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntrospectiveSortUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::IntrospectiveSortUtilities, 0x10>, "Size mismatch!");

} // namespace end def System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::IntrospectiveSortUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::IntrospectiveSortUtilities*, "System.Collections.Generic", "IntrospectiveSortUtilities");

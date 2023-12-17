#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeFilter)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class TypeFilter;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TypeFilter);
// Type: System.Reflection::TypeFilter
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3501))
// CS Name: ::System.Reflection::TypeFilter*
class CORDL_TYPE TypeFilter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Reflection::TypeFilter* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x24e9094 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x24ec808 size 0x14 virtual true final false
inline bool Invoke(::System::Type*  m, ::System::Object*  filterCriteria) ;

// Ctor Parameters [CppParam { name: "", ty: "TypeFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeFilter(TypeFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeFilter(TypeFilter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeFilter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeFilter, 0x80>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::TypeFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeFilter*, "System.Reflection", "TypeFilter");

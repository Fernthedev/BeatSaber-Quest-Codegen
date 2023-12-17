#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MonoLinqHelper)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::IO {
class MonoLinqHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::MonoLinqHelper);
// Type: System.IO::MonoLinqHelper
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3640))
// CS Name: ::System.IO::MonoLinqHelper*
class CORDL_TYPE MonoLinqHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> ToArray(::System::Collections::Generic::IEnumerable_1<T>*  source) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoLinqHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoLinqHelper(MonoLinqHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoLinqHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoLinqHelper(MonoLinqHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoLinqHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoLinqHelper, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::MonoLinqHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoLinqHelper*, "System.IO", "MonoLinqHelper");

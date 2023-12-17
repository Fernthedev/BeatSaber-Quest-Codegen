#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TsvReader)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Polyglot {
class TsvReader;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::TsvReader);
// Type: Polyglot::TsvReader
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15549))
// CS Name: ::Polyglot::TsvReader*
class CORDL_TYPE TsvReader : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Parse addr 0x2801768 size 0x1ac virtual false final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Parse(::StringW  src) ;

static inline ::Polyglot::TsvReader* New_ctor() ;

/// @brief Method .ctor addr 0x2801914 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TsvReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TsvReader(TsvReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TsvReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TsvReader(TsvReader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TsvReader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::TsvReader, 0x10>, "Size mismatch!");

} // namespace end def Polyglot
NEED_NO_BOX(::Polyglot::TsvReader);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::TsvReader*, "Polyglot", "TsvReader");

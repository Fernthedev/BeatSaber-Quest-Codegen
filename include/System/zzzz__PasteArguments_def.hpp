#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PasteArguments)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System {
class PasteArguments;
}
// Write type traits
MARK_REF_PTR_T(::System::PasteArguments);
// Type: System::PasteArguments
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8864))
// CS Name: ::System::PasteArguments*
class CORDL_TYPE PasteArguments : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method AppendArgument addr 0x2946770 size 0x1dc virtual false final false
static inline void AppendArgument(::System::Text::StringBuilder*  stringBuilder, ::StringW  argument) ;

/// @brief Method ContainsNoWhitespaceOrQuotes addr 0x294694c size 0xc0 virtual false final false
static inline bool ContainsNoWhitespaceOrQuotes(::StringW  s) ;

// Ctor Parameters [CppParam { name: "", ty: "PasteArguments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PasteArguments(PasteArguments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasteArguments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasteArguments(PasteArguments const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PasteArguments()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::PasteArguments, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::PasteArguments);
DEFINE_IL2CPP_ARG_TYPE(::System::PasteArguments*, "System", "PasteArguments");

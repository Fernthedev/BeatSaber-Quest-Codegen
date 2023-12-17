#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringExtensions)
// Forward declare root types
namespace System {
class StringExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::StringExtensions);
// Type: System::StringExtensions
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8865))
// CS Name: ::System::StringExtensions*
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SubstringTrim addr 0x2946a0c size 0x170 virtual false final false
static inline ::StringW SubstringTrim(::StringW  value, int32_t  startIndex, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringExtensions(StringExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringExtensions(StringExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StringExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::StringExtensions, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::StringExtensions*, "System", "StringExtensions");

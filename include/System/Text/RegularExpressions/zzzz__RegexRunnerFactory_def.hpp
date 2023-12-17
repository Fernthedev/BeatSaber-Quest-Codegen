#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RegexRunnerFactory)
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexRunnerFactory;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexRunnerFactory);
// Type: System.Text.RegularExpressions::RegexRunnerFactory
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8930))
// CS Name: ::System.Text.RegularExpressions::RegexRunnerFactory*
class CORDL_TYPE RegexRunnerFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Text::RegularExpressions::RegexRunner* CreateInstance() ;

// Ctor Parameters [CppParam { name: "", ty: "RegexRunnerFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexRunnerFactory(RegexRunnerFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexRunnerFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexRunnerFactory(RegexRunnerFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RegexRunnerFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexRunnerFactory, 0x10>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexRunnerFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexRunnerFactory*, "System.Text.RegularExpressions", "RegexRunnerFactory");

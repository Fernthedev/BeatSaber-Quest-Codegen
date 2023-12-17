#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILocalize)
// Forward declare root types
namespace Polyglot {
class ILocalize;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::ILocalize);
// Type: Polyglot::ILocalize
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15553))
// CS Name: ::Polyglot::ILocalize*
class CORDL_TYPE ILocalize {
public:
// Declarations
/// @brief Method OnLocalize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnLocalize() ;

// Ctor Parameters [CppParam { name: "", ty: "ILocalize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ILocalize(ILocalize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ILocalize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILocalize(ILocalize const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(::Polyglot::ILocalize);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::ILocalize*, "Polyglot", "ILocalize");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INestedSite)
namespace System {
class IServiceProvider;
}
namespace System::ComponentModel {
class ISite;
}
// Forward declare root types
namespace System::ComponentModel {
class INestedSite;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INestedSite);
// Type: System.ComponentModel::INestedSite
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9433))
// CS Name: ::System.ComponentModel::INestedSite*
class CORDL_TYPE INestedSite {
public:
// Declarations
 __declspec(property(get=get_FullName)) ::StringW  FullName;

/// @brief Convert operator to "::System::ComponentModel::ISite"
constexpr operator  ::System::ComponentModel::ISite*() noexcept;

/// @brief Convert operator to "::System::IServiceProvider"
constexpr operator  ::System::IServiceProvider*() noexcept;

/// @brief Method get_FullName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_FullName() ;

// Ctor Parameters [CppParam { name: "", ty: "INestedSite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
INestedSite(INestedSite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "INestedSite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INestedSite(INestedSite const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INestedSite);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INestedSite*, "System.ComponentModel", "INestedSite");

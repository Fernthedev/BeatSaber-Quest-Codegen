#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExtenderProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class IExtenderProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IExtenderProvider);
// Type: System.ComponentModel::IExtenderProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9432))
// CS Name: ::System.ComponentModel::IExtenderProvider*
class CORDL_TYPE IExtenderProvider {
public:
// Declarations
/// @brief Method CanExtend addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CanExtend(::System::Object*  extendee) ;

// Ctor Parameters [CppParam { name: "", ty: "IExtenderProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IExtenderProvider(IExtenderProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IExtenderProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExtenderProvider(IExtenderProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IExtenderProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IExtenderProvider*, "System.ComponentModel", "IExtenderProvider");

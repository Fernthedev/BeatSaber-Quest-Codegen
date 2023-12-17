#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyPropertyChanged)
// Forward declare root types
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INotifyPropertyChanged);
// Type: System.ComponentModel::INotifyPropertyChanged
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9465))
// CS Name: ::System.ComponentModel::INotifyPropertyChanged*
class CORDL_TYPE INotifyPropertyChanged {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "INotifyPropertyChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
INotifyPropertyChanged(INotifyPropertyChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "INotifyPropertyChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INotifyPropertyChanged(INotifyPropertyChanged const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INotifyPropertyChanged);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyPropertyChanged*, "System.ComponentModel", "INotifyPropertyChanged");

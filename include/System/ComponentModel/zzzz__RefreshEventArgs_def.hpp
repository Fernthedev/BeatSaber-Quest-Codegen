#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(RefreshEventArgs)
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RefreshEventArgs);
// Type: System.ComponentModel::RefreshEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9451))
// CS Name: ::System.ComponentModel::RefreshEventArgs*
class CORDL_TYPE RefreshEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::EventArgs)]{};

/// @brief Field <TypeChanged>k__BackingField offset 0x10
 __declspec(property(get=__get__TypeChanged_k__BackingField, put=__set__TypeChanged_k__BackingField)) ::System::Type*  _TypeChanged_k__BackingField;

constexpr void __set__TypeChanged_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__TypeChanged_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__TypeChanged_k__BackingField() const;

static inline ::System::ComponentModel::RefreshEventArgs* New_ctor(::System::Type*  typeChanged) ;

/// @brief Method .ctor addr 0x2917e34 size 0x6c virtual false final false
inline void _ctor(::System::Type*  typeChanged) ;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RefreshEventArgs(RefreshEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RefreshEventArgs(RefreshEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RefreshEventArgs()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RefreshEventArgs, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RefreshEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventArgs*, "System.ComponentModel", "RefreshEventArgs");

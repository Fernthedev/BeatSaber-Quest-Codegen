#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ComponentCollection)
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComponentCollection);
// Type: System.ComponentModel::ComponentCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3777))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9387))
// CS Name: ::System.ComponentModel::ComponentCollection*
class CORDL_TYPE ComponentCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Collections::ReadOnlyCollectionBase)]{};

 __declspec(property(get=get_Item)) ::System::ComponentModel::IComponent*  Item[];

/// @brief Method get_Item addr 0x2903c04 size 0x588 virtual true final false
inline ::System::ComponentModel::IComponent* get_Item(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentCollection(ComponentCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentCollection(ComponentCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ComponentCollection()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComponentCollection, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComponentCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentCollection*, "System.ComponentModel", "ComponentCollection");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ComponentConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComponentConverter);
// Type: System.ComponentModel::ComponentConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9449))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9470))
// CS Name: ::System.ComponentModel::ComponentConverter*
class CORDL_TYPE ComponentConverter : public ::System::ComponentModel::ReferenceConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::ComponentModel::ReferenceConverter)]{};

static inline ::System::ComponentModel::ComponentConverter* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x291a430 size 0x6c virtual false final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method GetProperties addr 0x291a49c size 0x64 virtual true final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method GetPropertiesSupported addr 0x291a568 size 0x8 virtual true final false
inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "ComponentConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentConverter(ComponentConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentConverter(ComponentConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ComponentConverter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComponentConverter, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComponentConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentConverter*, "System.ComponentModel", "ComponentConverter");

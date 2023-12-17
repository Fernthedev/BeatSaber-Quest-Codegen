#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ExpandableObjectConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ExpandableObjectConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ExpandableObjectConverter);
// Type: System.ComponentModel::ExpandableObjectConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9426))
// CS Name: ::System.ComponentModel::ExpandableObjectConverter*
class CORDL_TYPE ExpandableObjectConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::ComponentModel::TypeConverter)]{};

static inline ::System::ComponentModel::ExpandableObjectConverter* New_ctor() ;

/// @brief Method .ctor addr 0x2910004 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method GetProperties addr 0x291000c size 0x68 virtual true final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method GetPropertiesSupported addr 0x2910074 size 0x8 virtual true final false
inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpandableObjectConverter(ExpandableObjectConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandableObjectConverter(ExpandableObjectConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExpandableObjectConverter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExpandableObjectConverter, 0x10>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExpandableObjectConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExpandableObjectConverter*, "System.ComponentModel", "ExpandableObjectConverter");

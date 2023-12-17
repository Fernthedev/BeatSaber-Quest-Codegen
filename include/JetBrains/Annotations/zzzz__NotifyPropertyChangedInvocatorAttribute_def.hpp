#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotifyPropertyChangedInvocatorAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class NotifyPropertyChangedInvocatorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute);
// Type: JetBrains.Annotations::NotifyPropertyChangedInvocatorAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15743))
// CS Name: ::JetBrains.Annotations::NotifyPropertyChangedInvocatorAttribute*
class CORDL_TYPE NotifyPropertyChangedInvocatorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <ParameterName>k__BackingField offset 0x10
 __declspec(property(get=__get__ParameterName_k__BackingField, put=__set__ParameterName_k__BackingField)) ::StringW  _ParameterName_k__BackingField;

 __declspec(property(get=get_ParameterName, put=set_ParameterName)) ::StringW  ParameterName;

constexpr void __set__ParameterName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__ParameterName_k__BackingField() ;

constexpr ::StringW const& __get__ParameterName_k__BackingField() const;

static inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eb9fe8 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* New_ctor(::StringW  parameterName) ;

/// @brief Method .ctor addr 0x2eb9ff0 size 0x28 virtual false final false
inline void _ctor(::StringW  parameterName) ;

/// @brief Method get_ParameterName addr 0x2eba018 size 0x8 virtual false final false
inline ::StringW get_ParameterName() ;

/// @brief Method set_ParameterName addr 0x2eba020 size 0x8 virtual false final false
inline void set_ParameterName(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "NotifyPropertyChangedInvocatorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotifyPropertyChangedInvocatorAttribute(NotifyPropertyChangedInvocatorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotifyPropertyChangedInvocatorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotifyPropertyChangedInvocatorAttribute(NotifyPropertyChangedInvocatorAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotifyPropertyChangedInvocatorAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*, "JetBrains.Annotations", "NotifyPropertyChangedInvocatorAttribute");

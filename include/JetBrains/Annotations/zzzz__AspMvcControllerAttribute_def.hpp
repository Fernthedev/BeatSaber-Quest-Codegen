#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcControllerAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcControllerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcControllerAttribute);
// Type: JetBrains.Annotations::AspMvcControllerAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15768))
// CS Name: ::JetBrains.Annotations::AspMvcControllerAttribute*
class CORDL_TYPE AspMvcControllerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <AnonymousProperty>k__BackingField offset 0x10
 __declspec(property(get=__get__AnonymousProperty_k__BackingField, put=__set__AnonymousProperty_k__BackingField)) ::StringW  _AnonymousProperty_k__BackingField;

 __declspec(property(get=get_AnonymousProperty, put=set_AnonymousProperty)) ::StringW  AnonymousProperty;

constexpr void __set__AnonymousProperty_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__AnonymousProperty_k__BackingField() ;

constexpr ::StringW const& __get__AnonymousProperty_k__BackingField() const;

static inline ::JetBrains::Annotations::AspMvcControllerAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba5c4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::JetBrains::Annotations::AspMvcControllerAttribute* New_ctor(::StringW  anonymousProperty) ;

/// @brief Method .ctor addr 0x2eba5cc size 0x28 virtual false final false
inline void _ctor(::StringW  anonymousProperty) ;

/// @brief Method get_AnonymousProperty addr 0x2eba5f4 size 0x8 virtual false final false
inline ::StringW get_AnonymousProperty() ;

/// @brief Method set_AnonymousProperty addr 0x2eba5fc size 0x8 virtual false final false
inline void set_AnonymousProperty(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcControllerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspMvcControllerAttribute(AspMvcControllerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcControllerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspMvcControllerAttribute(AspMvcControllerAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspMvcControllerAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcControllerAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcControllerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcControllerAttribute*, "JetBrains.Annotations", "AspMvcControllerAttribute");

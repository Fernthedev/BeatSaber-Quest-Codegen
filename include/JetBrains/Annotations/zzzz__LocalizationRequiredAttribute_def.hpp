#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(LocalizationRequiredAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class LocalizationRequiredAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::LocalizationRequiredAttribute);
// Type: JetBrains.Annotations::LocalizationRequiredAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15745))
// CS Name: ::JetBrains.Annotations::LocalizationRequiredAttribute*
class CORDL_TYPE LocalizationRequiredAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Required>k__BackingField offset 0x10
 __declspec(property(get=__get__Required_k__BackingField, put=__set__Required_k__BackingField)) bool  _Required_k__BackingField;

 __declspec(property(get=get_Required, put=set_Required)) bool  Required;

constexpr void __set__Required_k__BackingField(bool  value) ;

constexpr bool& __get__Required_k__BackingField() ;

constexpr bool const& __get__Required_k__BackingField() const;

static inline ::JetBrains::Annotations::LocalizationRequiredAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba0ac size 0x20 virtual false final false
inline void _ctor() ;

static inline ::JetBrains::Annotations::LocalizationRequiredAttribute* New_ctor(bool  required) ;

/// @brief Method .ctor addr 0x2eba0cc size 0x2c virtual false final false
inline void _ctor(bool  required) ;

/// @brief Method get_Required addr 0x2eba0f8 size 0x8 virtual false final false
inline bool get_Required() ;

/// @brief Method set_Required addr 0x2eba100 size 0xc virtual false final false
inline void set_Required(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationRequiredAttribute(LocalizationRequiredAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationRequiredAttribute(LocalizationRequiredAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalizationRequiredAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::LocalizationRequiredAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::LocalizationRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::LocalizationRequiredAttribute*, "JetBrains.Annotations", "LocalizationRequiredAttribute");

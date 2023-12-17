#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NeutralResourcesLanguageAttribute)
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Forward declare root types
namespace System::Resources {
class NeutralResourcesLanguageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::NeutralResourcesLanguageAttribute);
// Type: System.Resources::NeutralResourcesLanguageAttribute
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3427))
// CS Name: ::System.Resources::NeutralResourcesLanguageAttribute*
class CORDL_TYPE NeutralResourcesLanguageAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <CultureName>k__BackingField offset 0x10
 __declspec(property(get=__get__CultureName_k__BackingField, put=__set__CultureName_k__BackingField)) ::StringW  _CultureName_k__BackingField;

/// @brief Field <Location>k__BackingField offset 0x18
 __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField)) ::System::Resources::UltimateResourceFallbackLocation  _Location_k__BackingField;

 __declspec(property(get=get_CultureName)) ::StringW  CultureName;

 __declspec(property(get=get_Location)) ::System::Resources::UltimateResourceFallbackLocation  Location;

constexpr void __set__CultureName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__CultureName_k__BackingField() ;

constexpr ::StringW const& __get__CultureName_k__BackingField() const;

constexpr void __set__Location_k__BackingField(::System::Resources::UltimateResourceFallbackLocation  value) ;

constexpr ::System::Resources::UltimateResourceFallbackLocation& __get__Location_k__BackingField() ;

constexpr ::System::Resources::UltimateResourceFallbackLocation const& __get__Location_k__BackingField() const;

static inline ::System::Resources::NeutralResourcesLanguageAttribute* New_ctor(::StringW  cultureName) ;

/// @brief Method .ctor addr 0x24deee4 size 0x7c virtual false final false
inline void _ctor(::StringW  cultureName) ;

/// @brief Method get_CultureName addr 0x24def60 size 0x8 virtual false final false
inline ::StringW get_CultureName() ;

/// @brief Method get_Location addr 0x24def68 size 0x8 virtual false final false
inline ::System::Resources::UltimateResourceFallbackLocation get_Location() ;

// Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NeutralResourcesLanguageAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::NeutralResourcesLanguageAttribute, 0x20>, "Size mismatch!");

} // namespace end def System::Resources
NEED_NO_BOX(::System::Resources::NeutralResourcesLanguageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::NeutralResourcesLanguageAttribute*, "System.Resources", "NeutralResourcesLanguageAttribute");

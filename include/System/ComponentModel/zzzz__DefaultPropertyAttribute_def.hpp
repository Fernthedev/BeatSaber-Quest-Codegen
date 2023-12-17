#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultPropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DefaultPropertyAttribute);
// Type: System.ComponentModel::DefaultPropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9418))
// CS Name: ::System.ComponentModel::DefaultPropertyAttribute*
class CORDL_TYPE DefaultPropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Name>k__BackingField offset 0x10
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

 __declspec(property(get=get_Name)) ::StringW  Name;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

static inline void setStaticF_Default(::System::ComponentModel::DefaultPropertyAttribute*  value) ;

static inline ::System::ComponentModel::DefaultPropertyAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::DefaultPropertyAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x290e580 size 0x28 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Name addr 0x290e5a8 size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method Equals addr 0x290e5b0 size 0x80 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x290e630 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultPropertyAttribute(DefaultPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultPropertyAttribute(DefaultPropertyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultPropertyAttribute()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultPropertyAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultPropertyAttribute*, "System.ComponentModel", "DefaultPropertyAttribute");

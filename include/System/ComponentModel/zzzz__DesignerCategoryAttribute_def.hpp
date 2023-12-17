#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerCategoryAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerCategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignerCategoryAttribute);
// Type: System.ComponentModel::DesignerCategoryAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9390))
// CS Name: ::System.ComponentModel::DesignerCategoryAttribute*
class CORDL_TYPE DesignerCategoryAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Category>k__BackingField offset 0x10
 __declspec(property(get=__get__Category_k__BackingField, put=__set__Category_k__BackingField)) ::StringW  _Category_k__BackingField;

 __declspec(property(get=get_Category)) ::StringW  Category;

 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

static inline void setStaticF_Component(::System::ComponentModel::DesignerCategoryAttribute*  value) ;

static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Component() ;

static inline void setStaticF_Default(::System::ComponentModel::DesignerCategoryAttribute*  value) ;

static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Default() ;

static inline void setStaticF_Form(::System::ComponentModel::DesignerCategoryAttribute*  value) ;

static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Form() ;

static inline void setStaticF_Generic(::System::ComponentModel::DesignerCategoryAttribute*  value) ;

static inline ::System::ComponentModel::DesignerCategoryAttribute* getStaticF_Generic() ;

constexpr void __set__Category_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Category_k__BackingField() ;

constexpr ::StringW const& __get__Category_k__BackingField() const;

static inline ::System::ComponentModel::DesignerCategoryAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x290462c size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::ComponentModel::DesignerCategoryAttribute* New_ctor(::StringW  category) ;

/// @brief Method .ctor addr 0x2904688 size 0x28 virtual false final false
inline void _ctor(::StringW  category) ;

/// @brief Method get_Category addr 0x29046b0 size 0x8 virtual false final false
inline ::StringW get_Category() ;

/// @brief Method Equals addr 0x29046b8 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2904748 size 0x20 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2904768 size 0x78 virtual true final false
inline bool IsDefaultAttribute() ;

/// @brief Method get_TypeId addr 0x29047e0 size 0x38 virtual true final false
inline ::System::Object* get_TypeId() ;

// Ctor Parameters [CppParam { name: "", ty: "DesignerCategoryAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DesignerCategoryAttribute(DesignerCategoryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DesignerCategoryAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DesignerCategoryAttribute(DesignerCategoryAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DesignerCategoryAttribute()  = default;
public:


// Fields

// Static field Component

// Static field Default

// Static field Form

// Static field Generic


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignerCategoryAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignerCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerCategoryAttribute*, "System.ComponentModel", "DesignerCategoryAttribute");

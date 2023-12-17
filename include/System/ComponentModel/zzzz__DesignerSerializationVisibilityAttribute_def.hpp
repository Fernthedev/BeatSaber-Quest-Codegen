#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerSerializationVisibilityAttribute)
namespace System {
class Object;
}
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerSerializationVisibilityAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignerSerializationVisibilityAttribute);
// Type: System.ComponentModel::DesignerSerializationVisibilityAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9392))
// CS Name: ::System.ComponentModel::DesignerSerializationVisibilityAttribute*
class CORDL_TYPE DesignerSerializationVisibilityAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Visibility>k__BackingField offset 0x10
 __declspec(property(get=__get__Visibility_k__BackingField, put=__set__Visibility_k__BackingField)) ::System::ComponentModel::DesignerSerializationVisibility  _Visibility_k__BackingField;

 __declspec(property(get=get_Visibility)) ::System::ComponentModel::DesignerSerializationVisibility  Visibility;

static inline void setStaticF_Content(::System::ComponentModel::DesignerSerializationVisibilityAttribute*  value) ;

static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Content() ;

static inline void setStaticF_Hidden(::System::ComponentModel::DesignerSerializationVisibilityAttribute*  value) ;

static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Hidden() ;

static inline void setStaticF_Visible(::System::ComponentModel::DesignerSerializationVisibilityAttribute*  value) ;

static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Visible() ;

static inline void setStaticF_Default(::System::ComponentModel::DesignerSerializationVisibilityAttribute*  value) ;

static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* getStaticF_Default() ;

constexpr void __set__Visibility_k__BackingField(::System::ComponentModel::DesignerSerializationVisibility  value) ;

constexpr ::System::ComponentModel::DesignerSerializationVisibility& __get__Visibility_k__BackingField() ;

constexpr ::System::ComponentModel::DesignerSerializationVisibility const& __get__Visibility_k__BackingField() const;

static inline ::System::ComponentModel::DesignerSerializationVisibilityAttribute* New_ctor(::System::ComponentModel::DesignerSerializationVisibility  visibility) ;

/// @brief Method .ctor addr 0x2904930 size 0x28 virtual false final false
inline void _ctor(::System::ComponentModel::DesignerSerializationVisibility  visibility) ;

/// @brief Method get_Visibility addr 0x2904958 size 0x8 virtual false final false
inline ::System::ComponentModel::DesignerSerializationVisibility get_Visibility() ;

/// @brief Method Equals addr 0x2904960 size 0xd8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2904a38 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2904a40 size 0x68 virtual true final false
inline bool IsDefaultAttribute() ;

// Ctor Parameters [CppParam { name: "", ty: "DesignerSerializationVisibilityAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DesignerSerializationVisibilityAttribute(DesignerSerializationVisibilityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DesignerSerializationVisibilityAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DesignerSerializationVisibilityAttribute(DesignerSerializationVisibilityAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DesignerSerializationVisibilityAttribute()  = default;
public:


// Fields

// Static field Content

// Static field Hidden

// Static field Visible

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignerSerializationVisibilityAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignerSerializationVisibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerSerializationVisibilityAttribute*, "System.ComponentModel", "DesignerSerializationVisibilityAttribute");

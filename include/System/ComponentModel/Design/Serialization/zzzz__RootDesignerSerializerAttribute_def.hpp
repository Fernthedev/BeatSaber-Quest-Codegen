#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RootDesignerSerializerAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel::Design::Serialization {
class RootDesignerSerializerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute);
// Type: System.ComponentModel.Design.Serialization::RootDesignerSerializerAttribute
namespace System::ComponentModel::Design::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9505))
// CS Name: ::System.ComponentModel.Design.Serialization::RootDesignerSerializerAttribute*
class CORDL_TYPE RootDesignerSerializerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Attribute)]{};

/// @brief Field _typeId offset 0x10
 __declspec(property(get=__get__typeId, put=__set__typeId)) ::StringW  _typeId;

/// @brief Field <Reloadable>k__BackingField offset 0x18
 __declspec(property(get=__get__Reloadable_k__BackingField, put=__set__Reloadable_k__BackingField)) bool  _Reloadable_k__BackingField;

/// @brief Field <SerializerTypeName>k__BackingField offset 0x20
 __declspec(property(get=__get__SerializerTypeName_k__BackingField, put=__set__SerializerTypeName_k__BackingField)) ::StringW  _SerializerTypeName_k__BackingField;

/// @brief Field <SerializerBaseTypeName>k__BackingField offset 0x28
 __declspec(property(get=__get__SerializerBaseTypeName_k__BackingField, put=__set__SerializerBaseTypeName_k__BackingField)) ::StringW  _SerializerBaseTypeName_k__BackingField;

 __declspec(property(get=get_SerializerBaseTypeName)) ::StringW  SerializerBaseTypeName;

 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

constexpr void __set__typeId(::StringW  value) ;

constexpr ::StringW& __get__typeId() ;

constexpr ::StringW const& __get__typeId() const;

constexpr void __set__Reloadable_k__BackingField(bool  value) ;

constexpr bool& __get__Reloadable_k__BackingField() ;

constexpr bool const& __get__Reloadable_k__BackingField() const;

constexpr void __set__SerializerTypeName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__SerializerTypeName_k__BackingField() ;

constexpr ::StringW const& __get__SerializerTypeName_k__BackingField() const;

constexpr void __set__SerializerBaseTypeName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__SerializerBaseTypeName_k__BackingField() ;

constexpr ::StringW const& __get__SerializerBaseTypeName_k__BackingField() const;

static inline ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute* New_ctor(::StringW  serializerTypeName, ::StringW  baseSerializerTypeName, bool  reloadable) ;

/// @brief Method .ctor addr 0x293b404 size 0x3c virtual false final false
inline void _ctor(::StringW  serializerTypeName, ::StringW  baseSerializerTypeName, bool  reloadable) ;

/// @brief Method get_SerializerBaseTypeName addr 0x293b440 size 0x8 virtual false final false
inline ::StringW get_SerializerBaseTypeName() ;

/// @brief Method get_TypeId addr 0x293b448 size 0x8c virtual true final false
inline ::System::Object* get_TypeId() ;

// Ctor Parameters [CppParam { name: "", ty: "RootDesignerSerializerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RootDesignerSerializerAttribute(RootDesignerSerializerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RootDesignerSerializerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RootDesignerSerializerAttribute(RootDesignerSerializerAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RootDesignerSerializerAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, 0x30>, "Size mismatch!");

} // namespace end def System::ComponentModel::Design::Serialization
NEED_NO_BOX(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");

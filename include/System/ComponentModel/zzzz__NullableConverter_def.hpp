#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(NullableConverter)
namespace System {
class Object;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class NullableConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NullableConverter);
// Type: System.ComponentModel::NullableConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9443))
// CS Name: ::System.ComponentModel::NullableConverter*
class CORDL_TYPE NullableConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::ComponentModel::TypeConverter)]{};

/// @brief Field <NullableType>k__BackingField offset 0x10
 __declspec(property(get=__get__NullableType_k__BackingField, put=__set__NullableType_k__BackingField)) ::System::Type*  _NullableType_k__BackingField;

/// @brief Field <UnderlyingType>k__BackingField offset 0x18
 __declspec(property(get=__get__UnderlyingType_k__BackingField, put=__set__UnderlyingType_k__BackingField)) ::System::Type*  _UnderlyingType_k__BackingField;

/// @brief Field <UnderlyingTypeConverter>k__BackingField offset 0x20
 __declspec(property(get=__get__UnderlyingTypeConverter_k__BackingField, put=__set__UnderlyingTypeConverter_k__BackingField)) ::System::ComponentModel::TypeConverter*  _UnderlyingTypeConverter_k__BackingField;

 __declspec(property(get=get_NullableType)) ::System::Type*  NullableType;

 __declspec(property(get=get_UnderlyingType)) ::System::Type*  UnderlyingType;

 __declspec(property(get=get_UnderlyingTypeConverter)) ::System::ComponentModel::TypeConverter*  UnderlyingTypeConverter;

constexpr void __set__NullableType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__NullableType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__NullableType_k__BackingField() const;

constexpr void __set__UnderlyingType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__UnderlyingType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__UnderlyingType_k__BackingField() const;

constexpr void __set__UnderlyingTypeConverter_k__BackingField(::System::ComponentModel::TypeConverter*  value) ;

constexpr ::System::ComponentModel::TypeConverter* __get__UnderlyingTypeConverter_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeConverter*> __get__UnderlyingTypeConverter_k__BackingField() const;

static inline ::System::ComponentModel::NullableConverter* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x2911698 size 0x12c virtual false final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method CanConvertFrom addr 0x29117c4 size 0xc4 virtual true final false
inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType) ;

/// @brief Method ConvertFrom addr 0x2911888 size 0x13c virtual true final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method CanConvertTo addr 0x29119c4 size 0xc4 virtual true final false
inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  destinationType) ;

/// @brief Method ConvertTo addr 0x2911a88 size 0x1f0 virtual true final false
inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType) ;

/// @brief Method CreateInstance addr 0x2911c78 size 0x24 virtual true final false
inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Collections::IDictionary*  propertyValues) ;

/// @brief Method GetCreateInstanceSupported addr 0x2911c9c size 0x24 virtual true final false
inline bool GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetProperties addr 0x2911cc0 size 0x24 virtual true final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method GetPropertiesSupported addr 0x2911ce4 size 0x24 virtual true final false
inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValues addr 0x2911d08 size 0x3b0 virtual true final false
inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesExclusive addr 0x29120b8 size 0x28 virtual true final false
inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesSupported addr 0x29120e0 size 0x28 virtual true final false
inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method IsValid addr 0x2912108 size 0x34 virtual true final false
inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

/// @brief Method get_NullableType addr 0x291213c size 0x8 virtual false final false
inline ::System::Type* get_NullableType() ;

/// @brief Method get_UnderlyingType addr 0x2912144 size 0x8 virtual false final false
inline ::System::Type* get_UnderlyingType() ;

/// @brief Method get_UnderlyingTypeConverter addr 0x291214c size 0x8 virtual false final false
inline ::System::ComponentModel::TypeConverter* get_UnderlyingTypeConverter() ;

// Ctor Parameters [CppParam { name: "", ty: "NullableConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullableConverter(NullableConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullableConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullableConverter(NullableConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NullableConverter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NullableConverter, 0x28>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NullableConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NullableConverter*, "System.ComponentModel", "NullableConverter");

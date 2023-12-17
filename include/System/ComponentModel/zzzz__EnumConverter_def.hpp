#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(EnumConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class EnumConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EnumConverter);
// Type: System.ComponentModel::EnumConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9472))
// CS Name: ::System.ComponentModel::EnumConverter*
class CORDL_TYPE EnumConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::ComponentModel::TypeConverter)]{};

/// @brief Field values offset 0x10
 __declspec(property(get=__get_values, put=__set_values)) ::System::ComponentModel::__TypeConverter__StandardValuesCollection*  values;

/// @brief Field type offset 0x18
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

 __declspec(property(get=get_Comparer)) ::System::Collections::IComparer*  Comparer;

constexpr void __set_values(::System::ComponentModel::__TypeConverter__StandardValuesCollection*  value) ;

constexpr ::System::ComponentModel::__TypeConverter__StandardValuesCollection* __get_values() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeConverter__StandardValuesCollection*> __get_values() const;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

static inline ::System::ComponentModel::EnumConverter* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x291b508 size 0x28 virtual false final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method CanConvertFrom addr 0x291b530 size 0xf0 virtual true final false
inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType) ;

/// @brief Method CanConvertTo addr 0x291b620 size 0xf0 virtual true final false
inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  destinationType) ;

/// @brief Method get_Comparer addr 0x291b710 size 0x58 virtual true final false
inline ::System::Collections::IComparer* get_Comparer() ;

/// @brief Method ConvertFrom addr 0x291b768 size 0x4fc virtual true final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method ConvertTo addr 0x291bc64 size 0xd90 virtual true final false
inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType) ;

/// @brief Method GetStandardValues addr 0x291ca6c size 0x3f0 virtual true final false
inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesExclusive addr 0x291cf50 size 0xa8 virtual true final false
inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesSupported addr 0x291cff8 size 0x8 virtual true final false
inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method IsValid addr 0x291d000 size 0x6c virtual true final false
inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumConverter(EnumConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumConverter(EnumConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumConverter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EnumConverter, 0x20>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EnumConverter*, "System.ComponentModel", "EnumConverter");
